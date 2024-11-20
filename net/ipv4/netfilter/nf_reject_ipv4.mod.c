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

KSYMTAB_FUNC(nf_reject_skb_v4_tcp_reset, "_gpl", "");
KSYMTAB_FUNC(nf_reject_skb_v4_unreach, "_gpl", "");
KSYMTAB_FUNC(nf_reject_ip_tcphdr_get, "_gpl", "");
KSYMTAB_FUNC(nf_reject_iphdr_put, "_gpl", "");
KSYMTAB_FUNC(nf_reject_ip_tcphdr_put, "_gpl", "");
KSYMTAB_FUNC(nf_send_reset, "_gpl", "");
KSYMTAB_FUNC(nf_send_unreach, "_gpl", "");

SYMBOL_CRC(nf_reject_skb_v4_tcp_reset, 0x4968d1ca, "_gpl");
SYMBOL_CRC(nf_reject_skb_v4_unreach, 0xe1e40362, "_gpl");
SYMBOL_CRC(nf_reject_ip_tcphdr_get, 0x86655eac, "_gpl");
SYMBOL_CRC(nf_reject_iphdr_put, 0xca5b6e93, "_gpl");
SYMBOL_CRC(nf_reject_ip_tcphdr_put, 0x5f8ca258, "_gpl");
SYMBOL_CRC(nf_send_reset, 0xa5ac8cc1, "_gpl");
SYMBOL_CRC(nf_send_unreach, 0x563e2245, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6625cfb, "skb_put" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc919bcb9, "nf_ip_route" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x7d02f564, "nf_ip_checksum" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x920ed655, "__icmp_send" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0x67d19474, "pskb_trim_rcsum_slow" },
	{ 0x7647e788, "ip_route_me_harder" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xbca24e1e, "ip6_mtu" },
	{ 0xb4eafe21, "nf_ct_attach" },
	{ 0x2e7887d2, "nf_ct_set_closing" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0x660e27f2, "ip_local_out" },
	{ 0x39374f5e, "ipv4_mtu" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

