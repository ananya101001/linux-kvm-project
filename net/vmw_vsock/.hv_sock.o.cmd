savedcmd_net/vmw_vsock/hv_sock.o := ld -m elf_x86_64 -z noexecstack   -r -o net/vmw_vsock/hv_sock.o @net/vmw_vsock/hv_sock.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/vmw_vsock/hv_sock.o

net/vmw_vsock/hv_sock.o: $(wildcard ./tools/objtool/objtool)
