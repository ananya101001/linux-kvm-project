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

KSYMTAB_FUNC(net_failover_create, "_gpl", "");
KSYMTAB_FUNC(net_failover_destroy, "_gpl", "");

SYMBOL_CRC(net_failover_create, 0x48f837f8, "_gpl");
SYMBOL_CRC(net_failover_destroy, 0xd1700893, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1d256e4f, "dev_mc_sync_multiple" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x370f296d, "netdev_pick_tx" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0xc479b7cf, "netdev_core_stats_inc" },
	{ 0x1c8d9b8e, "dev_kfree_skb_any_reason" },
	{ 0xd08685ce, "netif_carrier_on" },
	{ 0x1ba6c3be, "netif_tx_wake_queue" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x8bdb8263, "alloc_etherdev_mqs" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0x2ec2bf40, "register_netdev" },
	{ 0x973881cc, "netif_carrier_off" },
	{ 0x836cf920, "failover_register" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x56d691a8, "free_netdev" },
	{ 0xe4937ea3, "unregister_netdev" },
	{ 0x54fe87af, "netif_device_detach" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x45abde31, "failover_slave_unregister" },
	{ 0x6478e0c2, "failover_unregister" },
	{ 0x82879e15, "unregister_netdevice_queue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd90175d4, "netdev_lower_state_changed" },
	{ 0x6d6e05cb, "netif_tx_stop_all_queues" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x1e551f58, "vlan_vids_add_by_dev" },
	{ 0xa2d5d276, "call_netdevice_notifiers" },
	{ 0x1464bd86, "ethtool_op_get_link" },
	{ 0x25145d1f, "passthru_features_check" },
	{ 0xf6774a0b, "eth_validate_addr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc7468da6, "dev_open" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x2c877f78, "netdev_change_features" },
	{ 0xf85b4ed1, "vlan_vids_del_by_dev" },
	{ 0xfccdc35c, "dev_uc_unsync" },
	{ 0xb40cf2be, "dev_mc_unsync" },
	{ 0xe740790b, "dev_close" },
	{ 0xc3306f96, "dev_get_stats" },
	{ 0xbd9af465, "netdev_info" },
	{ 0x2b4e80dd, "dev_set_mtu" },
	{ 0xe2eaa37c, "pci_bus_type" },
	{ 0x51216e30, "vlan_uses_dev" },
	{ 0x113ed675, "netdev_err" },
	{ 0x70a09e5e, "__ethtool_get_link_ksettings" },
	{ 0x35def37, "vlan_vid_del" },
	{ 0x8cf8af2a, "vlan_vid_add" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xcce9bcc0, "dev_uc_sync_multiple" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "failover");

