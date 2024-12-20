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
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfcc1edd3, "memory_block_size_bytes" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x1cd8438b, "pxm_to_node" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x9be30d27, "mhp_get_pluggable_range" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x77358855, "iomem_resource" },
	{ 0x85bd1608, "__request_region" },
	{ 0x9436e405, "memory_group_register_dynamic" },
	{ 0xa770832, "register_memory_notifier" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x26e298e0, "unregister_memory_notifier" },
	{ 0x12ee1173, "memory_group_unregister" },
	{ 0xc5e74216, "release_resource" },
	{ 0x52b4013, "register_vmcore_cb" },
	{ 0x638a9653, "memory_add_physaddr_to_nid" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xb642d786, "set_online_page_callback" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xbbdc9b2, "remove_memory" },
	{ 0x8c98d248, "unregister_vmcore_cb" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xcc935375, "walk_iomem_res_desc" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x999e8297, "vfree" },
	{ 0xda2c2f9, "restore_online_page_callback" },
	{ 0x8c78cf7, "offline_and_remove_memory" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xb74dfea7, "pfn_to_online_page" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xde8c1673, "param_ops_ulong" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf632832, "__register_virtio_driver" },
	{ 0xe2964344, "__wake_up" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x377bbcbc, "pm_suspend_target_state" },
	{ 0xacd1b37, "virtio_reset_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8e6cb989, "virtio_check_driver_offered_feature" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x412f893c, "page_offline_begin" },
	{ 0xfa08c34a, "page_offline_end" },
	{ 0x55648ff6, "generic_online_page" },
	{ 0x10e6f74a, "free_contig_range" },
	{ 0x95a9b4a9, "adjust_managed_page_count" },
	{ 0xfcbfec70, "add_memory_driver_managed" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0x12b96bed, "alloc_contig_range_noprof" },
	{ 0x144f9830, "dump_page" },
	{ 0x3fa92fa0, "unregister_virtio_driver" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x77482155, "virtqueue_add_sgs" },
	{ 0x894f890d, "virtqueue_kick" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x9213582c, "virtqueue_get_buf" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "virtio,virtio_ring");

MODULE_ALIAS("virtio:d00000018v*");
