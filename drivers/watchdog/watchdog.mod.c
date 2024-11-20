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

KSYMTAB_FUNC(watchdog_init_timeout, "_gpl", "");
KSYMTAB_FUNC(watchdog_set_restart_priority, "_gpl", "");
KSYMTAB_FUNC(watchdog_register_device, "_gpl", "");
KSYMTAB_FUNC(watchdog_unregister_device, "_gpl", "");
KSYMTAB_FUNC(devm_watchdog_register_device, "_gpl", "");
KSYMTAB_FUNC(watchdog_set_last_hw_keepalive, "_gpl", "");
KSYMTAB_FUNC(watchdog_notify_pretimeout, "_gpl", "");
KSYMTAB_FUNC(watchdog_register_governor, "", "");
KSYMTAB_FUNC(watchdog_unregister_governor, "", "");

SYMBOL_CRC(watchdog_init_timeout, 0x1754c363, "_gpl");
SYMBOL_CRC(watchdog_set_restart_priority, 0x180a978f, "_gpl");
SYMBOL_CRC(watchdog_register_device, 0xa5f17a9a, "_gpl");
SYMBOL_CRC(watchdog_unregister_device, 0xc83ce30b, "_gpl");
SYMBOL_CRC(devm_watchdog_register_device, 0x040333ad, "_gpl");
SYMBOL_CRC(watchdog_set_last_hw_keepalive, 0xd463e5fb, "_gpl");
SYMBOL_CRC(watchdog_notify_pretimeout, 0x716160cd, "_gpl");
SYMBOL_CRC(watchdog_register_governor, 0xc35963e3, "");
SYMBOL_CRC(watchdog_unregister_governor, 0x8bb770ca, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x59f0318e, "cdev_device_add" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xca844bc7, "put_device" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xa0bc1031, "kthread_queue_work" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xc81ce80d, "compat_ptr_ioctl" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xbe5b632e, "__devres_alloc_node" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0xffb7c514, "ida_free" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0xea43f98d, "misc_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd8bb697, "bpf_trace_run3" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x4c076063, "kthread_destroy_worker" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0x72b8410a, "stream_open" },
	{ 0xf9cb0511, "sched_set_fifo" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x4a958e37, "class_register" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x5d64dd4d, "cdev_init" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x19401a2d, "kthread_cancel_work_sync" },
	{ 0x950e7aae, "kthread_create_worker" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xf1a86b0f, "cdev_device_del" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0x40d59096, "unregister_restart_handler" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0xe893d918, "__module_get" },
	{ 0xd9d8fd16, "register_restart_handler" },
	{ 0x3131271a, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf401d1a8, "devres_add" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

