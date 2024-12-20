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
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x5c5a1b16, "tick_broadcast_control" },
	{ 0xbfe5616d, "tick_broadcast_oneshot_control" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x2b67b6b7, "mds_idle_clear" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x56398615, "mark_tsc_unstable" },
	{ 0xf09cc34, "schedule_timeout_killable" },
	{ 0x1000e51, "schedule" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf390f6f1, "__bitmap_andnot" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x6f33cda8, "set_cpus_allowed_ptr" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x16d30c75, "wake_up_process" },
	{ 0xc03f042e, "kthread_create_on_node" },
	{ 0x585258e2, "kthread_stop" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0xfa017be3, "is_acpi_device_node" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x37a0cba, "kfree" },
	{ 0xc42dcb99, "acpi_evaluate_ost" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x7f103d42, "sched_set_fifo_low" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe37056dc, "pv_ops" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI000C:*");
