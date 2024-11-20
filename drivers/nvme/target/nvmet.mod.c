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

KSYMTAB_DATA(nvmet_wq, "_gpl", "");
KSYMTAB_FUNC(nvmet_register_transport, "_gpl", "");
KSYMTAB_FUNC(nvmet_unregister_transport, "_gpl", "");
KSYMTAB_FUNC(nvmet_req_complete, "_gpl", "");
KSYMTAB_FUNC(nvmet_sq_destroy, "_gpl", "");
KSYMTAB_FUNC(nvmet_sq_init, "_gpl", "");
KSYMTAB_FUNC(nvmet_req_init, "_gpl", "");
KSYMTAB_FUNC(nvmet_req_uninit, "_gpl", "");
KSYMTAB_FUNC(nvmet_check_transfer_len, "_gpl", "");
KSYMTAB_FUNC(nvmet_req_alloc_sgls, "_gpl", "");
KSYMTAB_FUNC(nvmet_req_free_sgls, "_gpl", "");
KSYMTAB_FUNC(nvmet_ctrl_fatal_error, "_gpl", "");

SYMBOL_CRC(nvmet_wq, 0x3e0ef07a, "_gpl");
SYMBOL_CRC(nvmet_register_transport, 0x04904be9, "_gpl");
SYMBOL_CRC(nvmet_unregister_transport, 0x246e7f1a, "_gpl");
SYMBOL_CRC(nvmet_req_complete, 0xe3c191d3, "_gpl");
SYMBOL_CRC(nvmet_sq_destroy, 0xc8e628a2, "_gpl");
SYMBOL_CRC(nvmet_sq_init, 0x1c2d99b4, "_gpl");
SYMBOL_CRC(nvmet_req_init, 0xd69c226b, "_gpl");
SYMBOL_CRC(nvmet_req_uninit, 0xef5d3b70, "_gpl");
SYMBOL_CRC(nvmet_check_transfer_len, 0x32c1a623, "_gpl");
SYMBOL_CRC(nvmet_req_alloc_sgls, 0x3441fb23, "_gpl");
SYMBOL_CRC(nvmet_req_free_sgls, 0x2261765e, "_gpl");
SYMBOL_CRC(nvmet_ctrl_fatal_error, 0x3daad3a4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x527b8d9d, "configfs_register_subsystem" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x5df2b678, "radix_tree_next_chunk" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x30fd05df, "config_group_init_type_name" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf0d07543, "bio_integrity_add_page" },
	{ 0x5a921311, "strncmp" },
	{ 0x35b0ea3, "sg_miter_stop" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x9166fada, "strncpy" },
	{ 0xeb692a57, "bio_chain" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xffb7c514, "ida_free" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x405da207, "bio_add_page" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xce4c71ae, "bio_integrity_alloc" },
	{ 0x4c3d8970, "sg_miter_start" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x95a052b1, "bpf_trace_run1" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3ffd487f, "bio_init" },
	{ 0xe97b444e, "iov_iter_bvec" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb67fec0e, "uuid_parse" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x745a981, "xa_erase" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x8f38347d, "vfs_fsync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2213aa1f, "mempool_create_node_noprof" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xfe1c9ea5, "sg_pcopy_from_buffer" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x572f89c3, "blkdev_issue_flush" },
	{ 0x3bed80a1, "file_bdev" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x754d539c, "strlen" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9737feb5, "bio_alloc_bioset" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x53b954a2, "up_read" },
	{ 0xaba1c8a2, "__blkdev_issue_zeroout" },
	{ 0x7f62eaa4, "sgl_free" },
	{ 0xac859f6f, "submit_bio_wait" },
	{ 0x7f357e24, "blkdev_report_zones" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x54b23e67, "sg_pcopy_to_buffer" },
	{ 0xd0b5f061, "__blkdev_issue_discard" },
	{ 0xed0b2833, "fs_bio_set" },
	{ 0x6b519b80, "blk_next_bio" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x51e0bbe1, "filp_open" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe6d35498, "bdev_file_open_by_path" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x9c5bad96, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xa2323c6d, "config_group_init" },
	{ 0x3561b588, "config_group_find_item" },
	{ 0x79f7a444, "bio_add_zone_append_page" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xfe13a601, "trace_seq_printf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x81a7f541, "percpu_ref_init" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xf727c35a, "pci_dev_put" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0xd7c9f34b, "__kmalloc_node_noprof" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0x697ed5f0, "memcpy_and_pad" },
	{ 0x3131271a, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x1ed4d2eb, "percpu_ref_kill_and_confirm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xea5264a, "configfs_unregister_subsystem" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0xb49601a1, "sg_zero_buffer" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5566284a, "trace_seq_putc" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x122c3a7e, "_printk" },
	{ 0xb65d3aa5, "vfs_fallocate" },
	{ 0x81c568c7, "blkdev_zone_mgmt" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xca844bc7, "put_device" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xa916b694, "strnlen" },
	{ 0x5e934fc7, "sgl_alloc" },
	{ 0x5b05cc9b, "blk_finish_plug" },
	{ 0xbf9308e3, "submit_bio" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0x24d0565a, "key_put" },
	{ 0x37bf7be3, "percpu_ref_exit" },
	{ 0xeff5e7af, "bio_put" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x736b97bd, "bio_endio" },
	{ 0x8988704a, "sg_miter_next" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x69e683de, "uuid_gen" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x37712435, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "configfs");

