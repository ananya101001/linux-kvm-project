savedcmd_net/sched/act_ife.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/act_ife.ko net/sched/act_ife.o net/sched/act_ife.mod.o .module-common.o
