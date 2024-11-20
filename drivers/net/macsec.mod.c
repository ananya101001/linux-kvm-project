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

KSYMTAB_FUNC(macsec_pn_wrapped, "_gpl", "");
KSYMTAB_FUNC(macsec_get_real_dev, "_gpl", "");
KSYMTAB_FUNC(macsec_netdev_is_offloaded, "_gpl", "");

SYMBOL_CRC(macsec_pn_wrapped, 0xa45978fe, "_gpl");
SYMBOL_CRC(macsec_get_real_dev, 0xe4127039, "_gpl");
SYMBOL_CRC(macsec_netdev_is_offloaded, 0x4b002939, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x42ea33ee, "skb_copy_expand" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa542eb90, "skb_clone" },
	{ 0x3727f74a, "__netif_rx" },
	{ 0x8fcebc14, "crypto_aead_decrypt" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x82879e15, "unregister_netdevice_queue" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x6551c12f, "netdev_upper_dev_unlink" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb80be06, "netdev_rx_handler_unregister" },
	{ 0x2b4e80dd, "dev_set_mtu" },
	{ 0x7ac2d08d, "netif_stacked_transfer_operstate" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x973881cc, "netif_carrier_off" },
	{ 0xb40cf2be, "dev_mc_unsync" },
	{ 0xfccdc35c, "dev_uc_unsync" },
	{ 0x7e3debf0, "dev_uc_del" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x681d3773, "dev_uc_add" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xd08685ce, "netif_carrier_on" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xfb578fc5, "memset" },
	{ 0xc61ff876, "genlmsg_put" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x88287630, "register_netdevice" },
	{ 0x94b3cca2, "netdev_upper_dev_link" },
	{ 0xc9110e8f, "metadata_dst_alloc" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x9b4af65a, "linkwatch_fire_event" },
	{ 0xd87d68eb, "netdev_rx_handler_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc217dd22, "rtnl_link_register" },
	{ 0x3facf125, "genl_register_family" },
	{ 0xc748bccf, "rtnl_link_unregister" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xf8f81eec, "crypto_alloc_aead" },
	{ 0x6c45925d, "crypto_aead_setkey" },
	{ 0xb7e27989, "crypto_aead_setauthsize" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xb0e602eb, "memmove" },
	{ 0x87400f82, "skb_pull" },
	{ 0x69da51b6, "___pskb_trim" },
	{ 0xc15d5e03, "ether_setup" },
	{ 0xf04a650c, "dst_release" },
	{ 0x8fa5a6ee, "dev_fetch_sw_netstats" },
	{ 0x8c093088, "dev_mc_sync" },
	{ 0x57b6140f, "dev_uc_sync" },
	{ 0x6c138d60, "dev_set_allmulti" },
	{ 0xad01da46, "dev_set_promiscuity" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x67041673, "genl_unregister_family" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x1f415566, "eth_type_trans" },
	{ 0x1d982a7d, "gro_cells_receive" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x77cb69cc, "__dev_get_by_index" },
	{ 0x310ad800, "skb_ensure_writable_head_tail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x550a028e, "gro_cells_init" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1c783354, "skb_copy" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x6775c90f, "skb_push" },
	{ 0xd6625cfb, "skb_put" },
	{ 0x591c87c2, "skb_cow_data" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x5bbea807, "skb_to_sgvec" },
	{ 0x6590e5b2, "crypto_aead_encrypt" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

