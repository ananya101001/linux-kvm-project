savedcmd_drivers/watchdog/watchdog.mod := printf '%s\n'   watchdog_core.o watchdog_dev.o watchdog_pretimeout.o | awk '!x[$$0]++ { print("drivers/watchdog/"$$0) }' > drivers/watchdog/watchdog.mod
