savedcmd_drivers/infiniband/hw/mlx5/mlx5_ib.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/infiniband/hw/mlx5/mlx5_ib.o @drivers/infiniband/hw/mlx5/mlx5_ib.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/infiniband/hw/mlx5/mlx5_ib.o

drivers/infiniband/hw/mlx5/mlx5_ib.o: $(wildcard ./tools/objtool/objtool)
