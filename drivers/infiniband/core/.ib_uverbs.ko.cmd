savedcmd_drivers/infiniband/core/ib_uverbs.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/infiniband/core/ib_uverbs.ko drivers/infiniband/core/ib_uverbs.o drivers/infiniband/core/ib_uverbs.mod.o .module-common.o