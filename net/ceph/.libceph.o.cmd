savedcmd_net/ceph/libceph.o := ld -m elf_x86_64 -z noexecstack   -r -o net/ceph/libceph.o @net/ceph/libceph.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/ceph/libceph.o

net/ceph/libceph.o: $(wildcard ./tools/objtool/objtool)
