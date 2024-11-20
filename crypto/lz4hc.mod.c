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
	{ 0x195ba039, "crypto_unregister_scomp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x30232329, "crypto_register_alg" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xfed9e025, "crypto_register_scomp" },
	{ 0x74bea6f9, "crypto_unregister_alg" },
	{ 0xc7c1107a, "LZ4_decompress_safe" },
	{ 0xddf86133, "LZ4_compress_HC" },
	{ 0x999e8297, "vfree" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "lz4hc_compress");

