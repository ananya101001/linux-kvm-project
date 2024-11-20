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
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x942f8e5e, "nf_nat_exp_find_port" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xf7d5ca7f, "nf_ct_unexpect_related" },
	{ 0x94a537a9, "get_h225_addr" },
	{ 0xaef1bb6, "nf_ct_expect_related_report" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x42c25629, "nfct_h323_nat_hook" },
	{ 0xab4922c1, "nf_ct_helper_expectfn_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x86c53895, "nf_nat_setup_info" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc42a8fca, "nf_nat_follow_master" },
	{ 0xdfdde0a9, "nf_ct_helper_expectfn_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd890b88d, "nf_nat_mangle_udp_packet" },
	{ 0xe98b4a3c, "__nf_nat_mangle_tcp_packet" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_nat,nf_conntrack,nf_conntrack_h323");

