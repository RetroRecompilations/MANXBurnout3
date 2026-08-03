set pagination off
set confirm off
set debuginfod enabled off
set env DXVK_LOG_LEVEL none
set env DXVK_WSI_DRIVER SDL3
set env B3_MAX_POLLS 1

break b3_env_init
run 'Burnout 3 Takedown/default.xbe'
finish

# The guest memory mapping is fixed at 0x200000000. This dword is the
# final valid UI render node's next link in the current native run.
watch *(unsigned int *)0x200464fe8
set $hits = 0
commands
  silent
  set $hits = $hits + 1
  printf "WATCH hit=%d value=%08x pc=%p\n", $hits, *(unsigned int *)0x200464fe8, $pc
  backtrace 8
  if $hits >= 24
    disable
  end
  continue
end

continue
