savedcmd_drivers/nvdimm/libnvdimm.o := ld -m elf_x86_64 -z noexecstack   -r -o drivers/nvdimm/libnvdimm.o @drivers/nvdimm/libnvdimm.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module drivers/nvdimm/libnvdimm.o

drivers/nvdimm/libnvdimm.o: $(wildcard ./tools/objtool/objtool)