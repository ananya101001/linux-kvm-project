savedcmd_drivers/char/ttyprintk.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/char/ttyprintk.ko drivers/char/ttyprintk.o drivers/char/ttyprintk.mod.o .module-common.o