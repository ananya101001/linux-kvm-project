savedcmd_drivers/net/ethernet/mellanox/mlx5/core/mlx5_core.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/net/ethernet/mellanox/mlx5/core/mlx5_core.ko drivers/net/ethernet/mellanox/mlx5/core/mlx5_core.o drivers/net/ethernet/mellanox/mlx5/core/mlx5_core.mod.o .module-common.o