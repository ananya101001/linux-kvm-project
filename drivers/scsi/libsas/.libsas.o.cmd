savedcmd_drivers/scsi/libsas/libsas.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/scsi/libsas/libsas.o @drivers/scsi/libsas/libsas.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/scsi/libsas/libsas.o

drivers/scsi/libsas/libsas.o: $(wildcard ./tools/objtool/objtool)
