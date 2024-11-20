savedcmd_drivers/pps/pps_core.mod := printf '%s\n'   pps.o kapi.o sysfs.o | awk '!x[$$0]++ { print("drivers/pps/"$$0) }' > drivers/pps/pps_core.mod
