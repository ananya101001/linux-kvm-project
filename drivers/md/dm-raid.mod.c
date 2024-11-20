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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2005df16, "dm_unregister_target" },
	{ 0x5e2ad54, "md_unfrozen_sync_thread" },
	{ 0xbba572bb, "mddev_resume" },
	{ 0xffb8bc88, "dm_table_get_md" },
	{ 0x2ae54251, "dm_disk" },
	{ 0x750d357, "set_capacity_and_notify" },
	{ 0x401fdfc2, "dm_table_event" },
	{ 0xd158a86d, "md_update_sb" },
	{ 0x96848186, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0x39c74235, "dm_read_arg_group" },
	{ 0x669c191b, "dm_consume_args" },
	{ 0x56bcf7b, "dm_read_arg" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x119e2e74, "mddev_init" },
	{ 0xad89cee4, "md_rdev_init" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x44a8d9bd, "dm_set_target_max_io_len" },
	{ 0x1ad7a19c, "dm_table_get_mode" },
	{ 0x8d90836b, "dm_get_device" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x408237bc, "md_run" },
	{ 0xac14e66a, "md_start" },
	{ 0x2f5fb8a0, "raid5_set_cache_size" },
	{ 0xcc38b8d5, "r5c_journal_mode_set" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0xd05056f8, "dm_register_target" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x7ecfeaa1, "md_wakeup_thread" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x2f9a2a20, "md_idle_sync_thread" },
	{ 0x263ca350, "mddev_unlock" },
	{ 0xe08e611b, "md_frozen_sync_thread" },
	{ 0x917f1c0f, "sync_page_io" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc6c5f91e, "md_error" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xfb578fc5, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xba6040f9, "md_stop_writes" },
	{ 0x2d8cf1e2, "mddev_suspend" },
	{ 0xc37e427d, "md_handle_request" },
	{ 0xe192570b, "md_rdev_clear" },
	{ 0x6231046, "dm_put_device" },
	{ 0x906bb13d, "mddev_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd4f7ef9b, "md_stop" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "dm-mod,md-mod,raid456");

