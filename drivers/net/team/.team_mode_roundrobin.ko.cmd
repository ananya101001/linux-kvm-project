savedcmd_drivers/net/team/team_mode_roundrobin.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/net/team/team_mode_roundrobin.ko drivers/net/team/team_mode_roundrobin.o drivers/net/team/team_mode_roundrobin.mod.o .module-common.o