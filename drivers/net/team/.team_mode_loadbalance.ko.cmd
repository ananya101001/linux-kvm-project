savedcmd_drivers/net/team/team_mode_loadbalance.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/net/team/team_mode_loadbalance.ko drivers/net/team/team_mode_loadbalance.o drivers/net/team/team_mode_loadbalance.mod.o .module-common.o