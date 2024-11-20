savedcmd_drivers/block/zram/zram.mod := printf '%s\n'   zcomp.o zram_drv.o backend_lzorle.o backend_lzo.o | awk '!x[$$0]++ { print("drivers/block/zram/"$$0) }' > drivers/block/zram/zram.mod
