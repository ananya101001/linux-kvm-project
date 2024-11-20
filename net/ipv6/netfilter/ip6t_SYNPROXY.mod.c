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
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6e382972, "nf_ip6_checksum" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4dc99604, "synproxy_parse_options" },
	{ 0x82658193, "synproxy_recv_client_ack_ipv6" },
	{ 0xe065f55b, "consume_skb" },
	{ 0xf2e9e799, "synproxy_send_client_synack_ipv6" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x95c43705, "nf_synproxy_ipv6_fini" },
	{ 0x26040007, "nf_ct_netns_put" },
	{ 0x7affc372, "nf_ct_netns_get" },
	{ 0x6d8b2abd, "nf_synproxy_ipv6_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x282082dd, "xt_register_target" },
	{ 0x86a14c80, "xt_unregister_target" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_synproxy_core,nf_conntrack,x_tables");

