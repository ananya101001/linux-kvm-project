savedcmd_drivers/platform/x86/built-in.a := rm -f drivers/platform/x86/built-in.a;  printf "drivers/platform/x86/%s " amd/built-in.a intel/built-in.a | xargs ar cDPrST drivers/platform/x86/built-in.a
