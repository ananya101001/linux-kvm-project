savedcmd_fs/nfs/blocklayout/blocklayoutdriver.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/nfs/blocklayout/blocklayoutdriver.o @fs/nfs/blocklayout/blocklayoutdriver.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/nfs/blocklayout/blocklayoutdriver.o

fs/nfs/blocklayout/blocklayoutdriver.o: $(wildcard ./tools/objtool/objtool)
