savedcmd_drivers/char/tpm/tpm_crb.mod := printf '%s\n'   tpm_crb.o | awk '!x[$$0]++ { print("drivers/char/tpm/"$$0) }' > drivers/char/tpm/tpm_crb.mod
