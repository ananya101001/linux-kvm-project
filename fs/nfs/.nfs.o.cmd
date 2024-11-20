savedcmd_fs/nfs/nfs.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/nfs/nfs.o @fs/nfs/nfs.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/nfs/nfs.o

fs/nfs/nfs.o: $(wildcard ./tools/objtool/objtool)
