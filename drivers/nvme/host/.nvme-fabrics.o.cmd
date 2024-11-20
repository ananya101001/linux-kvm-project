savedcmd_drivers/nvme/host/nvme-fabrics.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/nvme/host/nvme-fabrics.o @drivers/nvme/host/nvme-fabrics.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/nvme/host/nvme-fabrics.o

drivers/nvme/host/nvme-fabrics.o: $(wildcard ./tools/objtool/objtool)
