savedcmd_drivers/thermal/intel/int340x_thermal/acpi_thermal_rel.mod := printf '%s\n'   acpi_thermal_rel.o | awk '!x[$$0]++ { print("drivers/thermal/intel/int340x_thermal/"$$0) }' > drivers/thermal/intel/int340x_thermal/acpi_thermal_rel.mod