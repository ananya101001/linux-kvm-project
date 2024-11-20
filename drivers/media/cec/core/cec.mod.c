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

KSYMTAB_FUNC(cec_allocate_adapter, "_gpl", "");
KSYMTAB_FUNC(cec_register_adapter, "_gpl", "");
KSYMTAB_FUNC(cec_unregister_adapter, "_gpl", "");
KSYMTAB_FUNC(cec_delete_adapter, "_gpl", "");
KSYMTAB_FUNC(cec_get_edid_phys_addr, "_gpl", "");
KSYMTAB_FUNC(cec_fill_conn_info_from_drm, "_gpl", "");
KSYMTAB_FUNC(cec_queue_pin_cec_event, "_gpl", "");
KSYMTAB_FUNC(cec_queue_pin_hpd_event, "_gpl", "");
KSYMTAB_FUNC(cec_queue_pin_5v_event, "_gpl", "");
KSYMTAB_FUNC(cec_transmit_done_ts, "_gpl", "");
KSYMTAB_FUNC(cec_transmit_attempt_done_ts, "_gpl", "");
KSYMTAB_FUNC(cec_transmit_msg, "_gpl", "");
KSYMTAB_FUNC(cec_received_msg_ts, "_gpl", "");
KSYMTAB_FUNC(cec_s_phys_addr, "_gpl", "");
KSYMTAB_FUNC(cec_s_phys_addr_from_edid, "_gpl", "");
KSYMTAB_FUNC(cec_s_conn_info, "_gpl", "");
KSYMTAB_FUNC(cec_s_log_addrs, "_gpl", "");
KSYMTAB_FUNC(cec_notifier_conn_register, "_gpl", "");
KSYMTAB_FUNC(cec_notifier_conn_unregister, "_gpl", "");
KSYMTAB_FUNC(cec_notifier_cec_adap_register, "_gpl", "");
KSYMTAB_FUNC(cec_notifier_cec_adap_unregister, "_gpl", "");
KSYMTAB_FUNC(cec_notifier_set_phys_addr, "_gpl", "");
KSYMTAB_FUNC(cec_notifier_set_phys_addr_from_edid, "_gpl", "");
KSYMTAB_FUNC(cec_notifier_parse_hdmi_phandle, "_gpl", "");

SYMBOL_CRC(cec_allocate_adapter, 0x0c8c1e18, "_gpl");
SYMBOL_CRC(cec_register_adapter, 0x9fb36087, "_gpl");
SYMBOL_CRC(cec_unregister_adapter, 0x0bc7a699, "_gpl");
SYMBOL_CRC(cec_delete_adapter, 0x63c8bde8, "_gpl");
SYMBOL_CRC(cec_get_edid_phys_addr, 0xbe4de675, "_gpl");
SYMBOL_CRC(cec_fill_conn_info_from_drm, 0xd0138db9, "_gpl");
SYMBOL_CRC(cec_queue_pin_cec_event, 0x0cf4b05c, "_gpl");
SYMBOL_CRC(cec_queue_pin_hpd_event, 0x5d53cf86, "_gpl");
SYMBOL_CRC(cec_queue_pin_5v_event, 0x77961ded, "_gpl");
SYMBOL_CRC(cec_transmit_done_ts, 0x8c9fa9b6, "_gpl");
SYMBOL_CRC(cec_transmit_attempt_done_ts, 0x4c3d76f1, "_gpl");
SYMBOL_CRC(cec_transmit_msg, 0x1b858138, "_gpl");
SYMBOL_CRC(cec_received_msg_ts, 0x964454dd, "_gpl");
SYMBOL_CRC(cec_s_phys_addr, 0x281a27e3, "_gpl");
SYMBOL_CRC(cec_s_phys_addr_from_edid, 0x25bed541, "_gpl");
SYMBOL_CRC(cec_s_conn_info, 0x57c791f4, "_gpl");
SYMBOL_CRC(cec_s_log_addrs, 0x6ed93ebf, "_gpl");
SYMBOL_CRC(cec_notifier_conn_register, 0x760e02ef, "_gpl");
SYMBOL_CRC(cec_notifier_conn_unregister, 0xaee236c6, "_gpl");
SYMBOL_CRC(cec_notifier_cec_adap_register, 0x389f9f1c, "_gpl");
SYMBOL_CRC(cec_notifier_cec_adap_unregister, 0x24d85d12, "_gpl");
SYMBOL_CRC(cec_notifier_set_phys_addr, 0xa01fbb6b, "_gpl");
SYMBOL_CRC(cec_notifier_set_phys_addr_from_edid, 0xb3422b7e, "_gpl");
SYMBOL_CRC(cec_notifier_parse_hdmi_phandle, 0x456db893, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc520b851, "seq_lseek" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x3131271a, "get_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x16d30c75, "wake_up_process" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x59f0318e, "cdev_device_add" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84975e26, "debugfs_create_devm_seqfile" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xca844bc7, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xc6cbbc89, "capable" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb5228f1a, "bus_unregister" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8656f320, "debugfs_remove" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x585258e2, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x20463df4, "wait_for_completion_killable" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc03f042e, "kthread_create_on_node" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x5c4440b5, "seq_read" },
	{ 0x51cd0202, "debugfs_create_file" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x3d1a1b7b, "seq_write" },
	{ 0x356b9af6, "kobject_set_name" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x377214d3, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd4f9fdc4, "single_release" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x50472d9a, "single_open" },
	{ 0x8b0ac9d7, "debugfs_create_dir" },
	{ 0x5d64dd4d, "cdev_init" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xa83a27a3, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0xa6257a2f, "complete" },
	{ 0xf1a86b0f, "cdev_device_del" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

