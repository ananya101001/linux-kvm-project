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

KSYMTAB_DATA(nf_nat_sip_hooks, "_gpl", "");
KSYMTAB_FUNC(ct_sip_parse_request, "_gpl", "");
KSYMTAB_FUNC(ct_sip_get_header, "_gpl", "");
KSYMTAB_FUNC(ct_sip_parse_header_uri, "_gpl", "");
KSYMTAB_FUNC(ct_sip_parse_address_param, "_gpl", "");
KSYMTAB_FUNC(ct_sip_parse_numerical_param, "_gpl", "");
KSYMTAB_FUNC(ct_sip_get_sdp_header, "_gpl", "");

SYMBOL_CRC(nf_nat_sip_hooks, 0x80138c46, "_gpl");
SYMBOL_CRC(ct_sip_parse_request, 0x73e569c5, "_gpl");
SYMBOL_CRC(ct_sip_get_header, 0x7c5f996f, "_gpl");
SYMBOL_CRC(ct_sip_parse_header_uri, 0x75a76cee, "_gpl");
SYMBOL_CRC(ct_sip_parse_address_param, 0xa54345bb, "_gpl");
SYMBOL_CRC(ct_sip_parse_numerical_param, 0x2aa90f1f, "_gpl");
SYMBOL_CRC(ct_sip_get_sdp_header, 0x06bacb24, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7905937b, "nf_ct_remove_expect" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xc219e5b6, "nf_ct_helper_log" },
	{ 0xd92a2d2, "__nf_ct_refresh_acct" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x1e415c0e, "nf_ct_expect_alloc" },
	{ 0x26b0ff0f, "nf_ct_expect_init" },
	{ 0x89c29bc9, "nf_ct_expect_put" },
	{ 0xaef1bb6, "nf_ct_expect_related_report" },
	{ 0x6e3e23f1, "__nf_ct_expect_find" },
	{ 0x412609ae, "__nf_ip6_route" },
	{ 0xf04a650c, "dst_release" },
	{ 0xc919bcb9, "nf_ip_route" },
	{ 0xf7d5ca7f, "nf_ct_unexpect_related" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x73108bd5, "param_array_ops" },
	{ 0x1c989125, "param_ops_ushort" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x11089ac7, "_ctype" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x754d539c, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x40dbcb49, "nf_ct_helper_init" },
	{ 0xdf27da0b, "nf_conntrack_helpers_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5f21bd3, "nf_conntrack_helpers_unregister" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");

