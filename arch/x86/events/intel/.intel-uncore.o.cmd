savedcmd_arch/x86/events/intel/intel-uncore.o := ld -m elf_x86_64 -z noexecstack   -r -o arch/x86/events/intel/intel-uncore.o @arch/x86/events/intel/intel-uncore.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module arch/x86/events/intel/intel-uncore.o

arch/x86/events/intel/intel-uncore.o: $(wildcard ./tools/objtool/objtool)
