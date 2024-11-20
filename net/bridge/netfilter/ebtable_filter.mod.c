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
	{ 0x3f7cbb67, "ebt_unregister_table" },
	{ 0x7ad7cb41, "ebt_unregister_table_pre_exit" },
	{ 0xa768d33a, "ebt_register_table" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x4236e892, "ebt_do_table" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfa8aed31, "ebt_register_template" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x86d88ae9, "ebt_unregister_template" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ebtables");

