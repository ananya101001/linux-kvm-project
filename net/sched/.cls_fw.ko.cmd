savedcmd_net/sched/cls_fw.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/cls_fw.ko net/sched/cls_fw.o net/sched/cls_fw.mod.o .module-common.o
