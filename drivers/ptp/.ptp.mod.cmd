savedcmd_drivers/ptp/ptp.mod := printf '%s\n'   ptp_clock.o ptp_chardev.o ptp_sysfs.o ptp_vclock.o | awk '!x[$$0]++ { print("drivers/ptp/"$$0) }' > drivers/ptp/ptp.mod
