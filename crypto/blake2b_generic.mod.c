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

KSYMTAB_FUNC(blake2b_compress_generic, "", "");

SYMBOL_CRC(blake2b_compress_generic, 0x32e24c8a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x56470118, "__warn_printk" },
	{ 0x27830220, "crypto_unregister_shashes" },
	{ 0xfb578fc5, "memset" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2307ef45, "crypto_register_shashes" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");
