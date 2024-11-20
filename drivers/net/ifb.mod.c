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
	{ 0x57bc19d2, "down_write" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x11602458, "__rtnl_link_register" },
	{ 0x1b6287cd, "alloc_netdev_mqs" },
	{ 0x88287630, "register_netdevice" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xce807a25, "up_write" },
	{ 0x56d691a8, "free_netdev" },
	{ 0xc935461e, "__rtnl_link_unregister" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x11729181, "skb_pull_rcsum" },
	{ 0x9d9392c0, "netif_receive_skb" },
	{ 0x1ba6c3be, "netif_tx_wake_queue" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xf6774a0b, "eth_validate_addr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5338184f, "ethtool_sprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x6d6e05cb, "netif_tx_stop_all_queues" },
	{ 0xc15d5e03, "ether_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0xc748bccf, "rtnl_link_unregister" },
	{ 0x565f18, "pernet_ops_rwsem" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

