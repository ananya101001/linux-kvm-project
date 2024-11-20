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

KSYMTAB_FUNC(crc32c, "", "");

SYMBOL_CRC(crc32c, 0xb15b4109, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe2d055b4, "crypto_alloc_shash" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0xe8718264, "crypto_shash_update" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

