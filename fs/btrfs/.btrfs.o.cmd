savedcmd_fs/btrfs/btrfs.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/btrfs/btrfs.o @fs/btrfs/btrfs.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/btrfs/btrfs.o

fs/btrfs/btrfs.o: $(wildcard ./tools/objtool/objtool)
