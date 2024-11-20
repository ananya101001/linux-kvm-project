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

KSYMTAB_FUNC(udp_sock_create4, "", "");
KSYMTAB_FUNC(setup_udp_tunnel_sock, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_push_rx_port, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_drop_rx_port, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_notify_add_rx_port, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_notify_del_rx_port, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_xmit_skb, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_sock_release, "_gpl", "");
KSYMTAB_FUNC(udp_tun_rx_dst, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_dst_lookup, "_gpl", "");

SYMBOL_CRC(udp_sock_create4, 0xe993cf6a, "");
SYMBOL_CRC(setup_udp_tunnel_sock, 0x2efa4fd6, "_gpl");
SYMBOL_CRC(udp_tunnel_push_rx_port, 0xc708e35e, "_gpl");
SYMBOL_CRC(udp_tunnel_drop_rx_port, 0x69c8db41, "_gpl");
SYMBOL_CRC(udp_tunnel_notify_add_rx_port, 0xe99714a6, "_gpl");
SYMBOL_CRC(udp_tunnel_notify_del_rx_port, 0xcb5f73e8, "_gpl");
SYMBOL_CRC(udp_tunnel_xmit_skb, 0xf6369320, "_gpl");
SYMBOL_CRC(udp_tunnel_sock_release, 0x1f43ca7b, "_gpl");
SYMBOL_CRC(udp_tun_rx_dst, 0x7e1dd234, "_gpl");
SYMBOL_CRC(udp_tunnel_dst_lookup, 0x90f5bf2a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x396a1105, "ipv6_stub" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0x5f445884, "kernel_sock_shutdown" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd4c6590e, "iptunnel_xmit" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xb62635b2, "kernel_connect" },
	{ 0xfb578fc5, "memset" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5664c757, "__dynamic_netdev_dbg" },
	{ 0xd45cf84d, "dst_cache_get_ip4" },
	{ 0x3674db8e, "sock_create_kern" },
	{ 0xa2d5d276, "call_netdevice_notifiers" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc9110e8f, "metadata_dst_alloc" },
	{ 0xf04a650c, "dst_release" },
	{ 0x8d0e1b55, "sock_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x10bd2afd, "sock_bindtoindex" },
	{ 0x349cba85, "strchr" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4385eee8, "dst_cache_set_ip4" },
	{ 0xedc25195, "kernel_bind" },
	{ 0x944028b6, "udp_set_csum" },
	{ 0x37a0cba, "kfree" },
	{ 0x651fd1a4, "netdev_warn" },
	{ 0xb2ef9429, "udp_tunnel_nic_ops" },
	{ 0x32cd197c, "ip_route_output_flow" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

