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
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xc0336f52, "ip_vs_proto_get" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x83823fac, "ipv6_find_hdr" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x41775631, "xt_register_match" },
	{ 0xe0118241, "xt_unregister_match" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip_vs,x_tables");
