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

KSYMTAB_FUNC(udp_sock_create6, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel6_xmit_skb, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel6_dst_lookup, "_gpl", "");

SYMBOL_CRC(udp_sock_create6, 0xece4834d, "_gpl");
SYMBOL_CRC(udp_tunnel6_xmit_skb, 0xfd4fbf9e, "_gpl");
SYMBOL_CRC(udp_tunnel6_dst_lookup, 0x6680605e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3674db8e, "sock_create_kern" },
	{ 0xedc25195, "kernel_bind" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0xdb579ef1, "release_sock" },
	{ 0x10bd2afd, "sock_bindtoindex" },
	{ 0x5f445884, "kernel_sock_shutdown" },
	{ 0x8d0e1b55, "sock_release" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb62635b2, "kernel_connect" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe191fc4d, "udp6_set_csum" },
	{ 0x36a8b5d0, "ip6_local_out" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x81abee02, "dst_cache_get_ip6" },
	{ 0x396a1105, "ipv6_stub" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x854562e6, "dst_cache_set_ip6" },
	{ 0xf04a650c, "dst_release" },
	{ 0x5664c757, "__dynamic_netdev_dbg" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

