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
	{ 0x2e62920b, "xt_unregister_matches" },
	{ 0x7ba2a5b0, "ip_set_nfnl_put" },
	{ 0xa50c5a22, "ip_set_nfnl_get_byindex" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd31b0404, "ip_set_add" },
	{ 0x51eb731, "ip_set_del" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xaa1ae1e9, "ip_set_test" },
	{ 0x9d47a039, "xt_unregister_targets" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb99fd232, "xt_register_matches" },
	{ 0xc2d5d571, "xt_register_targets" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "x_tables,ip_set");

