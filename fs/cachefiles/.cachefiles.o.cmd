savedcmd_fs/cachefiles/cachefiles.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/cachefiles/cachefiles.o @fs/cachefiles/cachefiles.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/cachefiles/cachefiles.o

fs/cachefiles/cachefiles.o: $(wildcard ./tools/objtool/objtool)
