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
	{ 0x75981072, "ipt_alloc_initial_table" },
	{ 0x78112188, "ipt_register_table" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a983b3f, "xt_register_template" },
	{ 0x533a92a7, "xt_hook_ops_alloc" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x4eee7fec, "xt_unregister_template" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfa449a37, "ipt_unregister_table_exit" },
	{ 0x56e357c, "ipt_unregister_table_pre_exit" },
	{ 0xc0446c7d, "ipt_do_table" },
	{ 0x7647e788, "ip_route_me_harder" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip_tables,x_tables");
