savedcmd_fs/overlayfs/overlay.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/overlayfs/overlay.o @fs/overlayfs/overlay.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/overlayfs/overlay.o

fs/overlayfs/overlay.o: $(wildcard ./tools/objtool/objtool)
