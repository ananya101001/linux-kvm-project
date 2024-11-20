savedcmd_drivers/xen/xen-evtchn.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/xen/xen-evtchn.o @drivers/xen/xen-evtchn.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/xen/xen-evtchn.o

drivers/xen/xen-evtchn.o: $(wildcard ./tools/objtool/objtool)
