savedcmd_net/sched/sch_choke.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/sch_choke.ko net/sched/sch_choke.o net/sched/sch_choke.mod.o .module-common.o
