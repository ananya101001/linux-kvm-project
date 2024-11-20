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
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x565f18, "pernet_ops_rwsem" },
	{ 0x57bc19d2, "down_write" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x11602458, "__rtnl_link_register" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x1b6287cd, "alloc_netdev_mqs" },
	{ 0x88287630, "register_netdevice" },
	{ 0x56d691a8, "free_netdev" },
	{ 0xc935461e, "__rtnl_link_unregister" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xce807a25, "up_write" },
	{ 0xc748bccf, "rtnl_link_unregister" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xc47f5482, "ethtool_op_get_ts_info" },
	{ 0xb9ffdc54, "eth_mac_addr" },
	{ 0xf6774a0b, "eth_validate_addr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd08685ce, "netif_carrier_on" },
	{ 0x973881cc, "netif_carrier_off" },
	{ 0xc07fa642, "dev_lstats_read" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x8f17ae37, "skb_tstamp_tx" },
	{ 0xc15d5e03, "ether_setup" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

