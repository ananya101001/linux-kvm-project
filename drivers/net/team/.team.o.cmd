savedcmd_drivers/net/team/team.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/net/team/team.o @drivers/net/team/team.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/net/team/team.o

drivers/net/team/team.o: $(wildcard ./tools/objtool/objtool)
