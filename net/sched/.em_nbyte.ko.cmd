savedcmd_net/sched/em_nbyte.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/em_nbyte.ko net/sched/em_nbyte.o net/sched/em_nbyte.mod.o .module-common.o
