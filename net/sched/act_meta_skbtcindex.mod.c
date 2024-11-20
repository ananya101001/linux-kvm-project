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
	{ 0x175514d1, "ife_check_meta_u16" },
	{ 0x85888c76, "unregister_ife_op" },
	{ 0x4091b45e, "ife_get_meta_u16" },
	{ 0xe10c0c9b, "ife_alloc_meta_u16" },
	{ 0xe57230ea, "ife_release_meta_gen" },
	{ 0xf40f1d62, "ife_validate_meta_u16" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdf358996, "register_ife_op" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x477f29cb, "ife_encode_meta_u16" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "act_ife");

