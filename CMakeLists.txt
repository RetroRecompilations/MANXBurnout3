cmake_minimum_required(VERSION 3.20)
project(MANXBurnout3 VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

option(MANX_BURNOUT3_BUILD_TESTS "Build native port unit tests" ON)
set(MANX_FRAMEWORK_SOURCE_DIR
    "${CMAKE_CURRENT_SOURCE_DIR}/../MANXFramework" CACHE PATH
    "Path to a MANXFramework source checkout")

if(EXISTS "${MANX_FRAMEWORK_SOURCE_DIR}/CMakeLists.txt")
    set(MANX_FRAMEWORK_BUILD_TESTS OFF CACHE BOOL "" FORCE)
    add_subdirectory("${MANX_FRAMEWORK_SOURCE_DIR}"
        "${CMAKE_BINARY_DIR}/_deps/manx-framework" EXCLUDE_FROM_ALL)
else()
    find_package(MANXFramework CONFIG REQUIRED)
endif()

find_package(SDL3 REQUIRED)
find_package(Vulkan REQUIRED)
find_package(Threads REQUIRED)

set(B3_HOST_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src/manx_host")
set(B3_GAME_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src/game")
set(B3_D3D_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src/d3d")
set(B3_KERNEL_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src/kernel")
set(B3_RECOMP_DIR "${B3_GAME_DIR}/recomp")
set(B3_NATIVE_DIR "${B3_RECOMP_DIR}/native")

add_library(burnout3_port STATIC
    ${B3_HOST_DIR}/burnout3_kernel_shim.c
    ${B3_HOST_DIR}/burnout3_game_native.c
    ${B3_HOST_DIR}/burnout3_game_frame_pump.c
    ${B3_GAME_DIR}/txd_loader.c
    ${B3_GAME_DIR}/bgv_loader.c
    ${B3_GAME_DIR}/track_loader.c
    ${B3_GAME_DIR}/track_collision.c
    ${B3_GAME_DIR}/track_route.c
    ${B3_GAME_DIR}/awd_loader.c
    ${B3_GAME_DIR}/static_textures.c
    ${B3_GAME_DIR}/rw_bridge.c
    ${B3_GAME_DIR}/rw_renderer.c
    ${B3_GAME_DIR}/fe_menu.c)
target_include_directories(burnout3_port PUBLIC
    ${B3_HOST_DIR}
    ${B3_D3D_DIR}
    ${B3_GAME_DIR}
    ${B3_RECOMP_DIR}
    ${B3_KERNEL_DIR})
target_include_directories(burnout3_port BEFORE PRIVATE ${B3_KERNEL_DIR})
target_compile_definitions(burnout3_port PUBLIC
    BURNOUT3_RECOMP_LINKED
    BURNOUT3_NATIVE_LINUX
    D3D8_USE_PORTABLE
    _GNU_SOURCE)
target_compile_options(burnout3_port PRIVATE -w)
target_link_libraries(burnout3_port PUBLIC
    Vulkan::Vulkan
    MANXFramework::XboxTexture
    MANXFramework::XboxD3D8
    Threads::Threads
    ${CMAKE_DL_LIBS}
    m)
if(TARGET MANXFramework::FMV)
    target_compile_definitions(burnout3_port PRIVATE B3_HAVE_FFMPEG)
    target_link_libraries(burnout3_port PUBLIC MANXFramework::FMV)
endif()

file(GLOB B3_NATIVE_FUNCTIONS CONFIGURE_DEPENDS
    "${B3_NATIVE_DIR}/f_*.c")
if(NOT B3_NATIVE_FUNCTIONS)
    message(FATAL_ERROR
        "No transformed native functions found in ${B3_NATIVE_DIR}")
endif()

add_library(burnout3_native STATIC
    ${B3_NATIVE_DIR}/b3_native_env.c
    ${B3_NATIVE_DIR}/b3_native_runtime.c
    ${B3_NATIVE_DIR}/recomp_stubs.c
    ${B3_NATIVE_FUNCTIONS})
target_include_directories(burnout3_native PUBLIC
    ${B3_NATIVE_DIR}
    ${B3_RECOMP_DIR})
target_compile_definitions(burnout3_native PRIVATE _GNU_SOURCE)
target_compile_options(burnout3_native PRIVATE -w
    -Wno-error=implicit-function-declaration
    "SHELL:-include ${B3_NATIVE_DIR}/msvc_compat.h"
    "SHELL:-include ${B3_NATIVE_DIR}/b3_decls.h")

add_library(burnout3_native_bindings OBJECT
    ${B3_NATIVE_DIR}/b3_native_d3d.c
    ${B3_NATIVE_DIR}/b3_native_dispatch.c)
target_include_directories(burnout3_native_bindings PRIVATE
    ${B3_NATIVE_DIR}
    ${B3_RECOMP_DIR}
    ${B3_D3D_DIR}
    ${B3_KERNEL_DIR})
target_compile_definitions(burnout3_native_bindings PRIVATE
    _GNU_SOURCE BURNOUT3_NATIVE_LINUX D3D8_USE_PORTABLE)
target_compile_options(burnout3_native_bindings PRIVATE -w
    "SHELL:-include ${B3_NATIVE_DIR}/msvc_compat.h"
    "SHELL:-include ${B3_NATIVE_DIR}/b3_decls.h")

add_executable(MANXBurnout3
    src/standalone_main.cpp
    ${B3_HOST_DIR}/burnout3_bridge.c
    $<TARGET_OBJECTS:burnout3_native_bindings>)
target_include_directories(MANXBurnout3 PRIVATE
    ${B3_HOST_DIR}
    ${B3_D3D_DIR}
    ${B3_GAME_DIR}
    ${B3_RECOMP_DIR}
    ${B3_NATIVE_DIR}
    ${B3_KERNEL_DIR})
target_compile_definitions(MANXBurnout3 PRIVATE
    BURNOUT3_RECOMP_LINKED
    BURNOUT3_NATIVE_LINUX
    D3D8_USE_PORTABLE
    _GNU_SOURCE)
target_link_libraries(MANXBurnout3 PRIVATE
    burnout3_port
    burnout3_native
    MANXFramework::Runtime
    SDL3::SDL3
    Threads::Threads
    ${CMAKE_DL_LIBS}
    m)

if(MANX_BURNOUT3_BUILD_TESTS)
    enable_testing()

    add_executable(burnout3_gameplay_unit_test
        tests/manx/burnout3_gameplay_unit_test.c)
    target_link_libraries(burnout3_gameplay_unit_test PRIVATE burnout3_port)
    add_test(NAME burnout3_gameplay_unit_test
        COMMAND burnout3_gameplay_unit_test)

    add_executable(burnout3_collision_unit_test
        tests/manx/burnout3_collision_unit_test.c)
    target_link_libraries(burnout3_collision_unit_test PRIVATE burnout3_port)
    add_test(NAME burnout3_collision_unit_test
        COMMAND burnout3_collision_unit_test)

    add_executable(burnout3_importer_test
        tests/manx/burnout3_importer_test.c
        ${B3_HOST_DIR}/burnout3_importer.c)
    target_include_directories(burnout3_importer_test PRIVATE ${B3_HOST_DIR})
    add_test(NAME burnout3_importer_test COMMAND burnout3_importer_test)
endif()
