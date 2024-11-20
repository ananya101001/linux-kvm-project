savedcmd_drivers/pci/controller/pci-hyperv-intf.mod := printf '%s\n'   pci-hyperv-intf.o | awk '!x[$$0]++ { print("drivers/pci/controller/"$$0) }' > drivers/pci/controller/pci-hyperv-intf.mod
