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

KSYMTAB_FUNC(twofish_enc_blk, "_gpl", "");
KSYMTAB_FUNC(twofish_dec_blk, "_gpl", "");

SYMBOL_CRC(twofish_enc_blk, 0x7c7bf6e0, "_gpl");
SYMBOL_CRC(twofish_dec_blk, 0x1f491d36, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2213795c, "twofish_setkey" },
	{ 0x30232329, "crypto_register_alg" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x74bea6f9, "crypto_unregister_alg" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "twofish_common");
