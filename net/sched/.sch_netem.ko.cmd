savedcmd_net/sched/sch_netem.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/sch_netem.ko net/sched/sch_netem.o net/sched/sch_netem.mod.o .module-common.o
