savedcmd_fs/exfat/exfat.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/exfat/exfat.o @fs/exfat/exfat.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/exfat/exfat.o

fs/exfat/exfat.o: $(wildcard ./tools/objtool/objtool)
