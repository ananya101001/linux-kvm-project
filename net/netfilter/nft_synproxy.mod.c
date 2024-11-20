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
	{ 0x26040007, "nf_ct_netns_put" },
	{ 0x41746749, "nft_unregister_expr" },
	{ 0x95c43705, "nf_synproxy_ipv6_fini" },
	{ 0x7d02f564, "nf_ip_checksum" },
	{ 0x4dc99604, "synproxy_parse_options" },
	{ 0x82658193, "synproxy_recv_client_ack_ipv6" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x31bb249b, "synproxy_recv_client_ack" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xf2e9e799, "synproxy_send_client_synack_ipv6" },
	{ 0xc01fad5b, "synproxy_send_client_synack" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x92e68c1d, "nft_register_obj" },
	{ 0xf274816b, "nft_register_expr" },
	{ 0xe3ed4b17, "nft_unregister_obj" },
	{ 0xf0565d17, "nft_chain_validate_hooks" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7affc372, "nf_ct_netns_get" },
	{ 0xe01743e4, "nf_synproxy_ipv4_init" },
	{ 0x6d8b2abd, "nf_synproxy_ipv6_init" },
	{ 0x18585e5c, "nf_synproxy_ipv4_fini" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nf_tables,nf_synproxy_core");

