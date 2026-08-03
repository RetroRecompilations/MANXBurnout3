set pagination off
set confirm off
set debuginfod enabled off
set env DXVK_LOG_LEVEL none
set env DXVK_WSI_DRIVER SDL3
set env B3_MAX_POLLS 1

break b3_env_init
run 'Burnout 3 Takedown/default.xbe'
finish

# Guest 0x00466DF0 is the first retail frontend render context. Watch its
# persistent local scale (offsets 8/c), which should stay at 1.0 after
# sub_001C17F0 constructs it. Resolved scale at offsets 28/2c merely mirrors
# these values once per frame in sub_001C17A0.
watch *(unsigned int *)0x200466df8
watch *(unsigned int *)0x200466dfc
set $hits = 0
commands 2
  silent
  set $hits = $hits + 1
  printf "UI-SCALE-X hit=%d value=%08x pc=%p\n", $hits, *(unsigned int *)0x200466df8, $pc
  backtrace 10
  continue
end
commands 3
  silent
  set $hits = $hits + 1
  printf "UI-SCALE-Y hit=%d value=%08x pc=%p\n", $hits, *(unsigned int *)0x200466dfc, $pc
  backtrace 10
  continue
end

continue
