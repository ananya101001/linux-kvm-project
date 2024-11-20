#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(nf_reject_skb_v6_tcp_reset, "_gpl", "");
KSYMTAB_FUNC(nf_reject_skb_v6_unreach, "_gpl", "");
KSYMTAB_FUNC(nf_reject_ip6_tcphdr_get, "_gpl", "");
KSYMTAB_FUNC(nf_reject_ip6hdr_put, "_gpl", "");
KSYMTAB_FUNC(nf_reject_ip6_tcphdr_put, "_gpl", "");
KSYMTAB_FUNC(nf_send_reset6, "_gpl", "");
KSYMTAB_FUNC(nf_send_unreach6, "_gpl", "");

SYMBOL_CRC(nf_reject_skb_v6_tcp_reset, 0x55c08139, "_gpl");
SYMBOL_CRC(nf_reject_skb_v6_unreach, 0x34d0b879, "_gpl");
SYMBOL_CRC(nf_reject_ip6_tcphdr_get, 0x9dc68089, "_gpl");
SYMBOL_CRC(nf_reject_ip6hdr_put, 0x9626c961, "_gpl");
SYMBOL_CRC(nf_reject_ip6_tcphdr_put, 0x68494e62, "_gpl");
SYMBOL_CRC(nf_send_reset6, 0x73b182da, "_gpl");
SYMBOL_CRC(nf_send_unreach6, 0x38cccf68, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6625cfb, "skb_put" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe6f295a9, "ipv6_skip_exthdr" },
	{ 0x6e382972, "nf_ip6_checksum" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x412609ae, "__nf_ip6_route" },
	{ 0xc50e9813, "icmp6_send" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x6cd2f178, "l3mdev_master_ifindex_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x71b13f65, "security_skb_classify_flow" },
	{ 0x496e68b4, "ip6_route_output_flags" },
	{ 0x28bc0ec9, "xfrm_lookup" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0x20f84273, "ip6_dst_hoplimit" },
	{ 0xb4eafe21, "nf_ct_attach" },
	{ 0x2e7887d2, "nf_ct_set_closing" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0xf04a650c, "dst_release" },
	{ 0x36a8b5d0, "ip6_local_out" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x67d19474, "pskb_trim_rcsum_slow" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

