savedcmd_drivers/ptp/ptp_kvm.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/ptp/ptp_kvm.o @drivers/ptp/ptp_kvm.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/ptp/ptp_kvm.o

drivers/ptp/ptp_kvm.o: $(wildcard ./tools/objtool/objtool)