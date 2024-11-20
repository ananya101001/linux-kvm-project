savedcmd_drivers/vhost/vhost_scsi.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/vhost/vhost_scsi.o @drivers/vhost/vhost_scsi.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/vhost/vhost_scsi.o

drivers/vhost/vhost_scsi.o: $(wildcard ./tools/objtool/objtool)
