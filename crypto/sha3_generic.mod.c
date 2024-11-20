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

KSYMTAB_FUNC(crypto_sha3_init, "", "");
KSYMTAB_FUNC(crypto_sha3_update, "", "");
KSYMTAB_FUNC(crypto_sha3_final, "", "");

SYMBOL_CRC(crypto_sha3_init, 0xff14d0b8, "");
SYMBOL_CRC(crypto_sha3_update, 0xc4ae286d, "");
SYMBOL_CRC(crypto_sha3_final, 0xe2bbe7a7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfb578fc5, "memset" },
	{ 0x2307ef45, "crypto_register_shashes" },
	{ 0x27830220, "crypto_unregister_shashes" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

