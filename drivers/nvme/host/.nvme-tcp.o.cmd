savedcmd_drivers/nvme/host/nvme-tcp.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/nvme/host/nvme-tcp.o @drivers/nvme/host/nvme-tcp.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/nvme/host/nvme-tcp.o

drivers/nvme/host/nvme-tcp.o: $(wildcard ./tools/objtool/objtool)
