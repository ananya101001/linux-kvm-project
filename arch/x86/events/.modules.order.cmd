savedcmd_arch/x86/events/modules.order := {   cat arch/x86/events/amd/modules.order;   cat arch/x86/events/intel/modules.order;   cat arch/x86/events/zhaoxin/modules.order;   echo arch/x86/events/rapl.o; :; } > arch/x86/events/modules.order