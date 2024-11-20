savedcmd_drivers/nvme/host/nvme-fc.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/nvme/host/nvme-fc.o @drivers/nvme/host/nvme-fc.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/nvme/host/nvme-fc.o

drivers/nvme/host/nvme-fc.o: $(wildcard ./tools/objtool/objtool)
