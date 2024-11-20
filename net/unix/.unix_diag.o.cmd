savedcmd_net/unix/unix_diag.o := ld -m elf_x86_64 -z noexecstack   -r -o net/unix/unix_diag.o @net/unix/unix_diag.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/unix/unix_diag.o

net/unix/unix_diag.o: $(wildcard ./tools/objtool/objtool)
