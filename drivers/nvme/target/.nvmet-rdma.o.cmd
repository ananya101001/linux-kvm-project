savedcmd_drivers/nvme/target/nvmet-rdma.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/nvme/target/nvmet-rdma.o @drivers/nvme/target/nvmet-rdma.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/nvme/target/nvmet-rdma.o

drivers/nvme/target/nvmet-rdma.o: $(wildcard ./tools/objtool/objtool)
