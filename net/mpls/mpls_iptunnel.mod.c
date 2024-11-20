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
	{ 0x6775c90f, "skb_push" },
	{ 0x3be88036, "mpls_stats_inc_outucastpkts" },
	{ 0x2f339795, "neigh_xmit" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x9fd7c553, "__skb_warn_lro_forwarding" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x3d51190f, "lwtunnel_encap_del_ops" },
	{ 0xfef4fa84, "nla_put_labels" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xde3cca7e, "nla_get_labels" },
	{ 0xaa14b530, "lwtunnel_state_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd075fb82, "lwtunnel_encap_add_ops" },
	{ 0xf2e59605, "mpls_output_possible" },
	{ 0xabd7402a, "mpls_dev_mtu" },
	{ 0x1fe932c6, "mpls_pkt_too_big" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "mpls_router");

