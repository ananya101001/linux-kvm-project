savedcmd_fs/nfs_common/nfs_acl.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/nfs_common/nfs_acl.o @fs/nfs_common/nfs_acl.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/nfs_common/nfs_acl.o

fs/nfs_common/nfs_acl.o: $(wildcard ./tools/objtool/objtool)
