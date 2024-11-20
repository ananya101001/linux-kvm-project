savedcmd_net/rds/rds_rdma.o := ld -m elf_x86_64 -z noexecstack   -r -o net/rds/rds_rdma.o @net/rds/rds_rdma.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/rds/rds_rdma.o

net/rds/rds_rdma.o: $(wildcard ./tools/objtool/objtool)
