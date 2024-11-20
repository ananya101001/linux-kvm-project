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

KSYMTAB_FUNC(crypto_get_default_null_skcipher, "_gpl", "");
KSYMTAB_FUNC(crypto_put_default_null_skcipher, "_gpl", "");

SYMBOL_CRC(crypto_get_default_null_skcipher, 0x1e246fb8, "_gpl");
SYMBOL_CRC(crypto_put_default_null_skcipher, 0x21cd536a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc4002df1, "crypto_unregister_algs" },
	{ 0x69acdf38, "memcpy" },
	{ 0x58e8de37, "skcipher_walk_virt" },
	{ 0xfdbba811, "skcipher_walk_done" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x28ce5f6d, "crypto_unregister_skcipher" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbca18e25, "crypto_alloc_sync_skcipher" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x1c5e8714, "crypto_register_algs" },
	{ 0xfa406eba, "crypto_register_shash" },
	{ 0x6df6091e, "crypto_register_skcipher" },
	{ 0x6eef9a09, "crypto_unregister_shash" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

