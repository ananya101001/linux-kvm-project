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
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6999540f, "__blk_mq_alloc_disk" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xd095e5c, "blk_mq_alloc_tag_set" },
	{ 0x16d30c75, "wake_up_process" },
	{ 0x2beb13a8, "skb_queue_purge_reason" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x80131ca2, "put_disk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x9f984513, "strrchr" },
	{ 0x26b65873, "skb_queue_tail" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8f14d45b, "get_zeroed_page_noprof" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0xe5590ebd, "init_net" },
	{ 0x448563a, "blk_update_request" },
	{ 0x87400f82, "skb_pull" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xd7be87d8, "set_capacity" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5d480ef3, "device_create" },
	{ 0x2a71977a, "noop_llseek" },
	{ 0xb64d2547, "dev_remove_pack" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6775c90f, "skb_push" },
	{ 0x8656f320, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5db87f6c, "seq_putc" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x4d31cbe2, "blk_mq_free_tag_set" },
	{ 0x59c98678, "del_gendisk" },
	{ 0x585258e2, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfb578fc5, "memset" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x19a55fde, "param_ops_string" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc03f042e, "kthread_create_on_node" },
	{ 0x5c4440b5, "seq_read" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x51cd0202, "debugfs_create_file" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0xce2667da, "blk_mq_freeze_queue" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x2213aa1f, "mempool_create_node_noprof" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4d8e509f, "__register_chrdev" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x50785e75, "device_destroy" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x377214d3, "seq_printf" },
	{ 0xa542eb90, "skb_clone" },
	{ 0xcf3cd7e, "blk_mq_unfreeze_queue" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x3079d629, "blk_mq_start_request" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xd4f9fdc4, "single_release" },
	{ 0x2ff715a7, "blkdev_compat_ptr_ioctl" },
	{ 0xc29bf967, "strspn" },
	{ 0x754d539c, "strlen" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x8e66f282, "blk_mq_run_hw_queues" },
	{ 0x50472d9a, "single_open" },
	{ 0x349cba85, "strchr" },
	{ 0x8b0ac9d7, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4a958e37, "class_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0xaca2d48b, "__blk_mq_end_request" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x750d357, "set_capacity_and_notify" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd6625cfb, "skb_put" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe065f55b, "consume_skb" },
	{ 0xb0e602eb, "memmove" },
	{ 0x3cab8e4a, "dev_add_pack" },
	{ 0x69e9c1d7, "device_add_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf7157488, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x96848186, "scnprintf" },
	{ 0x23c0b550, "set_user_nice" },
	{ 0x40e668b1, "blk_mq_unquiesce_queue" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x919fdaea, "blk_mq_quiesce_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xc520b851, "seq_lseek" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "89390E14EFBE74270294448");