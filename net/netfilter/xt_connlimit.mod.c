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
	{ 0x7affc372, "nf_ct_netns_get" },
	{ 0xd51d2b5a, "nf_conncount_init" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x2afa2094, "nf_conncount_count" },
	{ 0xfe13d629, "nf_ct_get_tuplepr" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2e62920b, "xt_unregister_matches" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb99fd232, "xt_register_matches" },
	{ 0xcce6c6ef, "nf_conncount_destroy" },
	{ 0x26040007, "nf_ct_netns_put" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conncount,x_tables");

