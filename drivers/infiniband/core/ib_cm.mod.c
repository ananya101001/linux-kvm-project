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

KSYMTAB_FUNC(ibcm_reject_msg, "", "");
KSYMTAB_FUNC(ib_create_cm_id, "", "");
KSYMTAB_FUNC(ib_destroy_cm_id, "", "");
KSYMTAB_FUNC(ib_cm_listen, "", "");
KSYMTAB_FUNC(ib_cm_insert_listen, "", "");
KSYMTAB_FUNC(ib_send_cm_req, "", "");
KSYMTAB_FUNC(ib_send_cm_rep, "", "");
KSYMTAB_FUNC(ib_send_cm_rtu, "", "");
KSYMTAB_FUNC(ib_send_cm_dreq, "", "");
KSYMTAB_FUNC(ib_send_cm_drep, "", "");
KSYMTAB_FUNC(ib_send_cm_rej, "", "");
KSYMTAB_FUNC(ib_send_cm_mra, "", "");
KSYMTAB_FUNC(ib_send_cm_sidr_req, "", "");
KSYMTAB_FUNC(ib_send_cm_sidr_rep, "", "");
KSYMTAB_FUNC(ib_cm_notify, "", "");
KSYMTAB_FUNC(ib_cm_init_qp_attr, "", "");

SYMBOL_CRC(ibcm_reject_msg, 0x69824a14, "");
SYMBOL_CRC(ib_create_cm_id, 0x69804435, "");
SYMBOL_CRC(ib_destroy_cm_id, 0xae63df2e, "");
SYMBOL_CRC(ib_cm_listen, 0xf70dcb55, "");
SYMBOL_CRC(ib_cm_insert_listen, 0x4694b5e8, "");
SYMBOL_CRC(ib_send_cm_req, 0xe01a664f, "");
SYMBOL_CRC(ib_send_cm_rep, 0xb09fd92b, "");
SYMBOL_CRC(ib_send_cm_rtu, 0xeb084308, "");
SYMBOL_CRC(ib_send_cm_dreq, 0x6c2d6fa2, "");
SYMBOL_CRC(ib_send_cm_drep, 0x505116b1, "");
SYMBOL_CRC(ib_send_cm_rej, 0x038a0e47, "");
SYMBOL_CRC(ib_send_cm_mra, 0xda11c9b5, "");
SYMBOL_CRC(ib_send_cm_sidr_req, 0x9fa3f3a2, "");
SYMBOL_CRC(ib_send_cm_sidr_rep, 0x9cd0a32b, "");
SYMBOL_CRC(ib_cm_notify, 0xd4c41286, "");
SYMBOL_CRC(ib_cm_init_qp_attr, 0xfca1c75c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0x1d1f0f6f, "rdma_create_ah" },
	{ 0xd2bc5c18, "ib_init_ah_attr_from_wc" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0x53fc0cb6, "ib_find_cached_pkey" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0xe2045f4c, "ib_register_client" },
	{ 0xf45ef56b, "ib_unregister_mad_agent" },
	{ 0x22b5f3da, "ib_post_send_mad" },
	{ 0xaef06f34, "ib_create_send_mad" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x334284d1, "rdma_destroy_ah_attr" },
	{ 0x98731b78, "ib_set_client_data" },
	{ 0xcccadca0, "ib_get_cached_pkey" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xddecfb20, "rdma_put_gid_attr" },
	{ 0xb04a43ad, "__xa_alloc_cyclic" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x95a052b1, "bpf_trace_run1" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x5571ca29, "rdma_destroy_ah_user" },
	{ 0xa8ac7686, "ib_free_send_mad" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0xee45dd29, "ib_port_unregister_client_groups" },
	{ 0x745a981, "xa_erase" },
	{ 0xd8bb697, "bpf_trace_run3" },
	{ 0xf1b4f9d, "rdma_move_ah_attr" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0xb5a382e0, "rdma_find_gid" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5b3e282f, "xa_store" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc13e35bd, "ib_free_recv_mad" },
	{ 0xc82640e5, "ib_register_mad_agent" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x5f87786d, "ib_modify_mad" },
	{ 0x1f44615b, "ib_create_ah_from_wc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xbdb50258, "ib_unregister_client" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc69d5f4f, "ib_init_ah_attr_from_path" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa6257a2f, "complete" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x37a0cba, "kfree" },
	{ 0x74b438bc, "rdma_query_gid" },
	{ 0x24a6778c, "ib_port_register_client_groups" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xa1c49bf0, "ib_modify_port" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ib_core");

