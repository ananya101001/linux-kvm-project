savedcmd_net/sctp/sctp.o := ld -m elf_x86_64 -z noexecstack   -r -o net/sctp/sctp.o @net/sctp/sctp.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module net/sctp/sctp.o

net/sctp/sctp.o: $(wildcard ./tools/objtool/objtool)
