savedcmd_drivers/pci/controller/pci-hyperv.mod := printf '%s\n'   pci-hyperv.o | awk '!x[$$0]++ { print("drivers/pci/controller/"$$0) }' > drivers/pci/controller/pci-hyperv.mod
