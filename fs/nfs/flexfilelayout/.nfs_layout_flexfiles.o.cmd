savedcmd_fs/nfs/flexfilelayout/nfs_layout_flexfiles.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/nfs/flexfilelayout/nfs_layout_flexfiles.o @fs/nfs/flexfilelayout/nfs_layout_flexfiles.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/nfs/flexfilelayout/nfs_layout_flexfiles.o

fs/nfs/flexfilelayout/nfs_layout_flexfiles.o: $(wildcard ./tools/objtool/objtool)
