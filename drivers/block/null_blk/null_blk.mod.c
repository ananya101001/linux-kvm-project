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
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x9b824744, "config_item_put" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb2fa093e, "blk_mq_map_queues" },
	{ 0x5ce7b7e6, "blk_op_str" },
	{ 0x3079d629, "blk_mq_start_request" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0xd2237016, "radix_tree_delete_item" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0x249651a5, "badblocks_check" },
	{ 0xf07464e4, "hrtimer_forward" },
	{ 0x3c96fa2f, "hrtimer_active" },
	{ 0xd6c4bdb7, "badblocks_clear" },
	{ 0x44cf8cf0, "blk_zone_cond_str" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xeacb1238, "param_get_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xa2323c6d, "config_group_init" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xde8c1673, "param_ops_ulong" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x77bc13a0, "strim" },
	{ 0xfe13a601, "trace_seq_printf" },
	{ 0x69e9c1d7, "device_add_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0x22475f44, "badblocks_set" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x82c87ad5, "nr_online_nodes" },
	{ 0x32ce3777, "radix_tree_preload" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xd16efa42, "badblocks_exit" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0xeec70055, "blk_mq_end_request" },
	{ 0x6999540f, "__blk_mq_alloc_disk" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xea5264a, "configfs_unregister_subsystem" },
	{ 0xd095e5c, "blk_mq_alloc_tag_set" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0xff23db84, "blk_mq_end_request_batch" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5566284a, "trace_seq_putc" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x80131ca2, "put_disk" },
	{ 0xb97ee37b, "badblocks_init" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbb8685b9, "badblocks_show" },
	{ 0xa916b694, "strnlen" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x6b27729b, "radix_tree_gang_lookup" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x2e6b3c6a, "blk_mq_start_stopped_hw_queues" },
	{ 0xda7a3e8d, "blk_revalidate_disk_zones" },
	{ 0x527b8d9d, "configfs_register_subsystem" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xd7be87d8, "set_capacity" },
	{ 0x30fd05df, "config_group_init_type_name" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xb59cbdf6, "blk_mq_stop_hw_queues" },
	{ 0xffb7c514, "ida_free" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x4d31cbe2, "blk_mq_free_tag_set" },
	{ 0x59c98678, "del_gendisk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xfb578fc5, "memset" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0xd9e6ec72, "__kmalloc_cache_node_noprof" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd8bb697, "bpf_trace_run3" },
	{ 0xb0e0612f, "blk_mq_update_nr_hw_queues" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x16abb535, "blk_mq_complete_request" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "configfs");

