savedcmd_drivers/vhost/vhost_vsock.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/vhost/vhost_vsock.o @drivers/vhost/vhost_vsock.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/vhost/vhost_vsock.o

drivers/vhost/vhost_vsock.o: $(wildcard ./tools/objtool/objtool)
