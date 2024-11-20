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
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0xc67c7580, "scsi_add_device" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xaef41929, "scsi_device_lookup" },
	{ 0x4d0bac1, "scsi_remove_device" },
	{ 0x8ffb42d6, "scsi_device_put" },
	{ 0xf2d14359, "xenbus_switch_state" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2d9b1e12, "xenbus_frontend_closed" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xa4c8accd, "scsi_remove_host" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0xd72feba2, "xenbus_read_driver_state" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xdedee727, "xenbus_unregister_driver" },
	{ 0x49e5156, "gnttab_try_end_foreign_access" },
	{ 0xecbb1768, "scsi_done" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xea5cbce, "xen_irq_lateeoi" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x9b651e51, "xenbus_teardown_ring" },
	{ 0x72705ca2, "scsi_host_put" },
	{ 0x41eff77b, "xenbus_setup_ring" },
	{ 0x29f4045c, "xenbus_alloc_evtchn" },
	{ 0x327a2687, "bind_evtchn_to_irq_lateeoi" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x88eacb40, "xenbus_dev_fatal" },
	{ 0x7b1a0218, "scsi_host_alloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x483e46cf, "scsi_add_host_with_dma" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xd27f215d, "gnttab_alloc_grant_references" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf27d0a7b, "gnttab_grant_foreign_access_ref" },
	{ 0x31dca4d8, "gnttab_claim_grant_reference" },
	{ 0x4b931968, "xen_features" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x7fe4fe4b, "__xenbus_register_frontend" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe2964344, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3a61ac6, "_dev_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0xd6d905eb, "xenbus_dev_error" },
	{ 0xce0a4020, "xenbus_directory" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_mod");

