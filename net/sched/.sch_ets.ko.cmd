savedcmd_net/sched/sch_ets.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/sch_ets.ko net/sched/sch_ets.o net/sched/sch_ets.mod.o .module-common.o
