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
	{ 0xffb7c514, "ida_free" },
	{ 0xe57e3a60, "blk_mq_virtio_map_queues" },
	{ 0xb2fa093e, "blk_mq_map_queues" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xbea2ee27, "virtqueue_kick_prepare" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf138f40a, "virtqueue_notify" },
	{ 0x3fa92fa0, "unregister_virtio_driver" },
	{ 0x1ab19a06, "blk_mq_alloc_request" },
	{ 0xd6ee77a5, "blk_rq_map_kern" },
	{ 0x42f9b424, "blk_mq_free_request" },
	{ 0x754d539c, "strlen" },
	{ 0xfb23ba51, "blk_execute_rq" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x77482155, "virtqueue_add_sgs" },
	{ 0x9e229c49, "sg_alloc_table_chained" },
	{ 0x8ad60d40, "__blk_rq_map_sg" },
	{ 0x3079d629, "blk_mq_start_request" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2c4f2e35, "__vmalloc_noprof" },
	{ 0xfb578fc5, "memset" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x24eef9d8, "string_get_size" },
	{ 0xe726acf2, "_dev_notice" },
	{ 0x750d357, "set_capacity_and_notify" },
	{ 0xa56e1a52, "sg_free_table_chained" },
	{ 0xff23db84, "blk_mq_end_request_batch" },
	{ 0x3eec5bd1, "blk_mq_requeue_request" },
	{ 0x8e6cb989, "virtio_check_driver_offered_feature" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0xb837b08e, "queue_limits_commit_update" },
	{ 0xcf3cd7e, "blk_mq_unfreeze_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeec70055, "blk_mq_end_request" },
	{ 0xd182ef5f, "blk_mq_complete_request_remote" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd095e5c, "blk_mq_alloc_tag_set" },
	{ 0xc5229c9b, "virtio_max_dma_size" },
	{ 0x6999540f, "__blk_mq_alloc_disk" },
	{ 0xda7a3e8d, "blk_revalidate_disk_zones" },
	{ 0x69e9c1d7, "device_add_disk" },
	{ 0xb0e602eb, "memmove" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xfac73ba8, "set_disk_ro" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x894f890d, "virtqueue_kick" },
	{ 0xbf50dc0f, "blk_mq_stop_hw_queue" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xf632832, "__register_virtio_driver" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x43316af5, "virtqueue_disable_cb" },
	{ 0x16abb535, "blk_mq_complete_request" },
	{ 0x9213582c, "virtqueue_get_buf" },
	{ 0xeea2de2a, "virtqueue_enable_cb" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2e6b3c6a, "blk_mq_start_stopped_hw_queues" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xce2667da, "blk_mq_freeze_queue" },
	{ 0xacd1b37, "virtio_reset_device" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x59c98678, "del_gendisk" },
	{ 0x4d31cbe2, "blk_mq_free_tag_set" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x80131ca2, "put_disk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "virtio_ring,virtio");

MODULE_ALIAS("virtio:d00000002v*");
