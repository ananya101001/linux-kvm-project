savedcmd_drivers/hv/hv_utils.mod := printf '%s\n'   hv_util.o hv_kvp.o hv_snapshot.o hv_utils_transport.o | awk '!x[$$0]++ { print("drivers/hv/"$$0) }' > drivers/hv/hv_utils.mod
