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
	{ 0x9dd9df13, "dm_kcopyd_client_create" },
	{ 0x81c568c7, "blkdev_zone_mgmt" },
	{ 0x556e59b4, "dm_accept_partial_bio" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xa916b694, "strnlen" },
	{ 0x2c3368b2, "shrinker_register" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x5b05cc9b, "blk_finish_plug" },
	{ 0xbf9308e3, "submit_bio" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb35ee0d2, "bioset_exit" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0xeff5e7af, "bio_put" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x736b97bd, "bio_endio" },
	{ 0xf8835fbf, "__bio_advance" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xa3f8266f, "submit_bio_noacct" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6dcf857f, "uuid_null" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x2005df16, "dm_unregister_target" },
	{ 0x331f0cbe, "blkdev_issue_zeroout" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x5f765fd5, "zero_fill_bio_iter" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x43ec262e, "bio_alloc_clone" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x668b19a1, "down_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x745a981, "xa_erase" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x40dd7831, "dm_kcopyd_copy" },
	{ 0xe0c20991, "dm_table_device_name" },
	{ 0xd05056f8, "dm_register_target" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x94601fc4, "bioset_init" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1ad7a19c, "dm_table_get_mode" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x572f89c3, "blkdev_issue_flush" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x8d90836b, "dm_get_device" },
	{ 0x754d539c, "strlen" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9737feb5, "bio_alloc_bioset" },
	{ 0x53b954a2, "up_read" },
	{ 0xac859f6f, "submit_bio_wait" },
	{ 0x7f357e24, "blkdev_report_zones" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xed0b2833, "fs_bio_set" },
	{ 0x8cfdcc81, "shrinker_alloc" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xdfccba41, "__bio_add_page" },
	{ 0x9c5bad96, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xfbc4f89e, "io_schedule_timeout" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd3066c24, "dm_per_bio_data" },
	{ 0x6231046, "dm_put_device" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xe2964344, "__wake_up" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xacb0f234, "shrinker_free" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");

