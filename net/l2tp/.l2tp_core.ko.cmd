savedcmd_net/l2tp/l2tp_core.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/l2tp/l2tp_core.ko net/l2tp/l2tp_core.o net/l2tp/l2tp_core.mod.o .module-common.o
