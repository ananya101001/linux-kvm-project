savedcmd_net/sched/sch_teql.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/sch_teql.ko net/sched/sch_teql.o net/sched/sch_teql.mod.o .module-common.o