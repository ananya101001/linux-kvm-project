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
	{ 0x4baf8cb5, "dm_bm_write_lock_zero" },
	{ 0x836693c5, "dm_disk_bitset_init" },
	{ 0xdb2c8e97, "dm_btree_lookup" },
	{ 0x7ade1071, "dm_tm_destroy" },
	{ 0x736b97bd, "bio_endio" },
	{ 0x418204e4, "dm_array_set_value" },
	{ 0xecc1aeba, "dm_bitset_test_bit" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa3f8266f, "submit_bio_noacct" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf00e01f3, "dm_bm_write_lock" },
	{ 0x1d0d53f7, "dm_array_empty" },
	{ 0x88a5b30, "dm_btree_find_lowest_key" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x2005df16, "dm_unregister_target" },
	{ 0x46c56110, "dm_bitset_empty" },
	{ 0x72289260, "dm_block_manager_destroy" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7ed9022, "dm_bitset_del" },
	{ 0x4f477261, "dm_bm_checksum" },
	{ 0x44a8d9bd, "dm_set_target_max_io_len" },
	{ 0xfb578fc5, "memset" },
	{ 0x38d53eec, "dm_array_del" },
	{ 0x2842d760, "dm_bitset_resize" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdde4031, "dm_btree_empty" },
	{ 0xedf5036f, "dm_bitset_flush" },
	{ 0xd163cade, "dm_tm_commit" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd05056f8, "dm_register_target" },
	{ 0x999e8297, "vfree" },
	{ 0x88295b96, "dm_tm_unlock" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x7612cd9c, "dm_bm_block_size" },
	{ 0x40720a25, "dm_bitset_set_bit" },
	{ 0x8d90836b, "dm_get_device" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xcf7c42f, "dm_btree_remove" },
	{ 0x48e323be, "dm_bm_unlock" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x87c934be, "dm_tm_inc" },
	{ 0x2bc1a8d9, "dm_tm_open_with_sm" },
	{ 0xec16a055, "bio_associate_blkg" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x9c5bad96, "blk_start_plug" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0xd8682982, "dm_btree_insert" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb940af6a, "dm_array_info_init" },
	{ 0x33347275, "dm_tm_read_lock" },
	{ 0x1e3f728d, "dm_block_data" },
	{ 0x6231046, "dm_put_device" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xecc6b839, "dm_block_manager_create" },
	{ 0x96848186, "scnprintf" },
	{ 0x6c600395, "dm_btree_del" },
	{ 0xb6d0ab73, "dm_tm_shadow_block" },
	{ 0x37a0cba, "kfree" },
	{ 0x5475ba9e, "dm_block_location" },
	{ 0x54f69d, "dm_tm_pre_commit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa1c0fc3, "dm_bm_read_lock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdf3a4e7d, "dm_tm_create_with_sm" },
	{ 0xe0e68183, "dm_array_resize" },
	{ 0x5b05cc9b, "blk_finish_plug" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "dm-persistent-data,dm-mod");

