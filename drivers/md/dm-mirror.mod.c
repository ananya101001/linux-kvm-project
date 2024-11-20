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
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9dd9df13, "dm_kcopyd_client_create" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x38972f23, "dm_rh_region_to_sector" },
	{ 0xf945833f, "dm_rh_dirty_log" },
	{ 0x736b97bd, "bio_endio" },
	{ 0x7774620f, "dm_rh_stop_recovery" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x24d273d1, "add_timer" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xa3f8266f, "submit_bio_noacct" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x2005df16, "dm_unregister_target" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x44a8d9bd, "dm_set_target_max_io_len" },
	{ 0x401fdfc2, "dm_table_event" },
	{ 0x5d93b5bf, "dm_rh_bio_to_region" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbe38a431, "dm_rh_recovery_prepare" },
	{ 0x1d2f9ac, "dm_rh_recovery_start" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0xa53387c7, "dm_rh_flush" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd8aa4284, "dm_rh_region_context" },
	{ 0x40dd7831, "dm_kcopyd_copy" },
	{ 0xd05056f8, "dm_register_target" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x95242b21, "dm_region_hash_create" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x7d5e1815, "dm_rh_get_region_key" },
	{ 0x1ad7a19c, "dm_table_get_mode" },
	{ 0xe9eb9f, "dm_rh_inc_pending" },
	{ 0xc04f99e, "dm_io" },
	{ 0x8d90836b, "dm_get_device" },
	{ 0x57e16c3e, "dm_rh_get_state" },
	{ 0xf92b8a3d, "dm_rh_get_region_size" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xa83588eb, "dm_rh_recovery_end" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x5f4a6e61, "dm_rh_dec" },
	{ 0xec16a055, "bio_associate_blkg" },
	{ 0x50d5ea80, "dm_dirty_log_create" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xdf5f38c1, "dm_rh_delay" },
	{ 0xfd93482e, "dm_rh_recovery_in_flight" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xbbb18f32, "dm_noflush_suspending" },
	{ 0xd3066c24, "dm_per_bio_data" },
	{ 0x6231046, "dm_put_device" },
	{ 0x3a18389a, "dm_rh_update_states" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7d053fc5, "dm_rh_start_recovery" },
	{ 0x96848186, "scnprintf" },
	{ 0x138cf08e, "dm_dirty_log_destroy" },
	{ 0x60bc9c3f, "dm_rh_mark_nosync" },
	{ 0x37a0cba, "kfree" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x38efaf5a, "dm_region_hash_destroy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "dm-mod,dm-region-hash,dm-log");

