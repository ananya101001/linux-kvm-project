savedcmd_drivers/infiniband/hw/mlx5/mlx5_ib.mod := printf '%s\n'   ah.o cmd.o cong.o counters.o cq.o data_direct.o dm.o doorbell.o gsi.o ib_virt.o mad.o main.o mem.o mr.o qp.o qpc.o restrack.o srq.o srq_cmd.o umr.o wr.o odp.o devx.o fs.o qos.o std_types.o | awk '!x[$$0]++ { print("drivers/infiniband/hw/mlx5/"$$0) }' > drivers/infiniband/hw/mlx5/mlx5_ib.mod