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
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc2d5d571, "xt_register_targets" },
	{ 0x41775631, "xt_register_match" },
	{ 0x9d47a039, "xt_unregister_targets" },
	{ 0x26040007, "nf_ct_netns_put" },
	{ 0xe0118241, "xt_unregister_match" },
	{ 0x7affc372, "nf_ct_netns_get" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,x_tables");
