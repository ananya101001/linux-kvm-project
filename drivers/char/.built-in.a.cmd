savedcmd_drivers/char/built-in.a := rm -f drivers/char/built-in.a;  printf "drivers/char/%s " mem.o random.o misc.o hpet.o agp/built-in.a | xargs ar cDPrST drivers/char/built-in.a
