savedcmd_lib/math/cordic.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o lib/math/cordic.ko lib/math/cordic.o lib/math/cordic.mod.o .module-common.o
