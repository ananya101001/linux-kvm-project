savedcmd_drivers/input/serio/hyperv-keyboard.mod := printf '%s\n'   hyperv-keyboard.o | awk '!x[$$0]++ { print("drivers/input/serio/"$$0) }' > drivers/input/serio/hyperv-keyboard.mod
