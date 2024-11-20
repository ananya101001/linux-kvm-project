savedcmd_fs/ceph/ceph.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/ceph/ceph.o @fs/ceph/ceph.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/ceph/ceph.o

fs/ceph/ceph.o: $(wildcard ./tools/objtool/objtool)
