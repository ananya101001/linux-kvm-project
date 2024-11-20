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
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe6a27439, "pm_stay_awake" },
	{ 0xf6f9d58d, "init_on_free" },
	{ 0x8e6cb989, "virtio_check_driver_offered_feature" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x70dc4e23, "node_data" },
	{ 0x95a9b4a9, "adjust_managed_page_count" },
	{ 0xde4d5a92, "balloon_mops" },
	{ 0xdeebbe29, "__SetPageMovable" },
	{ 0x926ca7b7, "vm_event_states" },
	{ 0x28849f01, "__ClearPageMovable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xb5f4750d, "__put_devmap_managed_folio_refs" },
	{ 0x94c1bfc3, "__folio_put" },
	{ 0x7278d328, "all_vm_events" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x785a93b4, "si_mem_available" },
	{ 0xc5a4ab5d, "vm_node_stat" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x235b254, "pm_relax" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9a202095, "balloon_page_dequeue" },
	{ 0x3cc87e00, "balloon_page_alloc" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe82b54be, "balloon_page_enqueue" },
	{ 0x5a549f7, "_dev_info" },
	{ 0xacd1b37, "virtio_reset_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x49927d25, "page_reporting_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xacb0f234, "shrinker_free" },
	{ 0xc617f82c, "unregister_oom_notifier" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7e9de5c, "virtqueue_get_vring_size" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8cfdcc81, "shrinker_alloc" },
	{ 0x2c3368b2, "shrinker_register" },
	{ 0x622c7922, "register_oom_notifier" },
	{ 0x3270b058, "device_set_wakeup_capable" },
	{ 0x9d366f99, "page_reporting_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf632832, "__register_virtio_driver" },
	{ 0xe2964344, "__wake_up" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x85ed6502, "virtqueue_add_outbuf" },
	{ 0x894f890d, "virtqueue_kick" },
	{ 0x9213582c, "virtqueue_get_buf" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x99f39293, "virtqueue_add_inbuf" },
	{ 0x3fa92fa0, "unregister_virtio_driver" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "virtio,virtio_ring");

MODULE_ALIAS("virtio:d00000005v*");
