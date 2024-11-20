savedcmd_drivers/scsi/sd_mod.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/scsi/sd_mod.o @drivers/scsi/sd_mod.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/scsi/sd_mod.o

drivers/scsi/sd_mod.o: $(wildcard ./tools/objtool/objtool)
