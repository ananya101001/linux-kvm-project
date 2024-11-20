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

KSYMTAB_FUNC(dns_query, "", "");

SYMBOL_CRC(dns_query, 0x05859543, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x94602332, "register_key_type" },
	{ 0x2e9cff23, "keyring_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdaff2388, "__put_cred" },
	{ 0x122c3a7e, "_printk" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x8da1cf7b, "init_task" },
	{ 0x24d0565a, "key_put" },
	{ 0xa07a37f0, "memchr" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x9a4e7200, "key_revoke" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xcddf4549, "key_validate" },
	{ 0x668b19a1, "down_read" },
	{ 0x85075f40, "override_creds" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xc22480ae, "user_read" },
	{ 0x26155ef6, "request_key_tag" },
	{ 0xe1e78f05, "generic_key_instantiate" },
	{ 0x377214d3, "seq_printf" },
	{  0xfeccb, "__seq_puts" },
	{ 0xd74e5067, "prepare_kernel_cred" },
	{ 0x754d539c, "strlen" },
	{ 0x8f0cefdc, "key_invalidate" },
	{ 0x53b954a2, "up_read" },
	{ 0x2322dfd4, "revert_creds" },
	{ 0x233a0a79, "user_destroy" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x813ba6ec, "user_revoke" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x8399268, "unregister_key_type" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

