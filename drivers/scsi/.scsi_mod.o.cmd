savedcmd_drivers/scsi/scsi_mod.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/scsi/scsi_mod.o @drivers/scsi/scsi_mod.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/scsi/scsi_mod.o

drivers/scsi/scsi_mod.o: $(wildcard ./tools/objtool/objtool)
