savedcmd_drivers/pci/controller/modules.order := {   cat drivers/pci/controller/dwc/modules.order;   cat drivers/pci/controller/mobiveil/modules.order;   cat drivers/pci/controller/plda/modules.order;   echo drivers/pci/controller/pci-hyperv.o;   echo drivers/pci/controller/pci-hyperv-intf.o; :; } > drivers/pci/controller/modules.order