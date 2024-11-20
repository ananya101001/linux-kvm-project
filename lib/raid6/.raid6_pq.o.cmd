savedcmd_lib/raid6/raid6_pq.o := ld -m elf_x86_64 -z noexecstack   -r -o lib/raid6/raid6_pq.o @lib/raid6/raid6_pq.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module lib/raid6/raid6_pq.o

lib/raid6/raid6_pq.o: $(wildcard ./tools/objtool/objtool)
