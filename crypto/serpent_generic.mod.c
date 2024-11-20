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

KSYMTAB_FUNC(__serpent_setkey, "_gpl", "");
KSYMTAB_FUNC(serpent_setkey, "_gpl", "");
KSYMTAB_FUNC(__serpent_encrypt, "_gpl", "");
KSYMTAB_FUNC(__serpent_decrypt, "_gpl", "");

SYMBOL_CRC(__serpent_setkey, 0xd4c9681a, "_gpl");
SYMBOL_CRC(serpent_setkey, 0xd92973f7, "_gpl");
SYMBOL_CRC(__serpent_encrypt, 0x4eb4c55e, "_gpl");
SYMBOL_CRC(__serpent_decrypt, 0xbcc074f3, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x30232329, "crypto_register_alg" },
	{ 0x74bea6f9, "crypto_unregister_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

