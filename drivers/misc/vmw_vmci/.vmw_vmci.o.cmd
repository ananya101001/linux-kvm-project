savedcmd_drivers/misc/vmw_vmci/vmw_vmci.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/misc/vmw_vmci/vmw_vmci.o @drivers/misc/vmw_vmci/vmw_vmci.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/misc/vmw_vmci/vmw_vmci.o

drivers/misc/vmw_vmci/vmw_vmci.o: $(wildcard ./tools/objtool/objtool)
