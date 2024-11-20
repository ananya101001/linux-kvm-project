#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_DATA(scsi_command_size_tbl, "", "");
KSYMTAB_FUNC(scsi_device_type, "", "");
KSYMTAB_FUNC(scsi_pr_type_to_block, "_gpl", "");
KSYMTAB_FUNC(block_pr_type_to_scsi, "_gpl", "");
KSYMTAB_FUNC(scsilun_to_int, "", "");
KSYMTAB_FUNC(int_to_scsilun, "", "");
KSYMTAB_FUNC(scsi_normalize_sense, "", "");
KSYMTAB_FUNC(scsi_sense_desc_find, "", "");
KSYMTAB_FUNC(scsi_build_sense_buffer, "", "");
KSYMTAB_FUNC(scsi_set_sense_information, "", "");
KSYMTAB_FUNC(scsi_set_sense_field_pointer, "", "");

SYMBOL_CRC(scsi_command_size_tbl, 0x0334da4e, "");
SYMBOL_CRC(scsi_device_type, 0x72ea7b2d, "");
SYMBOL_CRC(scsi_pr_type_to_block, 0x74bf2e01, "_gpl");
SYMBOL_CRC(block_pr_type_to_scsi, 0x3c6785b7, "_gpl");
SYMBOL_CRC(scsilun_to_int, 0xea3c8e4e, "");
SYMBOL_CRC(int_to_scsilun, 0x5ed90adc, "");
SYMBOL_CRC(scsi_normalize_sense, 0xfbad3cf0, "");
SYMBOL_CRC(scsi_sense_desc_find, 0x10d9f885, "");
SYMBOL_CRC(scsi_build_sense_buffer, 0x8112b3d2, "");
SYMBOL_CRC(scsi_set_sense_information, 0x818416e1, "");
SYMBOL_CRC(scsi_set_sense_field_pointer, 0x3ab7b1cc, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

