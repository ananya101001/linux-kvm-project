savedcmd_drivers/uio/uio_hv_generic.mod := printf '%s\n'   uio_hv_generic.o | awk '!x[$$0]++ { print("drivers/uio/"$$0) }' > drivers/uio/uio_hv_generic.mod
