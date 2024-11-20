savedcmd_fs/smb/client/cifs.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/smb/client/cifs.o @fs/smb/client/cifs.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/smb/client/cifs.o

fs/smb/client/cifs.o: $(wildcard ./tools/objtool/objtool)
