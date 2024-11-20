#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf54ac7fa, "ecc_point_mult_shamir" },
	{ 0x37bc6f90, "crypto_unregister_akcipher" },
	{ 0xbac8aeea, "sg_nents_for_len" },
	{ 0x4c281912, "vli_is_zero" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x1a5faa3a, "vli_mod_inv" },
	{ 0x92668805, "vli_cmp" },
	{ 0x7c0fbb00, "vli_mod_mult_slow" },
	{ 0xeac9b99a, "vli_from_le64" },
	{ 0xa0483906, "ecc_is_pubkey_valid_partial" },
	{ 0x386152f5, "crypto_register_akcipher" },
	{ 0x13ce87e8, "asn1_ber_decoder" },
	{ 0x16f123e, "sg_copy_to_buffer" },
	{ 0x54b23e67, "sg_pcopy_to_buffer" },
	{ 0x16e410ff, "vli_from_be64" },
	{ 0x9f6efabd, "vli_sub" },
	{ 0x905c105a, "look_up_OID" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ecc");

