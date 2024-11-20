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

KSYMTAB_FUNC(crypto_ecdh_key_len, "_gpl", "");
KSYMTAB_FUNC(crypto_ecdh_encode_key, "_gpl", "");
KSYMTAB_FUNC(crypto_ecdh_decode_key, "_gpl", "");

SYMBOL_CRC(crypto_ecdh_key_len, 0x7475be8e, "_gpl");
SYMBOL_CRC(crypto_ecdh_encode_key, 0xb230d2ec, "_gpl");
SYMBOL_CRC(crypto_ecdh_decode_key, 0x33b866ce, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd6315f31, "ecc_gen_privkey" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbac8aeea, "sg_nents_for_len" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xa8d8f6c7, "ecc_digits_from_bytes" },
	{ 0xfb578fc5, "memset" },
	{ 0x671f7aa5, "ecc_is_key_valid" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xed4ae15e, "ecc_make_pub_key" },
	{ 0xcd5b28ef, "crypto_register_kpp" },
	{ 0xdcbeba1d, "sg_copy_from_buffer" },
	{ 0x16f123e, "sg_copy_to_buffer" },
	{ 0xa76b31a2, "crypto_ecdh_shared_secret" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xbf470b5a, "crypto_unregister_kpp" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ecc");

