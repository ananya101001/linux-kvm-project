savedcmd_drivers/pps/modules.order := {   cat drivers/pps/clients/modules.order;   cat drivers/pps/generators/modules.order;   echo drivers/pps/pps_core.o; :; } > drivers/pps/modules.order
