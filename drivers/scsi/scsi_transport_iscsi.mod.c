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

KSYMTAB_DATA(__tracepoint_iscsi_dbg_conn, "_gpl", "");
KSYMTAB_FUNC(__traceiter_iscsi_dbg_conn, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_iscsi_dbg_conn, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_iscsi_dbg_conn, "_gpl", "");
KSYMTAB_DATA(__tracepoint_iscsi_dbg_eh, "_gpl", "");
KSYMTAB_FUNC(__traceiter_iscsi_dbg_eh, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_iscsi_dbg_eh, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_iscsi_dbg_eh, "_gpl", "");
KSYMTAB_DATA(__tracepoint_iscsi_dbg_session, "_gpl", "");
KSYMTAB_FUNC(__traceiter_iscsi_dbg_session, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_iscsi_dbg_session, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_iscsi_dbg_session, "_gpl", "");
KSYMTAB_DATA(__tracepoint_iscsi_dbg_tcp, "_gpl", "");
KSYMTAB_FUNC(__traceiter_iscsi_dbg_tcp, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_iscsi_dbg_tcp, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_iscsi_dbg_tcp, "_gpl", "");
KSYMTAB_DATA(__tracepoint_iscsi_dbg_sw_tcp, "_gpl", "");
KSYMTAB_FUNC(__traceiter_iscsi_dbg_sw_tcp, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_iscsi_dbg_sw_tcp, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_iscsi_dbg_sw_tcp, "_gpl", "");
KSYMTAB_FUNC(iscsi_create_endpoint, "_gpl", "");
KSYMTAB_FUNC(iscsi_destroy_endpoint, "_gpl", "");
KSYMTAB_FUNC(iscsi_put_endpoint, "_gpl", "");
KSYMTAB_FUNC(iscsi_lookup_endpoint, "_gpl", "");
KSYMTAB_FUNC(iscsi_get_ipaddress_state_name, "_gpl", "");
KSYMTAB_FUNC(iscsi_get_router_state_name, "_gpl", "");
KSYMTAB_FUNC(iscsi_create_iface, "_gpl", "");
KSYMTAB_FUNC(iscsi_destroy_iface, "_gpl", "");
KSYMTAB_FUNC(iscsi_flashnode_bus_match, "_gpl", "");
KSYMTAB_FUNC(iscsi_create_flashnode_sess, "_gpl", "");
KSYMTAB_FUNC(iscsi_create_flashnode_conn, "_gpl", "");
KSYMTAB_FUNC(iscsi_find_flashnode_sess, "_gpl", "");
KSYMTAB_FUNC(iscsi_find_flashnode_conn, "_gpl", "");
KSYMTAB_FUNC(iscsi_destroy_flashnode_sess, "_gpl", "");
KSYMTAB_FUNC(iscsi_destroy_all_flashnode, "_gpl", "");
KSYMTAB_FUNC(iscsi_session_chkready, "_gpl", "");
KSYMTAB_FUNC(iscsi_is_session_online, "_gpl", "");
KSYMTAB_FUNC(iscsi_is_session_dev, "_gpl", "");
KSYMTAB_FUNC(iscsi_host_for_each_session, "_gpl", "");
KSYMTAB_FUNC(iscsi_block_scsi_eh, "_gpl", "");
KSYMTAB_FUNC(iscsi_unblock_session, "_gpl", "");
KSYMTAB_FUNC(iscsi_block_session, "_gpl", "");
KSYMTAB_FUNC(iscsi_alloc_session, "_gpl", "");
KSYMTAB_FUNC(iscsi_add_session, "_gpl", "");
KSYMTAB_FUNC(iscsi_create_session, "_gpl", "");
KSYMTAB_FUNC(iscsi_remove_session, "_gpl", "");
KSYMTAB_FUNC(iscsi_force_destroy_session, "_gpl", "");
KSYMTAB_FUNC(iscsi_free_session, "_gpl", "");
KSYMTAB_FUNC(iscsi_alloc_conn, "_gpl", "");
KSYMTAB_FUNC(iscsi_add_conn, "_gpl", "");
KSYMTAB_FUNC(iscsi_remove_conn, "_gpl", "");
KSYMTAB_FUNC(iscsi_put_conn, "_gpl", "");
KSYMTAB_FUNC(iscsi_get_conn, "_gpl", "");
KSYMTAB_FUNC(iscsi_recv_pdu, "_gpl", "");
KSYMTAB_FUNC(iscsi_offload_mesg, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_error_event, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_login_event, "_gpl", "");
KSYMTAB_FUNC(iscsi_post_host_event, "_gpl", "");
KSYMTAB_FUNC(iscsi_ping_comp_event, "_gpl", "");
KSYMTAB_FUNC(iscsi_session_event, "_gpl", "");
KSYMTAB_FUNC(iscsi_get_discovery_parent_name, "_gpl", "");
KSYMTAB_FUNC(iscsi_get_port_speed_name, "_gpl", "");
KSYMTAB_FUNC(iscsi_get_port_state_name, "_gpl", "");
KSYMTAB_FUNC(iscsi_register_transport, "_gpl", "");
KSYMTAB_FUNC(iscsi_unregister_transport, "_gpl", "");
KSYMTAB_FUNC(iscsi_dbg_trace, "_gpl", "");

SYMBOL_CRC(__tracepoint_iscsi_dbg_conn, 0x6c5278e7, "_gpl");
SYMBOL_CRC(__traceiter_iscsi_dbg_conn, 0x260fc2e3, "_gpl");
SYMBOL_CRC(__SCK__tp_func_iscsi_dbg_conn, 0x9fed1738, "_gpl");
SYMBOL_CRC(__SCT__tp_func_iscsi_dbg_conn, 0x15dc8bab, "_gpl");
SYMBOL_CRC(__tracepoint_iscsi_dbg_eh, 0x8c16b915, "_gpl");
SYMBOL_CRC(__traceiter_iscsi_dbg_eh, 0xdf9de0cf, "_gpl");
SYMBOL_CRC(__SCK__tp_func_iscsi_dbg_eh, 0x2434b450, "_gpl");
SYMBOL_CRC(__SCT__tp_func_iscsi_dbg_eh, 0xf7e749fb, "_gpl");
SYMBOL_CRC(__tracepoint_iscsi_dbg_session, 0xab1b0d25, "_gpl");
SYMBOL_CRC(__traceiter_iscsi_dbg_session, 0xe3df241f, "_gpl");
SYMBOL_CRC(__SCK__tp_func_iscsi_dbg_session, 0x9475a6ae, "_gpl");
SYMBOL_CRC(__SCT__tp_func_iscsi_dbg_session, 0x52575134, "_gpl");
SYMBOL_CRC(__tracepoint_iscsi_dbg_tcp, 0xda76bf58, "_gpl");
SYMBOL_CRC(__traceiter_iscsi_dbg_tcp, 0xd930c84c, "_gpl");
SYMBOL_CRC(__SCK__tp_func_iscsi_dbg_tcp, 0xdc68284a, "_gpl");
SYMBOL_CRC(__SCT__tp_func_iscsi_dbg_tcp, 0xa8c4b5e1, "_gpl");
SYMBOL_CRC(__tracepoint_iscsi_dbg_sw_tcp, 0x430bb2da, "_gpl");
SYMBOL_CRC(__traceiter_iscsi_dbg_sw_tcp, 0xfd51a191, "_gpl");
SYMBOL_CRC(__SCK__tp_func_iscsi_dbg_sw_tcp, 0x98a6e47c, "_gpl");
SYMBOL_CRC(__SCT__tp_func_iscsi_dbg_sw_tcp, 0xdf515c49, "_gpl");
SYMBOL_CRC(iscsi_create_endpoint, 0xe0d94b1a, "_gpl");
SYMBOL_CRC(iscsi_destroy_endpoint, 0x98c5ff4f, "_gpl");
SYMBOL_CRC(iscsi_put_endpoint, 0xf1e54d71, "_gpl");
SYMBOL_CRC(iscsi_lookup_endpoint, 0x60c1ba54, "_gpl");
SYMBOL_CRC(iscsi_get_ipaddress_state_name, 0xbc071179, "_gpl");
SYMBOL_CRC(iscsi_get_router_state_name, 0x84a005f1, "_gpl");
SYMBOL_CRC(iscsi_create_iface, 0x8c748ab0, "_gpl");
SYMBOL_CRC(iscsi_destroy_iface, 0x1fc20886, "_gpl");
SYMBOL_CRC(iscsi_flashnode_bus_match, 0xcee9c33b, "_gpl");
SYMBOL_CRC(iscsi_create_flashnode_sess, 0x3df95d2d, "_gpl");
SYMBOL_CRC(iscsi_create_flashnode_conn, 0x7d586246, "_gpl");
SYMBOL_CRC(iscsi_find_flashnode_sess, 0x36819884, "_gpl");
SYMBOL_CRC(iscsi_find_flashnode_conn, 0x8ea27a1e, "_gpl");
SYMBOL_CRC(iscsi_destroy_flashnode_sess, 0xa7f32551, "_gpl");
SYMBOL_CRC(iscsi_destroy_all_flashnode, 0xcc9fb3ca, "_gpl");
SYMBOL_CRC(iscsi_session_chkready, 0x508539a8, "_gpl");
SYMBOL_CRC(iscsi_is_session_online, 0x6fbc9606, "_gpl");
SYMBOL_CRC(iscsi_is_session_dev, 0xe72a0b50, "_gpl");
SYMBOL_CRC(iscsi_host_for_each_session, 0x75976a90, "_gpl");
SYMBOL_CRC(iscsi_block_scsi_eh, 0x098cc504, "_gpl");
SYMBOL_CRC(iscsi_unblock_session, 0x3a88a717, "_gpl");
SYMBOL_CRC(iscsi_block_session, 0xcc7213af, "_gpl");
SYMBOL_CRC(iscsi_alloc_session, 0x74f07ee1, "_gpl");
SYMBOL_CRC(iscsi_add_session, 0xfe2ef0d2, "_gpl");
SYMBOL_CRC(iscsi_create_session, 0x9fe136d5, "_gpl");
SYMBOL_CRC(iscsi_remove_session, 0x88851dc3, "_gpl");
SYMBOL_CRC(iscsi_force_destroy_session, 0xa2cdd540, "_gpl");
SYMBOL_CRC(iscsi_free_session, 0xfd9ecec5, "_gpl");
SYMBOL_CRC(iscsi_alloc_conn, 0x779fe55d, "_gpl");
SYMBOL_CRC(iscsi_add_conn, 0xa0581f37, "_gpl");
SYMBOL_CRC(iscsi_remove_conn, 0x2bb26a92, "_gpl");
SYMBOL_CRC(iscsi_put_conn, 0x22570782, "_gpl");
SYMBOL_CRC(iscsi_get_conn, 0xa024936a, "_gpl");
SYMBOL_CRC(iscsi_recv_pdu, 0xe46545b3, "_gpl");
SYMBOL_CRC(iscsi_offload_mesg, 0x76c71e6c, "_gpl");
SYMBOL_CRC(iscsi_conn_error_event, 0xa224f5ba, "_gpl");
SYMBOL_CRC(iscsi_conn_login_event, 0x330f9975, "_gpl");
SYMBOL_CRC(iscsi_post_host_event, 0x6a07831a, "_gpl");
SYMBOL_CRC(iscsi_ping_comp_event, 0xccaa62f3, "_gpl");
SYMBOL_CRC(iscsi_session_event, 0x42c104c7, "_gpl");
SYMBOL_CRC(iscsi_get_discovery_parent_name, 0x699fe53e, "_gpl");
SYMBOL_CRC(iscsi_get_port_speed_name, 0x1e6b91ca, "_gpl");
SYMBOL_CRC(iscsi_get_port_state_name, 0x09f4017e, "_gpl");
SYMBOL_CRC(iscsi_register_transport, 0xb9977583, "_gpl");
SYMBOL_CRC(iscsi_unregister_transport, 0x90223a41, "_gpl");
SYMBOL_CRC(iscsi_dbg_trace, 0x768271bf, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0x56470118, "__warn_printk" },
	{ 0x754d539c, "strlen" },
	{ 0x148653, "vsnprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xca844bc7, "put_device" },
	{ 0xdedf4785, "device_unregister" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x980d5636, "sysfs_remove_group" },
	{ 0x20978fb9, "idr_find" },
	{ 0x3131271a, "get_device" },
	{ 0x2037cee, "device_find_child" },
	{ 0x80b29ea5, "device_for_each_child" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf7370f56, "system_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6cbbc89, "capable" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xbd609baf, "scsi_target_unblock" },
	{ 0xe3a61ac6, "_dev_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x203b9e03, "netlink_kernel_release" },
	{ 0xb5228f1a, "bus_unregister" },
	{ 0x49367283, "transport_class_unregister" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x4a958e37, "class_register" },
	{ 0x64925e0c, "transport_class_register" },
	{ 0xa83a27a3, "bus_register" },
	{ 0xe5590ebd, "init_net" },
	{ 0xe68a26a4, "__netlink_kernel_create" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x79882c4b, "scsi_host_get" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6caa586, "scsi_init_limits" },
	{ 0x3a731c00, "bsg_setup_queue" },
	{ 0x934ea33f, "device_add" },
	{ 0x398c28ae, "transport_setup_device" },
	{ 0xaff1c4a0, "transport_add_device" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x538d6f90, "transport_destroy_device" },
	{ 0xc04e9955, "device_del" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0xbc431e3c, "netlink_broadcast_filtered" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x11d5d485, "transport_remove_device" },
	{ 0x868e51aa, "attribute_container_unregister" },
	{ 0x6a6d16d1, "scsi_is_host_device" },
	{ 0xf9f60b42, "bsg_remove_queue" },
	{ 0x72705ca2, "scsi_host_put" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x765cf494, "bsg_job_done" },
	{ 0xd4a53372, "scsi_block_targets" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd6b64063, "scsi_scan_target" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x47120c82, "scsi_remove_target" },
	{ 0xffb7c514, "ida_free" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x3d4155c2, "device_register" },
	{ 0xa1b7a4fb, "sysfs_create_group" },
	{ 0x5b6107f5, "attribute_container_register" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xac9fb508, "netlink_capable" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x6ee6c27a, "scsi_host_lookup" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xe8255b35, "netlink_unicast" },
	{ 0x87400f82, "skb_pull" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xfb578fc5, "memset" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_mod");


MODULE_INFO(srcversion, "EB4D353920E5B819C64F955");
