savedcmd_drivers/scsi/sr_mod.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/scsi/sr_mod.o @drivers/scsi/sr_mod.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/scsi/sr_mod.o

drivers/scsi/sr_mod.o: $(wildcard ./tools/objtool/objtool)
