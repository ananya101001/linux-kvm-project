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
	{ 0x6518b34, "vmbus_connect_ring" },
	{ 0x89a9721d, "uio_event_notify" },
	{ 0x4f9e213f, "vmbus_open" },
	{ 0x3117c2cd, "sysfs_create_bin_file" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x49a5f7d6, "vmbus_close" },
	{ 0xe397fdd, "vmbus_device_unregister" },
	{ 0xf4d31f6e, "vmbus_setevent" },
	{ 0x16dbe47e, "vmbus_driver_unregister" },
	{ 0xfcbc8b43, "vmbus_teardown_gpadl" },
	{ 0x999e8297, "vfree" },
	{ 0xe11820ff, "sysfs_remove_bin_file" },
	{ 0x308786e4, "uio_unregister_device" },
	{ 0xdf4b9805, "vmbus_free_ring" },
	{ 0x59a7261d, "vmbus_devs" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x6db2914f, "vmbus_alloc_ring" },
	{ 0xb69fad82, "vmbus_connection" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xe60e530, "vmbus_establish_gpadl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4d175ef4, "__uio_register_device" },
	{ 0xe726acf2, "_dev_notice" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe2eaa621, "__vmbus_driver_register" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3b4e21c9, "vm_iomap_memory" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd49cf21d, "vmbus_disconnect_ring" },
	{ 0x526291f, "vmbus_set_chn_rescind_callback" },
	{ 0xbe826397, "vmbus_set_sc_create_callback" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "hv_vmbus,uio");


MODULE_INFO(srcversion, "6E778D4A30ABC9A42C2E290");
