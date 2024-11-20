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
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xef9afeef, "nfnl_acct_update" },
	{ 0xc047ebac, "nfnl_acct_overquota" },
	{ 0x2e62920b, "xt_unregister_matches" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb99fd232, "xt_register_matches" },
	{ 0xbecf5d14, "nfnl_acct_put" },
	{ 0x6c12dbd1, "nfnl_acct_find_get" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink_acct,x_tables");

