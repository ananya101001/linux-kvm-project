savedcmd_drivers/hv/hv_vmbus.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/hv/hv_vmbus.o @drivers/hv/hv_vmbus.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/hv/hv_vmbus.o

drivers/hv/hv_vmbus.o: $(wildcard ./tools/objtool/objtool)
