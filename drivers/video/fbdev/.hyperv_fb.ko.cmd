savedcmd_drivers/video/fbdev/hyperv_fb.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/video/fbdev/hyperv_fb.ko drivers/video/fbdev/hyperv_fb.o drivers/video/fbdev/hyperv_fb.mod.o .module-common.o