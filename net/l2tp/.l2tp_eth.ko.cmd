savedcmd_net/l2tp/l2tp_eth.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/l2tp/l2tp_eth.ko net/l2tp/l2tp_eth.o net/l2tp/l2tp_eth.mod.o .module-common.o
