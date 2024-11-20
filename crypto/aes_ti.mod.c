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
	{ 0x78a16f48, "aes_decrypt" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x74bea6f9, "crypto_unregister_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x30232329, "crypto_register_alg" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

