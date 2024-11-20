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
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xc832c670, "curve25519_arch" },
	{ 0x3c74a43e, "curve25519_base_arch" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x12627f15, "curve25519_generic" },
	{ 0x4a5a8811, "curve25519_null_point" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "curve25519-x86_64,libcurve25519-generic");

