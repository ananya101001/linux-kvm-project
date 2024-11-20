savedcmd_fs/udf/udf.o := ld -m elf_x86_64 -z noexecstack   -r -o fs/udf/udf.o @fs/udf/udf.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --static-call --uaccess --prefix=16  --link  --module fs/udf/udf.o

fs/udf/udf.o: $(wildcard ./tools/objtool/objtool)
