savedcmd_drivers/firmware/efi/libstub/relocate.stub.o := strip --strip-debug -o drivers/firmware/efi/libstub/relocate.stub.o drivers/firmware/efi/libstub/relocate.o; if objdump -r drivers/firmware/efi/libstub/relocate.stub.o | grep R_X86_64_64; then echo "drivers/firmware/efi/libstub/relocate.stub.o: absolute symbol references not allowed in the EFI stub" >&2; /bin/false; fi; objcopy --remove-section=.note.gnu.property drivers/firmware/efi/libstub/relocate.o drivers/firmware/efi/libstub/relocate.stub.o