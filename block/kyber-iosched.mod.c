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
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xcd27f25a, "sbitmap_queue_resize" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0xc73d8254, "blk_stat_disable_accounting" },
	{ 0x9feed7ce, "timer_reduce" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x8754aa45, "elevator_alloc" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xd9e6ec72, "__kmalloc_cache_node_noprof" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x288f427c, "sbitmap_queue_init_node" },
	{ 0x56f003b3, "blk_stat_enable_accounting" },
	{ 0xf3879e32, "blk_queue_flag_clear" },
	{ 0x7ab30f45, "kobject_put" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x4daf259b, "__tracepoint_block_rq_insert" },
	{ 0x85bfc5f9, "__SCT__tp_func_block_rq_insert" },
	{ 0xd7c9f34b, "__kmalloc_node_noprof" },
	{ 0x463c3e3b, "sbitmap_init_node" },
	{ 0x4d6bcef5, "blk_mq_debugfs_rq_show" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0xf75478ff, "__SCK__tp_func_block_rq_insert" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x1b0be24d, "bpf_trace_run7" },
	{ 0xd8bb697, "bpf_trace_run3" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0xb441639d, "elv_register" },
	{ 0x377214d3, "seq_printf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x4da66bd4, "sbitmap_queue_show" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3be2f105, "sbitmap_any_bit_set" },
	{ 0x112df548, "sbitmap_queue_clear" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2570ff1d, "blk_bio_list_merge" },
	{ 0x9e5b1aff, "sbitmap_queue_min_shallow_depth" },
	{ 0xa75e2b45, "sbitmap_del_wait_queue" },
	{ 0x6b1bc124, "blk_mq_run_hw_queue" },
	{ 0xd5fc51bb, "elv_unregister" },
	{ 0xabf1b35b, "__sbitmap_queue_get" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xca177697, "sbitmap_add_wait_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

