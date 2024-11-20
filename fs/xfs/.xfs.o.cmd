savedcmd_fs/xfs/xfs.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/xfs/xfs.o @fs/xfs/xfs.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/xfs/xfs.o

fs/xfs/xfs.o: $(wildcard ./tools/objtool/objtool)
