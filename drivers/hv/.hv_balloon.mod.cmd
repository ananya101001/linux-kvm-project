savedcmd_drivers/hv/hv_balloon.mod := printf '%s\n'   hv_balloon.o | awk '!x[$$0]++ { print("drivers/hv/"$$0) }' > drivers/hv/hv_balloon.mod
