savedcmd_arch/x86/platform/intel/iosf_mbi.mod := printf '%s\n'   iosf_mbi.o | awk '!x[$$0]++ { print("arch/x86/platform/intel/"$$0) }' > arch/x86/platform/intel/iosf_mbi.mod
