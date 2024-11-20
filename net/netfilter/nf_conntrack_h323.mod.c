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

KSYMTAB_DATA(nfct_h323_nat_hook, "_gpl", "");
KSYMTAB_FUNC(get_h225_addr, "_gpl", "");

SYMBOL_CRC(nfct_h323_nat_hook, 0x42c25629, "_gpl");
SYMBOL_CRC(get_h225_addr, 0x94a537a9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x22199426, "param_ops_bool" },
	{ 0x26b0ff0f, "nf_ct_expect_init" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf04a650c, "dst_release" },
	{ 0x979a7de0, "nf_conntrack_helper_unregister" },
	{ 0xd92a2d2, "__nf_ct_refresh_acct" },
	{ 0xf6f05b8, "nf_conntrack_helper_register" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xf7d5ca7f, "nf_ct_unexpect_related" },
	{ 0x5f3f00ec, "nf_ct_remove_expectations" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x37a0cba, "kfree" },
	{ 0x412609ae, "__nf_ip6_route" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc219e5b6, "nf_ct_helper_log" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x6e3e23f1, "__nf_ct_expect_find" },
	{ 0x5f21bd3, "nf_conntrack_helpers_unregister" },
	{ 0xaef1bb6, "nf_ct_expect_related_report" },
	{ 0x1e415c0e, "nf_ct_expect_alloc" },
	{ 0x89c29bc9, "nf_ct_expect_put" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xdf27da0b, "nf_conntrack_helpers_register" },
	{ 0xc919bcb9, "nf_ip_route" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");

