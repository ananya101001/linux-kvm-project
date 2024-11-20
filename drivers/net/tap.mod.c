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

KSYMTAB_FUNC(tap_del_queues, "_gpl", "");
KSYMTAB_FUNC(tap_handle_frame, "_gpl", "");
KSYMTAB_FUNC(tap_get_minor, "_gpl", "");
KSYMTAB_FUNC(tap_free_minor, "_gpl", "");
KSYMTAB_FUNC(tap_get_socket, "_gpl", "");
KSYMTAB_FUNC(tap_get_ptr_ring, "_gpl", "");
KSYMTAB_FUNC(tap_queue_resize, "_gpl", "");
KSYMTAB_FUNC(tap_create_cdev, "_gpl", "");
KSYMTAB_FUNC(tap_destroy_cdev, "_gpl", "");

SYMBOL_CRC(tap_del_queues, 0x08cd6dbe, "_gpl");
SYMBOL_CRC(tap_handle_frame, 0xb7cedf82, "_gpl");
SYMBOL_CRC(tap_get_minor, 0xbd642ced, "_gpl");
SYMBOL_CRC(tap_free_minor, 0x4982144b, "_gpl");
SYMBOL_CRC(tap_get_socket, 0xaa788152, "_gpl");
SYMBOL_CRC(tap_get_ptr_ring, 0xea377d84, "_gpl");
SYMBOL_CRC(tap_queue_resize, 0x020c2b7b, "_gpl");
SYMBOL_CRC(tap_create_cdev, 0x5c668d91, "_gpl");
SYMBOL_CRC(tap_destroy_cdev, 0xa8e14a2a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb8f11603, "idr_alloc" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x113ed675, "netdev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xe2964344, "__wake_up" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x20978fb9, "idr_find" },
	{ 0x9e90bee3, "sk_alloc" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb5823390, "sock_init_data_uid" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x98a94a64, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x5d64dd4d, "cdev_init" },
	{ 0x30149b9, "cdev_add" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xce767f9d, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x225ff335, "dev_set_mac_address_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7f0889a8, "dev_get_mac_address" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x639ccacd, "_copy_to_iter" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x1f085485, "iov_iter_advance" },
	{ 0x8cb7c95, "skb_copy_datagram_iter" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x6775c90f, "skb_push" },
	{ 0x5320317, "__skb_gso_segment" },
	{ 0xaa866b39, "skb_checksum_help" },
	{ 0xf3662c8e, "kfree_skb_list_reason" },
	{ 0xe5497da, "__skb_get_hash_net" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xebafb39a, "flow_keys_basic_dissector" },
	{ 0xf35293b1, "__skb_flow_dissect" },
	{ 0x70db16b, "skb_partial_csum_set" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xb30483ee, "iov_iter_npages" },
	{ 0xf1ece1d0, "sock_alloc_send_pskb" },
	{ 0xd6625cfb, "skb_put" },
	{ 0xa6de09a6, "zerocopy_sg_from_iter" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0xeec9a487, "_copy_from_iter" },
	{ 0x6f9cacec, "skb_copy_datagram_from_iter" },
	{ 0x54a0e992, "iov_iter_revert" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x2d1071fc, "build_skb" },
	{ 0xc81ce80d, "compat_ptr_ioctl" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

