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
	{ 0x894f890d, "virtqueue_kick" },
	{ 0xecbb1768, "scsi_done" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x6e96bbd6, "scmd_printk" },
	{ 0x9213582c, "virtqueue_get_buf" },
	{ 0x43316af5, "virtqueue_disable_cb" },
	{ 0xeea2de2a, "virtqueue_enable_cb" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x6e3ae8c8, "__scsi_iterate_devices" },
	{ 0x5407a918, "scsi_execute_cmd" },
	{ 0x4d0bac1, "scsi_remove_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1e3ccd, "scsi_scan_host" },
	{ 0xaef41929, "scsi_device_lookup" },
	{ 0x8ffb42d6, "scsi_device_put" },
	{ 0xd6b64063, "scsi_scan_target" },
	{ 0xc9c42b67, "scsi_rescan_device" },
	{ 0xc67c7580, "scsi_add_device" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xacd1b37, "virtio_reset_device" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x7b1a0218, "scsi_host_alloc" },
	{ 0x7e9de5c, "virtqueue_get_vring_size" },
	{ 0x8e6cb989, "virtio_check_driver_offered_feature" },
	{ 0x483e46cf, "scsi_add_host_with_dma" },
	{ 0x72705ca2, "scsi_host_put" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x731d24a6, "blk_mq_unique_tag" },
	{ 0x69acdf38, "memcpy" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa4c8accd, "scsi_remove_host" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0xcfeca16c, "sdev_prefix_printk" },
	{ 0xa6257a2f, "complete" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x2213aa1f, "mempool_create_node_noprof" },
	{ 0xf632832, "__register_virtio_driver" },
	{ 0x122c3a7e, "_printk" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe57e3a60, "blk_mq_virtio_map_queues" },
	{ 0xb2fa093e, "blk_mq_map_queues" },
	{ 0x3cb5f497, "scsi_change_queue_depth" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbea2ee27, "virtqueue_kick_prepare" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf138f40a, "virtqueue_notify" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x77482155, "virtqueue_add_sgs" },
	{ 0x3fa92fa0, "unregister_virtio_driver" },
	{ 0x99f39293, "virtqueue_add_inbuf" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "virtio_ring,scsi_mod,virtio");

MODULE_ALIAS("virtio:d00000008v*");
