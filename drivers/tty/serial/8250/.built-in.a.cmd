savedcmd_drivers/tty/serial/8250/built-in.a := rm -f drivers/tty/serial/8250/built-in.a;  printf "drivers/tty/serial/8250/%s " 8250_core.o 8250_platform.o 8250_pnp.o 8250_port.o 8250_dwlib.o 8250_pcilib.o 8250_early.o 8250_dw.o 8250_pci.o 8250_pericom.o | xargs ar cDPrST drivers/tty/serial/8250/built-in.a