savedcmd_drivers/target/loopback/tcm_loop.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/target/loopback/tcm_loop.ko drivers/target/loopback/tcm_loop.o drivers/target/loopback/tcm_loop.mod.o .module-common.o