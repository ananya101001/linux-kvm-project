savedcmd_net/sched/sch_codel.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/sch_codel.ko net/sched/sch_codel.o net/sched/sch_codel.mod.o .module-common.o
