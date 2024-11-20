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

KSYMTAB_FUNC(virtio_check_driver_offered_feature, "_gpl", "");
KSYMTAB_FUNC(virtio_config_changed, "_gpl", "");
KSYMTAB_FUNC(virtio_config_driver_disable, "_gpl", "");
KSYMTAB_FUNC(virtio_config_driver_enable, "_gpl", "");
KSYMTAB_FUNC(virtio_add_status, "_gpl", "");
KSYMTAB_FUNC(virtio_reset_device, "_gpl", "");
KSYMTAB_FUNC(__register_virtio_driver, "_gpl", "");
KSYMTAB_FUNC(unregister_virtio_driver, "_gpl", "");
KSYMTAB_FUNC(register_virtio_device, "_gpl", "");
KSYMTAB_FUNC(is_virtio_device, "_gpl", "");
KSYMTAB_FUNC(unregister_virtio_device, "_gpl", "");
KSYMTAB_FUNC(virtio_device_freeze, "_gpl", "");
KSYMTAB_FUNC(virtio_device_restore, "_gpl", "");

SYMBOL_CRC(virtio_check_driver_offered_feature, 0x8e6cb989, "_gpl");
SYMBOL_CRC(virtio_config_changed, 0xcbfbe3ec, "_gpl");
SYMBOL_CRC(virtio_config_driver_disable, 0x67d58312, "_gpl");
SYMBOL_CRC(virtio_config_driver_enable, 0xb38ba814, "_gpl");
SYMBOL_CRC(virtio_add_status, 0xbe734a27, "_gpl");
SYMBOL_CRC(virtio_reset_device, 0x0acd1b37, "_gpl");
SYMBOL_CRC(__register_virtio_driver, 0x0f632832, "_gpl");
SYMBOL_CRC(unregister_virtio_driver, 0x3fa92fa0, "_gpl");
SYMBOL_CRC(register_virtio_device, 0xba08b402, "_gpl");
SYMBOL_CRC(is_virtio_device, 0x8eee33b3, "_gpl");
SYMBOL_CRC(unregister_virtio_device, 0x12de865a, "_gpl");
SYMBOL_CRC(virtio_device_freeze, 0x78e2f8f0, "_gpl");
SYMBOL_CRC(virtio_device_restore, 0xb7ed4798, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x972052ee, "driver_register" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x6aae782e, "driver_unregister" },
	{ 0xdedf4785, "device_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa83a27a3, "bus_register" },
	{ 0xf1e046cc, "panic" },
	{ 0xb5228f1a, "bus_unregister" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x7bb0d19b, "virtio_check_mem_acc_cb" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x934ea33f, "device_add" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

