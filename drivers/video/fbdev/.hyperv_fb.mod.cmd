savedcmd_drivers/video/fbdev/hyperv_fb.mod := printf '%s\n'   hyperv_fb.o | awk '!x[$$0]++ { print("drivers/video/fbdev/"$$0) }' > drivers/video/fbdev/hyperv_fb.mod
