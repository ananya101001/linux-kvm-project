savedcmd_drivers/infiniband/hw/mlx4/mlx4_ib.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/infiniband/hw/mlx4/mlx4_ib.o @drivers/infiniband/hw/mlx4/mlx4_ib.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/infiniband/hw/mlx4/mlx4_ib.o

drivers/infiniband/hw/mlx4/mlx4_ib.o: $(wildcard ./tools/objtool/objtool)
