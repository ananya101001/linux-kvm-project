savedcmd_net/sched/sch_sfq.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/sch_sfq.ko net/sched/sch_sfq.o net/sched/sch_sfq.mod.o .module-common.o
