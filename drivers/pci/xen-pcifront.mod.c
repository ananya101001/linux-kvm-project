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
	{ 0x5a549f7, "_dev_info" },
	{ 0x458d795c, "pci_claim_resource" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xf727c35a, "pci_dev_put" },
	{ 0xe08a224e, "pci_get_slot" },
	{ 0x870e4539, "pci_scan_single_device" },
	{ 0xdedee727, "xenbus_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8cda8029, "xen_clear_irq_pending" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x642eb5c6, "xen_poll_irq_timeout" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x1073fedf, "msi_domain_first_desc" },
	{ 0xa1860c5f, "msi_next_desc" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x41eff77b, "xenbus_setup_ring" },
	{ 0x29f4045c, "xenbus_alloc_evtchn" },
	{ 0x34eab46d, "bind_evtchn_to_irqhandler" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x88eacb40, "xenbus_dev_fatal" },
	{ 0xf2d14359, "xenbus_switch_state" },
	{ 0xd568d1eb, "pci_find_bus" },
	{ 0x6efcc1bc, "pci_walk_bus" },
	{ 0xc2ce22f5, "pci_bus_add_devices" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x27cdca93, "pci_add_resource" },
	{ 0x77358855, "iomem_resource" },
	{ 0x9493fc86, "node_states" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x65c5403b, "pci_scan_root_bus" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x38a71b7e, "pci_free_resource_list" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd6d905eb, "xenbus_dev_error" },
	{ 0xd72feba2, "xenbus_read_driver_state" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x9d1e6054, "pci_get_domain_bus_and_slot" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x85cb2c45, "xen_has_pv_devices" },
	{ 0xb92f027f, "xen_pci_frontend" },
	{ 0x7fe4fe4b, "__xenbus_register_frontend" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x207c76f, "pci_stop_and_remove_bus_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xdedf4785, "device_unregister" },
	{ 0xe8cd6b5c, "pci_remove_bus" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0xf2596bb, "xenbus_free_evtchn" },
	{ 0x9b651e51, "xenbus_teardown_ring" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

