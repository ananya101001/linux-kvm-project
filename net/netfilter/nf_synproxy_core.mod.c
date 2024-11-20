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

KSYMTAB_DATA(synproxy_net_id, "_gpl", "");
KSYMTAB_FUNC(synproxy_parse_options, "_gpl", "");
KSYMTAB_FUNC(synproxy_init_timestamp_cookie, "_gpl", "");
KSYMTAB_FUNC(synproxy_send_client_synack, "_gpl", "");
KSYMTAB_FUNC(synproxy_recv_client_ack, "_gpl", "");
KSYMTAB_FUNC(ipv4_synproxy_hook, "_gpl", "");
KSYMTAB_FUNC(nf_synproxy_ipv4_init, "_gpl", "");
KSYMTAB_FUNC(nf_synproxy_ipv4_fini, "_gpl", "");
KSYMTAB_FUNC(synproxy_send_client_synack_ipv6, "_gpl", "");
KSYMTAB_FUNC(synproxy_recv_client_ack_ipv6, "_gpl", "");
KSYMTAB_FUNC(ipv6_synproxy_hook, "_gpl", "");
KSYMTAB_FUNC(nf_synproxy_ipv6_init, "_gpl", "");
KSYMTAB_FUNC(nf_synproxy_ipv6_fini, "_gpl", "");

SYMBOL_CRC(synproxy_net_id, 0xca9fc082, "_gpl");
SYMBOL_CRC(synproxy_parse_options, 0x4dc99604, "_gpl");
SYMBOL_CRC(synproxy_init_timestamp_cookie, 0x1f099794, "_gpl");
SYMBOL_CRC(synproxy_send_client_synack, 0xc01fad5b, "_gpl");
SYMBOL_CRC(synproxy_recv_client_ack, 0x31bb249b, "_gpl");
SYMBOL_CRC(ipv4_synproxy_hook, 0x6b7f0f9d, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv4_init, 0xe01743e4, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv4_fini, 0x18585e5c, "_gpl");
SYMBOL_CRC(synproxy_send_client_synack_ipv6, 0xf2e9e799, "_gpl");
SYMBOL_CRC(synproxy_recv_client_ack_ipv6, 0x82658193, "_gpl");
SYMBOL_CRC(ipv6_synproxy_hook, 0xc369d1cf, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv6_init, 0x6d8b2abd, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv6_fini, 0x95c43705, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x380ce666, "nf_register_net_hooks" },
	{ 0x377214d3, "seq_printf" },
	{ 0x3d1a1b7b, "seq_write" },
	{ 0x7d511f68, "nf_unregister_net_hooks" },
	{ 0xb8efc77a, "skb_ensure_writable" },
	{ 0x5c0259ec, "inet_proto_csum_replace4" },
	{ 0x7647e788, "ip_route_me_harder" },
	{ 0x660e27f2, "ip_local_out" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xd6625cfb, "skb_put" },
	{ 0x7ca64a0b, "__cookie_v4_init_sequence" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x71b13f65, "security_skb_classify_flow" },
	{ 0x412609ae, "__nf_ip6_route" },
	{ 0x28bc0ec9, "xfrm_lookup" },
	{ 0x36a8b5d0, "ip6_local_out" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0xab3fc466, "remove_proc_entry" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xc97cfd53, "nf_ct_tmpl_alloc" },
	{ 0x49efa1d8, "nf_ct_ext_add" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x861b6aec, "proc_create_net_data" },
	{ 0xf38a1a13, "nf_ct_tmpl_free" },
	{ 0x2d0143e8, "__cookie_v4_check" },
	{ 0x99e6780e, "__cookie_v6_check" },
	{ 0x18428692, "__cookie_v6_init_sequence" },
	{ 0xd50b254a, "nf_ct_seqadj_init" },
	{ 0xe065f55b, "consume_skb" },
	{ 0xe6f295a9, "ipv6_skip_exthdr" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");

