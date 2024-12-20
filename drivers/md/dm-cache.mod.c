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

KSYMTAB_FUNC(dm_cache_policy_register, "_gpl", "");
KSYMTAB_FUNC(dm_cache_policy_unregister, "_gpl", "");
KSYMTAB_FUNC(dm_cache_policy_create, "_gpl", "");
KSYMTAB_FUNC(dm_cache_policy_destroy, "_gpl", "");
KSYMTAB_FUNC(dm_cache_policy_get_name, "_gpl", "");
KSYMTAB_FUNC(dm_cache_policy_get_version, "_gpl", "");
KSYMTAB_FUNC(dm_cache_policy_get_hint_size, "_gpl", "");
KSYMTAB_FUNC(btracker_create, "_gpl", "");
KSYMTAB_FUNC(btracker_destroy, "_gpl", "");
KSYMTAB_FUNC(btracker_nr_writebacks_queued, "_gpl", "");
KSYMTAB_FUNC(btracker_nr_demotions_queued, "_gpl", "");
KSYMTAB_FUNC(btracker_queue, "_gpl", "");
KSYMTAB_FUNC(btracker_issue, "_gpl", "");
KSYMTAB_FUNC(btracker_complete, "_gpl", "");
KSYMTAB_FUNC(btracker_promotion_already_present, "_gpl", "");

SYMBOL_CRC(dm_cache_policy_register, 0x131c7293, "_gpl");
SYMBOL_CRC(dm_cache_policy_unregister, 0xc473ecee, "_gpl");
SYMBOL_CRC(dm_cache_policy_create, 0x50b3c64c, "_gpl");
SYMBOL_CRC(dm_cache_policy_destroy, 0xf9f3e74b, "_gpl");
SYMBOL_CRC(dm_cache_policy_get_name, 0x37ef59a5, "_gpl");
SYMBOL_CRC(dm_cache_policy_get_version, 0x23ddc5ab, "_gpl");
SYMBOL_CRC(dm_cache_policy_get_hint_size, 0x4becb830, "_gpl");
SYMBOL_CRC(btracker_create, 0x481a0b15, "_gpl");
SYMBOL_CRC(btracker_destroy, 0x5adc2807, "_gpl");
SYMBOL_CRC(btracker_nr_writebacks_queued, 0x65eea825, "_gpl");
SYMBOL_CRC(btracker_nr_demotions_queued, 0x1c852cab, "_gpl");
SYMBOL_CRC(btracker_queue, 0x87bee547, "_gpl");
SYMBOL_CRC(btracker_issue, 0xa2365f44, "_gpl");
SYMBOL_CRC(btracker_complete, 0xa7eadcb5, "_gpl");
SYMBOL_CRC(btracker_promotion_already_present, 0x0efbca4c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5b04d3fe, "dm_bitset_clear_bit" },
	{ 0x836693c5, "dm_disk_bitset_init" },
	{ 0xb35ee0d2, "bioset_exit" },
	{ 0xd017c9c7, "dm_array_new" },
	{ 0x7ade1071, "dm_tm_destroy" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0x736b97bd, "bio_endio" },
	{ 0x418204e4, "dm_array_set_value" },
	{ 0x9e798e22, "dm_bm_set_read_only" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x54019e15, "dm_suspended" },
	{ 0xfe02b11d, "dm_bio_prison_free_cell_v2" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x94daa188, "dm_bitset_cursor_next" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf00e01f3, "dm_bm_write_lock" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x1d0d53f7, "dm_array_empty" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xeb692a57, "bio_chain" },
	{ 0x2005df16, "dm_unregister_target" },
	{ 0x24315eec, "dm_cell_put_v2" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x46c56110, "dm_bitset_empty" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x72289260, "dm_block_manager_destroy" },
	{ 0x3896f8d8, "dm_array_walk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7ed9022, "dm_bitset_del" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4f477261, "dm_bm_checksum" },
	{ 0x44a8d9bd, "dm_set_target_max_io_len" },
	{ 0x2f40da68, "dm_bm_set_read_write" },
	{ 0xfb578fc5, "memset" },
	{ 0x43ec262e, "bio_alloc_clone" },
	{ 0x401fdfc2, "dm_table_event" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x38d53eec, "dm_array_del" },
	{ 0x2842d760, "dm_bitset_resize" },
	{ 0x32bf4f4b, "dm_bitset_cursor_get_value" },
	{ 0x39c74235, "dm_read_arg_group" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbfaf3a79, "dm_cell_lock_v2" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xedf5036f, "dm_bitset_flush" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd163cade, "dm_tm_commit" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x51005cef, "dm_bitset_cursor_skip" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6bfa88c8, "dm_bitset_cursor_begin" },
	{ 0x40dd7831, "dm_kcopyd_copy" },
	{ 0xe0c20991, "dm_table_device_name" },
	{ 0xd05056f8, "dm_register_target" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x94601fc4, "bioset_init" },
	{ 0xc79f7fb4, "dm_cell_get_v2" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x735aa0a7, "dm_cell_quiesce_v2" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7612cd9c, "dm_bm_block_size" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x40720a25, "dm_bitset_set_bit" },
	{ 0x8ce77dd3, "dm_cell_unlock_v2" },
	{ 0x8e057e61, "dm_array_cursor_end" },
	{ 0xf2d95916, "mempool_init_noprof" },
	{ 0x8d90836b, "dm_get_device" },
	{ 0xf345ed63, "dm_cell_lock_promote_v2" },
	{ 0x754d539c, "strlen" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0x48e323be, "dm_bm_unlock" },
	{ 0x386ce2cc, "dm_bio_get_target_bio_nr" },
	{ 0x669c191b, "dm_consume_args" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x6fac2256, "dm_array_get_value" },
	{ 0x38e46431, "mempool_exit" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x2bc1a8d9, "dm_tm_open_with_sm" },
	{ 0xec16a055, "bio_associate_blkg" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x68f34c27, "dm_array_cursor_next" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb940af6a, "dm_array_info_init" },
	{ 0x1e3f728d, "dm_block_data" },
	{ 0xd3066c24, "dm_per_bio_data" },
	{ 0x6231046, "dm_put_device" },
	{ 0x524f4523, "dm_submit_bio_remap" },
	{ 0x95a52abd, "dm_bm_is_read_only" },
	{ 0xecc6b839, "dm_block_manager_create" },
	{ 0xa99029b9, "dm_bitset_cursor_end" },
	{ 0x96848186, "scnprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x5475ba9e, "dm_block_location" },
	{ 0xace9b57b, "dm_bio_prison_destroy_v2" },
	{ 0x54f69d, "dm_tm_pre_commit" },
	{ 0xd99e003d, "dm_bio_prison_create_v2" },
	{ 0xe2964344, "__wake_up" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x3ad0f55b, "dm_bm_flush" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9dd9df13, "dm_kcopyd_client_create" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xa1c0fc3, "dm_bm_read_lock" },
	{ 0xe07a2542, "dm_bitset_new" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdf3a4e7d, "dm_tm_create_with_sm" },
	{ 0xe0e68183, "dm_array_resize" },
	{ 0x67c6c5b9, "dm_array_cursor_get_value" },
	{ 0xa916b694, "strnlen" },
	{ 0x7e735089, "dm_bio_prison_alloc_cell_v2" },
	{ 0xd251167, "dm_array_cursor_begin" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xbf9308e3, "submit_bio" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x4baf8cb5, "dm_bm_write_lock_zero" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "dm-persistent-data,dm-mod,dm-bio-prison");

