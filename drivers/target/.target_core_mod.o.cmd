savedcmd_drivers/target/target_core_mod.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/target/target_core_mod.o @drivers/target/target_core_mod.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/target/target_core_mod.o

drivers/target/target_core_mod.o: $(wildcard ./tools/objtool/objtool)
