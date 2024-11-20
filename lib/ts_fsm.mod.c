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
	{ 0x69acdf38, "memcpy" },
	{ 0x1f60c4b, "textsearch_unregister" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3da4d0da, "textsearch_register" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

