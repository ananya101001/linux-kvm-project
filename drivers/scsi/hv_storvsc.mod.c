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
	{ 0x92f96652, "vmbus_sendpacket" },
	{ 0xbb147492, "hv_pkt_iter_first" },
	{ 0x14cca081, "scsi_dma_unmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x6e3ae8c8, "__scsi_iterate_devices" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x49a5f7d6, "vmbus_close" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x184fa3d5, "scsi_test_unit_ready" },
	{ 0xaef41929, "scsi_device_lookup" },
	{ 0x1000e51, "schedule" },
	{ 0xaa85673b, "fc_remote_port_delete" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x79882c4b, "scsi_host_get" },
	{ 0xc67c7580, "scsi_add_device" },
	{ 0x618911fc, "numa_node" },
	{ 0x9926e71f, "fc_release_transport" },
	{ 0x8ffb42d6, "scsi_device_put" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x72705ca2, "scsi_host_put" },
	{ 0x4f9e213f, "vmbus_open" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd1e3ccd, "scsi_scan_host" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc9c42b67, "scsi_rescan_device" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x496c992e, "hv_pkt_iter_close" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x731d24a6, "blk_mq_unique_tag" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbe826397, "vmbus_set_sc_create_callback" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xe2eaa621, "__vmbus_driver_register" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecbb1768, "scsi_done" },
	{ 0x4d0bac1, "scsi_remove_device" },
	{ 0x483e46cf, "scsi_add_host_with_dma" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x7b1a0218, "scsi_host_alloc" },
	{ 0x3044a9b3, "__hv_pkt_iter_next" },
	{ 0x2e948b87, "vmbus_sendpacket_mpb_desc" },
	{ 0x3cb5f497, "scsi_change_queue_depth" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xb033617e, "blk_queue_rq_timeout" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x3a337acd, "scsi_dma_map" },
	{ 0x16dbe47e, "vmbus_driver_unregister" },
	{ 0xb04ce688, "scsi_print_sense_hdr" },
	{ 0x6adb17f1, "fc_attach_transport" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5f7dafc4, "fc_remote_port_add" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa4c8accd, "scsi_remove_host" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe48eca03, "fc_remove_host" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "hv_vmbus,scsi_mod,scsi_transport_fc,scsi_common");

MODULE_ALIAS("vmbus:d96361baa104294db60572e2ffb1dc7f");
MODULE_ALIAS("vmbus:32264132cb86a2449b5c50d1417354f5");
MODULE_ALIAS("vmbus:4acc9b2f6900f34ab76b6fd0be528cda");
