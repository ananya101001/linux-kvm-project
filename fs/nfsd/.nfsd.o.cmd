savedcmd_fs/nfsd/nfsd.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/nfsd/nfsd.o @fs/nfsd/nfsd.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/nfsd/nfsd.o

fs/nfsd/nfsd.o: $(wildcard ./tools/objtool/objtool)