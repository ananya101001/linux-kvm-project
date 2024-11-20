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

KSYMTAB_FUNC(rdma_event_msg, "", "");
KSYMTAB_FUNC(rdma_reject_msg, "", "");
KSYMTAB_FUNC(rdma_consumer_reject_data, "", "");
KSYMTAB_FUNC(rdma_iw_cm_id, "", "");
KSYMTAB_FUNC(rdma_res_to_id, "", "");
KSYMTAB_FUNC(__rdma_create_kernel_id, "", "");
KSYMTAB_FUNC(rdma_create_user_id, "", "");
KSYMTAB_FUNC(rdma_create_qp, "", "");
KSYMTAB_FUNC(rdma_destroy_qp, "", "");
KSYMTAB_FUNC(rdma_init_qp_attr, "", "");
KSYMTAB_FUNC(rdma_destroy_id, "", "");
KSYMTAB_FUNC(rdma_get_service_id, "", "");
KSYMTAB_FUNC(rdma_read_gids, "", "");
KSYMTAB_FUNC(rdma_set_service_type, "", "");
KSYMTAB_FUNC(rdma_set_ack_timeout, "", "");
KSYMTAB_FUNC(rdma_set_min_rnr_timer, "", "");
KSYMTAB_FUNC(rdma_set_ib_path, "", "");
KSYMTAB_FUNC(rdma_resolve_route, "", "");
KSYMTAB_FUNC(rdma_set_reuseaddr, "", "");
KSYMTAB_FUNC(rdma_set_afonly, "", "");
KSYMTAB_FUNC(rdma_listen, "", "");
KSYMTAB_FUNC(rdma_resolve_addr, "", "");
KSYMTAB_FUNC(rdma_bind_addr, "", "");
KSYMTAB_FUNC(rdma_connect_locked, "", "");
KSYMTAB_FUNC(rdma_connect, "", "");
KSYMTAB_FUNC(rdma_connect_ece, "", "");
KSYMTAB_FUNC(rdma_accept, "", "");
KSYMTAB_FUNC(rdma_accept_ece, "", "");
KSYMTAB_FUNC(rdma_lock_handler, "", "");
KSYMTAB_FUNC(rdma_unlock_handler, "", "");
KSYMTAB_FUNC(rdma_notify, "", "");
KSYMTAB_FUNC(rdma_reject, "", "");
KSYMTAB_FUNC(rdma_disconnect, "", "");
KSYMTAB_FUNC(rdma_join_multicast, "", "");
KSYMTAB_FUNC(rdma_leave_multicast, "", "");

SYMBOL_CRC(rdma_event_msg, 0x907df803, "");
SYMBOL_CRC(rdma_reject_msg, 0x45b3572b, "");
SYMBOL_CRC(rdma_consumer_reject_data, 0xb21b19de, "");
SYMBOL_CRC(rdma_iw_cm_id, 0x3fca3c0d, "");
SYMBOL_CRC(rdma_res_to_id, 0x1f14a4e3, "");
SYMBOL_CRC(__rdma_create_kernel_id, 0x1b34c953, "");
SYMBOL_CRC(rdma_create_user_id, 0xd9dabaf4, "");
SYMBOL_CRC(rdma_create_qp, 0x6951262a, "");
SYMBOL_CRC(rdma_destroy_qp, 0xe88a86c4, "");
SYMBOL_CRC(rdma_init_qp_attr, 0x5dfba724, "");
SYMBOL_CRC(rdma_destroy_id, 0xd57f4f2c, "");
SYMBOL_CRC(rdma_get_service_id, 0x3c0b5317, "");
SYMBOL_CRC(rdma_read_gids, 0x5b17cced, "");
SYMBOL_CRC(rdma_set_service_type, 0x2b537ec0, "");
SYMBOL_CRC(rdma_set_ack_timeout, 0x234d08f6, "");
SYMBOL_CRC(rdma_set_min_rnr_timer, 0xb6fdd6bd, "");
SYMBOL_CRC(rdma_set_ib_path, 0xa4d72d1c, "");
SYMBOL_CRC(rdma_resolve_route, 0xecaf4bf9, "");
SYMBOL_CRC(rdma_set_reuseaddr, 0x65132bef, "");
SYMBOL_CRC(rdma_set_afonly, 0xbe5a5f18, "");
SYMBOL_CRC(rdma_listen, 0x7049a30c, "");
SYMBOL_CRC(rdma_resolve_addr, 0xf4ec44d1, "");
SYMBOL_CRC(rdma_bind_addr, 0x3c992e49, "");
SYMBOL_CRC(rdma_connect_locked, 0x4d394006, "");
SYMBOL_CRC(rdma_connect, 0xa0d4f568, "");
SYMBOL_CRC(rdma_connect_ece, 0x8f602501, "");
SYMBOL_CRC(rdma_accept, 0x0bee5767, "");
SYMBOL_CRC(rdma_accept_ece, 0x1807d968, "");
SYMBOL_CRC(rdma_lock_handler, 0x92d3792c, "");
SYMBOL_CRC(rdma_unlock_handler, 0x36180d8f, "");
SYMBOL_CRC(rdma_notify, 0xf0e7129a, "");
SYMBOL_CRC(rdma_reject, 0x102426dd, "");
SYMBOL_CRC(rdma_disconnect, 0x5d4049d3, "");
SYMBOL_CRC(rdma_join_multicast, 0x9cf0e9a8, "");
SYMBOL_CRC(rdma_leave_multicast, 0x9f8be9e2, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1fbd16da, "ip_tos2prio" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xad0f32a2, "iw_cm_connect" },
	{ 0x50723f3a, "rdma_restrack_add" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x93ea2eba, "rdma_addr_cancel" },
	{ 0xd4c41286, "ib_cm_notify" },
	{ 0xa916b694, "strnlen" },
	{ 0x702638a5, "ib_sa_get_mcmember_rec" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xc6cbbc89, "capable" },
	{ 0xda0d50ec, "ib_sa_cancel_query" },
	{ 0xe2045f4c, "ib_register_client" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc69af332, "ib_sa_path_rec_get" },
	{ 0x69804435, "ib_create_cm_id" },
	{ 0x352f7125, "__ip_mc_dec_group" },
	{ 0xae5494dc, "vlan_dev_real_dev" },
	{ 0x439ce33c, "ib_sa_unregister_client" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x7f8d7b0, "ib_init_ah_from_mcmember" },
	{ 0x334284d1, "rdma_destroy_ah_attr" },
	{ 0x98731b78, "ib_set_client_data" },
	{ 0xe5590ebd, "init_net" },
	{ 0xcccadca0, "ib_get_cached_pkey" },
	{ 0x527b8d9d, "configfs_register_subsystem" },
	{ 0x16b89ecf, "configfs_remove_default_groups" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xddecfb20, "rdma_put_gid_attr" },
	{ 0x30fd05df, "config_group_init_type_name" },
	{ 0x19e2cc40, "dev_get_by_index" },
	{ 0xa10ceb4b, "iw_destroy_cm_id" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4fe1eddf, "unregister_netevent_notifier" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xb09fd92b, "ib_send_cm_rep" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x90e807c7, "ib_cache_gid_parse_type_str" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdfd3ebcb, "iw_cm_disconnect" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xf3df871f, "iwcm_reject_msg" },
	{ 0x95a052b1, "bpf_trace_run1" },
	{ 0x56ee144a, "ib_destroy_qp_user" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0xfca1c75c, "ib_cm_init_qp_attr" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x505116b1, "ib_send_cm_drep" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x98494b9a, "rdma_restrack_set_name" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x1e3aab6e, "ib_get_net_dev_by_params" },
	{ 0x4e90435c, "ib_sa_free_multicast" },
	{ 0xf1f0f711, "ib_get_cached_port_state" },
	{ 0xda11c9b5, "ib_send_cm_mra" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x233ac80a, "rdma_restrack_del" },
	{ 0xb8334e12, "ib_modify_qp" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x745a981, "xa_erase" },
	{ 0xd8bb697, "bpf_trace_run3" },
	{ 0x92104429, "__put_net" },
	{ 0x1d5f8de8, "rdma_restrack_parent_name" },
	{ 0xd188e758, "iw_cm_accept" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9b824744, "config_item_put" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5cf757a4, "iw_cm_reject" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x69824a14, "ibcm_reject_msg" },
	{ 0x98623a86, "iw_cm_init_qp_attr" },
	{ 0xf04a650c, "dst_release" },
	{ 0xeb084308, "ib_send_cm_rtu" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6c2d6fa2, "ib_send_cm_dreq" },
	{ 0xe01a664f, "ib_send_cm_req" },
	{ 0x9b73dbb7, "ib_create_qp_kernel" },
	{ 0x3b8aa29d, "ib_sa_join_multicast" },
	{ 0x2187371f, "roce_gid_type_mask_support" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa7ba58fc, "rdma_get_gid_attr" },
	{ 0x68da7dbb, "rdma_restrack_new" },
	{ 0x4d70b6f8, "__fib_lookup" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xec3e76a1, "iw_cm_listen" },
	{ 0x38a0e47, "ib_send_cm_rej" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf2ed2e82, "rdma_copy_src_l2_addr" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x56d2e766, "rdma_resolve_ip" },
	{ 0x9fa3f3a2, "ib_send_cm_sidr_req" },
	{ 0x55bb02f3, "ib_cache_gid_type_str" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x731cef0b, "iw_create_cm_id" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xbdb50258, "ib_unregister_client" },
	{ 0x2deeab32, "netdev_walk_all_lower_dev_rcu" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x9cd0a32b, "ib_send_cm_sidr_rep" },
	{ 0xb6671de9, "bpf_trace_run4" },
	{ 0xa2323c6d, "config_group_init" },
	{ 0xc69d5f4f, "ib_init_ah_attr_from_path" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x4761f17c, "register_netevent_notifier" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xae50e427, "rdma_find_gid_by_port" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0x4694b5e8, "ib_cm_insert_listen" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xc86f5cb, "ib_sa_register_client" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x74b438bc, "rdma_query_gid" },
	{ 0x57342c38, "rt6_lookup" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x2e654a37, "rdma_translate_ip" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0xd8ad6985, "rdma_dev_access_netns" },
	{ 0x17c059ff, "fib_table_lookup" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x70807834, "rdma_addr_size" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xae63df2e, "ib_destroy_cm_id" },
	{ 0xf5dedb30, "rdma_node_get_transport" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xea5264a, "configfs_unregister_subsystem" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0xd4364617, "ip_mc_inc_group" },
	{ 0x90be50c2, "rdma_read_gid_attr_ndev_rcu" },
	{ 0x53fc0cb6, "ib_find_cached_pkey" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "iw_cm,ib_core,ib_cm,configfs");

