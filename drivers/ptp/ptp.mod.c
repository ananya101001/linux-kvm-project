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

KSYMTAB_FUNC(ptp_clock_register, "", "");
KSYMTAB_FUNC(ptp_clock_unregister, "", "");
KSYMTAB_FUNC(ptp_clock_event, "", "");
KSYMTAB_FUNC(ptp_clock_index, "", "");
KSYMTAB_FUNC(ptp_find_pin, "", "");
KSYMTAB_FUNC(ptp_find_pin_unlocked, "", "");
KSYMTAB_FUNC(ptp_schedule_worker, "", "");
KSYMTAB_FUNC(ptp_cancel_worker_sync, "", "");

SYMBOL_CRC(ptp_clock_register, 0xbbff2fb6, "");
SYMBOL_CRC(ptp_clock_unregister, 0x905d0ff9, "");
SYMBOL_CRC(ptp_clock_event, 0x6e1b0a64, "");
SYMBOL_CRC(ptp_clock_index, 0x63cc4a90, "");
SYMBOL_CRC(ptp_find_pin, 0x83a0f58d, "");
SYMBOL_CRC(ptp_find_pin_unlocked, 0x13288de2, "");
SYMBOL_CRC(ptp_schedule_worker, 0x9bd1dd39, "");
SYMBOL_CRC(ptp_cancel_worker_sync, 0x042a98f9, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x20dbf27, "bitmap_alloc" },
	{ 0x9e918d06, "device_for_each_child_reverse" },
	{ 0x5a549f7, "_dev_info" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x312cc8b2, "kthread_mod_delayed_work" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xaa29a62f, "pps_event" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8656f320, "debugfs_remove" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xd3106c25, "debugfs_create_u32_array" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x498233, "pps_unregister_source" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x745a981, "xa_erase" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x4c076063, "kthread_destroy_worker" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5aba15e9, "posix_clock_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x229c9e7f, "kthread_queue_delayed_work" },
	{ 0xc32874e4, "ktime_get_snapshot" },
	{ 0xdc4cd040, "posix_clock_unregister" },
	{ 0x8b0ac9d7, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4a958e37, "class_register" },
	{ 0x862258db, "timecounter_init" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x950e7aae, "kthread_create_worker" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x8d49c7cd, "kthread_cancel_delayed_work_sync" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0xf86f560, "kthread_delayed_work_timer_fn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x17092ff0, "pps_register_source" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x80b29ea5, "device_for_each_child" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xca844bc7, "put_device" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "pps_core");

