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

KSYMTAB_FUNC(acpi_lid_open, "", "");

SYMBOL_CRC(acpi_lid_open, 0x48193639, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfc167278, "__acpi_bus_register_driver" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x9e05b967, "acpi_device_hid" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x9a22b9fd, "input_allocate_device" },
	{ 0x241cd204, "proc_mkdir" },
	{ 0x4b16762f, "proc_create_single_data" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x83a3674e, "input_register_device" },
	{ 0x3b029f48, "acpi_install_fixed_event_handler" },
	{ 0x3270b058, "device_set_wakeup_capable" },
	{ 0x221be355, "device_wakeup_enable" },
	{ 0xee3e0d71, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xd1907252, "input_set_capability" },
	{ 0x473b72cf, "input_free_device" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x27810361, "acpi_os_wait_events_complete" },
	{ 0x4055a920, "acpi_remove_fixed_event_handler" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x377214d3, "seq_printf" },
	{ 0xde8c1673, "param_ops_ulong" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd70f62b6, "acpi_os_execute" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x3f941f1b, "acpi_bus_unregister_driver" },
	{ 0xf6fc13ac, "acpi_pm_wakeup_event" },
	{ 0x77838788, "input_event" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x39b12223, "__acpi_handle_debug" },
	{ 0xab3fc466, "remove_proc_entry" },
	{ 0x77456e0a, "acpi_root_dir" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:PNP0C0D:*");
MODULE_ALIAS("acpi*:PNP0C0E:*");
MODULE_ALIAS("acpi*:LNXSLPBN:*");
MODULE_ALIAS("acpi*:PNP0C0C:*");
MODULE_ALIAS("acpi*:LNXPWRBN:*");
