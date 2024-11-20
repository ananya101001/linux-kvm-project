savedcmd_drivers/net/ethernet/mellanox/mlx5/core/mlx5_core.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/net/ethernet/mellanox/mlx5/core/mlx5_core.o @drivers/net/ethernet/mellanox/mlx5/core/mlx5_core.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/net/ethernet/mellanox/mlx5/core/mlx5_core.o

drivers/net/ethernet/mellanox/mlx5/core/mlx5_core.o: $(wildcard ./tools/objtool/objtool)
