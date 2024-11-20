savedcmd_fs/nfs/nfsv4.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/nfs/nfsv4.o @fs/nfs/nfsv4.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/nfs/nfsv4.o

fs/nfs/nfsv4.o: $(wildcard ./tools/objtool/objtool)
