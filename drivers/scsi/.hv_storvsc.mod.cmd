savedcmd_drivers/scsi/hv_storvsc.mod := printf '%s\n'   storvsc_drv.o | awk '!x[$$0]++ { print("drivers/scsi/"$$0) }' > drivers/scsi/hv_storvsc.mod
