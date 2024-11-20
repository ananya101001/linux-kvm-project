savedcmd_drivers/hv/built-in.a := rm -f drivers/hv/built-in.a;  printf "drivers/hv/%s " hv_common.o | xargs ar cDPrST drivers/hv/built-in.a
