savedcmd_drivers/scsi/hv_storvsc.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/scsi/hv_storvsc.o @drivers/scsi/hv_storvsc.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/scsi/hv_storvsc.o

drivers/scsi/hv_storvsc.o: $(wildcard ./tools/objtool/objtool)
