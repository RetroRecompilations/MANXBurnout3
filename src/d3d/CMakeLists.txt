# D3D8 Compatibility Layer (legacy D3D11 backend — being replaced by Vulkan)
# vulkan_d3d8.c is the new GPU Vulkan backend.

add_library(d3d8_compat STATIC
    d3d8_resources.c
    d3d8_shaders.c
    d3d8_states.c
    d3d8_combiners.c
    d3d8_vsh.c
)

target_include_directories(d3d8_compat PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# D3D11 and DXGI libraries (for remaining D3D11 files)
target_link_libraries(d3d8_compat
    d3d11
    dxgi
    dxguid
    d3dcompiler
)

if(MSVC)
    target_compile_options(d3d8_compat PRIVATE /W4 /O2)
else()
    target_compile_options(d3d8_compat PRIVATE -Wall -Wextra -O2)
endif()
