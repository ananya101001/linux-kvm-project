savedcmd_net/vmw_vsock/vsock.o := ld -m elf_x86_64 -z noexecstack   -r -o net/vmw_vsock/vsock.o @net/vmw_vsock/vsock.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/vmw_vsock/vsock.o

net/vmw_vsock/vsock.o: $(wildcard ./tools/objtool/objtool)
