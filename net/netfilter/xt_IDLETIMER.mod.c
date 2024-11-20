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
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x58316029, "alarm_cancel" },
	{ 0xa916b694, "strnlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x8aeb0e01, "alarm_start_relative" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x63b1fee2, "sysfs_notify" },
	{ 0x9d47a039, "xt_unregister_targets" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbc515321, "alarm_expires_remaining" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xc62c42cf, "sysfs_create_file_ns" },
	{ 0xaedb2a25, "kobject_uevent" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x6dd326e1, "alarm_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc101b80e, "class_create" },
	{ 0x5d480ef3, "device_create" },
	{ 0xc2d5d571, "xt_register_targets" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x50785e75, "device_destroy" },
	{ 0x8d8eecb1, "class_destroy" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xcc09a84e, "sysfs_remove_file_ns" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "x_tables");

