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

KSYMTAB_FUNC(dm_register_path_selector, "_gpl", "");
KSYMTAB_FUNC(dm_unregister_path_selector, "_gpl", "");

SYMBOL_CRC(dm_register_path_selector, 0xf33207dc, "_gpl");
SYMBOL_CRC(dm_unregister_path_selector, 0x720306df, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7f1fd79f, "module_put" },
	{ 0x736b97bd, "bio_endio" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x54019e15, "dm_suspended" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa3f8266f, "submit_bio_noacct" },
	{ 0x56bcf7b, "dm_read_arg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x1ab19a06, "blk_mq_alloc_request" },
	{ 0x2005df16, "dm_unregister_target" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xdaa88db3, "blk_lld_busy" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x401fdfc2, "dm_table_event" },
	{ 0x39c74235, "dm_read_arg_group" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe0c20991, "dm_table_device_name" },
	{ 0xd05056f8, "dm_register_target" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x90601e56, "dm_start_time_ns_from_clone" },
	{ 0x1ad7a19c, "dm_table_get_mode" },
	{ 0xffb8bc88, "dm_table_get_md" },
	{ 0x3ed9d416, "dm_path_uevent" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x8d90836b, "dm_get_device" },
	{ 0x754d539c, "strlen" },
	{ 0x112b672, "dm_table_set_type" },
	{ 0x53b954a2, "up_read" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x669c191b, "dm_consume_args" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xec16a055, "bio_associate_blkg" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x9c5bad96, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xde8c1673, "param_ops_ulong" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x31f9f590, "dm_table_run_md_queue_async" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xbbb18f32, "dm_noflush_suspending" },
	{ 0x23418c7d, "dm_devt_from_path" },
	{ 0xd3066c24, "dm_per_bio_data" },
	{ 0x6231046, "dm_put_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x37a0cba, "kfree" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf255edea, "dm_mq_kick_requeue_list" },
	{ 0x42f9b424, "blk_mq_free_request" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x5b05cc9b, "blk_finish_plug" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");

