#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(iscsi_conn_queue_xmit, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_queue_recv, "_gpl", "");
KSYMTAB_FUNC(iscsi_update_cmdsn, "_gpl", "");
KSYMTAB_FUNC(iscsi_prep_data_out_pdu, "_gpl", "");
KSYMTAB_FUNC(iscsi_get_task, "_gpl", "");
KSYMTAB_FUNC(__iscsi_put_task, "_gpl", "");
KSYMTAB_FUNC(iscsi_put_task, "_gpl", "");
KSYMTAB_FUNC(iscsi_complete_scsi_task, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_send_pdu, "_gpl", "");
KSYMTAB_FUNC(iscsi_itt_to_task, "_gpl", "");
KSYMTAB_FUNC(__iscsi_complete_pdu, "_gpl", "");
KSYMTAB_FUNC(iscsi_complete_pdu, "_gpl", "");
KSYMTAB_FUNC(iscsi_verify_itt, "_gpl", "");
KSYMTAB_FUNC(iscsi_itt_to_ctask, "_gpl", "");
KSYMTAB_FUNC(iscsi_session_failure, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_failure, "_gpl", "");
KSYMTAB_FUNC(iscsi_requeue_task, "_gpl", "");
KSYMTAB_FUNC(iscsi_queuecommand, "_gpl", "");
KSYMTAB_FUNC(iscsi_target_alloc, "_gpl", "");
KSYMTAB_FUNC(iscsi_suspend_queue, "_gpl", "");
KSYMTAB_FUNC(iscsi_suspend_tx, "_gpl", "");
KSYMTAB_FUNC(iscsi_suspend_rx, "_gpl", "");
KSYMTAB_FUNC(iscsi_eh_cmd_timed_out, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_unbind, "_gpl", "");
KSYMTAB_FUNC(iscsi_eh_abort, "_gpl", "");
KSYMTAB_FUNC(iscsi_eh_device_reset, "_gpl", "");
KSYMTAB_FUNC(iscsi_session_recovery_timedout, "_gpl", "");
KSYMTAB_FUNC(iscsi_eh_session_reset, "_gpl", "");
KSYMTAB_FUNC(iscsi_eh_recover_target, "_gpl", "");
KSYMTAB_FUNC(iscsi_pool_init, "_gpl", "");
KSYMTAB_FUNC(iscsi_pool_free, "_gpl", "");
KSYMTAB_FUNC(iscsi_host_get_max_scsi_cmds, "_gpl", "");
KSYMTAB_FUNC(iscsi_host_add, "_gpl", "");
KSYMTAB_FUNC(iscsi_host_alloc, "_gpl", "");
KSYMTAB_FUNC(iscsi_host_remove, "_gpl", "");
KSYMTAB_FUNC(iscsi_host_free, "_gpl", "");
KSYMTAB_FUNC(iscsi_session_setup, "_gpl", "");
KSYMTAB_FUNC(iscsi_session_remove, "_gpl", "");
KSYMTAB_FUNC(iscsi_session_free, "_gpl", "");
KSYMTAB_FUNC(iscsi_session_teardown, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_setup, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_teardown, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_start, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_stop, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_bind, "_gpl", "");
KSYMTAB_FUNC(iscsi_switch_str_param, "_gpl", "");
KSYMTAB_FUNC(iscsi_set_param, "_gpl", "");
KSYMTAB_FUNC(iscsi_session_get_param, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_get_addr_param, "_gpl", "");
KSYMTAB_FUNC(iscsi_conn_get_param, "_gpl", "");
KSYMTAB_FUNC(iscsi_host_get_param, "_gpl", "");
KSYMTAB_FUNC(iscsi_host_set_param, "_gpl", "");

SYMBOL_CRC(iscsi_conn_queue_xmit, 0x2fbc12ee, "_gpl");
SYMBOL_CRC(iscsi_conn_queue_recv, 0x4b9aaa99, "_gpl");
SYMBOL_CRC(iscsi_update_cmdsn, 0x7a625706, "_gpl");
SYMBOL_CRC(iscsi_prep_data_out_pdu, 0x8245dc1d, "_gpl");
SYMBOL_CRC(iscsi_get_task, 0x7708e4c4, "_gpl");
SYMBOL_CRC(__iscsi_put_task, 0x2ce7d8f1, "_gpl");
SYMBOL_CRC(iscsi_put_task, 0x4942a86a, "_gpl");
SYMBOL_CRC(iscsi_complete_scsi_task, 0xd295bb67, "_gpl");
SYMBOL_CRC(iscsi_conn_send_pdu, 0x7d6fb0f0, "_gpl");
SYMBOL_CRC(iscsi_itt_to_task, 0xb80f423f, "_gpl");
SYMBOL_CRC(__iscsi_complete_pdu, 0x8d89c788, "_gpl");
SYMBOL_CRC(iscsi_complete_pdu, 0x86ed146d, "_gpl");
SYMBOL_CRC(iscsi_verify_itt, 0xc23448bb, "_gpl");
SYMBOL_CRC(iscsi_itt_to_ctask, 0x9aa0a7ba, "_gpl");
SYMBOL_CRC(iscsi_session_failure, 0xa8266cef, "_gpl");
SYMBOL_CRC(iscsi_conn_failure, 0x614bc5b7, "_gpl");
SYMBOL_CRC(iscsi_requeue_task, 0x3743e1d0, "_gpl");
SYMBOL_CRC(iscsi_queuecommand, 0x98d2c869, "_gpl");
SYMBOL_CRC(iscsi_target_alloc, 0xd04a7d65, "_gpl");
SYMBOL_CRC(iscsi_suspend_queue, 0x16642260, "_gpl");
SYMBOL_CRC(iscsi_suspend_tx, 0x640bd69d, "_gpl");
SYMBOL_CRC(iscsi_suspend_rx, 0xd8e29856, "_gpl");
SYMBOL_CRC(iscsi_eh_cmd_timed_out, 0xff770969, "_gpl");
SYMBOL_CRC(iscsi_conn_unbind, 0x0eaad5b7, "_gpl");
SYMBOL_CRC(iscsi_eh_abort, 0x9e053c4c, "_gpl");
SYMBOL_CRC(iscsi_eh_device_reset, 0x67c84193, "_gpl");
SYMBOL_CRC(iscsi_session_recovery_timedout, 0x1880282c, "_gpl");
SYMBOL_CRC(iscsi_eh_session_reset, 0xd6811d41, "_gpl");
SYMBOL_CRC(iscsi_eh_recover_target, 0x855c797a, "_gpl");
SYMBOL_CRC(iscsi_pool_init, 0x3bef2f73, "_gpl");
SYMBOL_CRC(iscsi_pool_free, 0x8d303b1b, "_gpl");
SYMBOL_CRC(iscsi_host_get_max_scsi_cmds, 0xe881012b, "_gpl");
SYMBOL_CRC(iscsi_host_add, 0x1e24e3bf, "_gpl");
SYMBOL_CRC(iscsi_host_alloc, 0xed30526d, "_gpl");
SYMBOL_CRC(iscsi_host_remove, 0xc34d4c10, "_gpl");
SYMBOL_CRC(iscsi_host_free, 0x61644869, "_gpl");
SYMBOL_CRC(iscsi_session_setup, 0x10ee5470, "_gpl");
SYMBOL_CRC(iscsi_session_remove, 0x1ca48b35, "_gpl");
SYMBOL_CRC(iscsi_session_free, 0x3b8d7c1d, "_gpl");
SYMBOL_CRC(iscsi_session_teardown, 0xe510824b, "_gpl");
SYMBOL_CRC(iscsi_conn_setup, 0x8340d788, "_gpl");
SYMBOL_CRC(iscsi_conn_teardown, 0xd3165d5b, "_gpl");
SYMBOL_CRC(iscsi_conn_start, 0x1250064e, "_gpl");
SYMBOL_CRC(iscsi_conn_stop, 0x71b7cfaf, "_gpl");
SYMBOL_CRC(iscsi_conn_bind, 0x3446356b, "_gpl");
SYMBOL_CRC(iscsi_switch_str_param, 0x12b2ad06, "_gpl");
SYMBOL_CRC(iscsi_set_param, 0x966d4918, "_gpl");
SYMBOL_CRC(iscsi_session_get_param, 0xf1cb7a16, "_gpl");
SYMBOL_CRC(iscsi_conn_get_addr_param, 0xeab9cbd5, "_gpl");
SYMBOL_CRC(iscsi_conn_get_param, 0x31455b09, "_gpl");
SYMBOL_CRC(iscsi_host_get_param, 0x62a41325, "_gpl");
SYMBOL_CRC(iscsi_host_set_param, 0x82deb706, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe3a61ac6, "_dev_printk" },
	{ 0x768271bf, "iscsi_dbg_trace" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xecbb1768, "scsi_done" },
	{ 0xe2964344, "__wake_up" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa224f5ba, "iscsi_conn_error_event" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x37a0cba, "kfree" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x122c3a7e, "_printk" },
	{ 0x483e46cf, "scsi_add_host_with_dma" },
	{ 0x7b1a0218, "scsi_host_alloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x72705ca2, "scsi_host_put" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x79882c4b, "scsi_host_get" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x88851dc3, "iscsi_remove_session" },
	{ 0x779fe55d, "iscsi_alloc_conn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0xa0581f37, "iscsi_add_conn" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x22570782, "iscsi_put_conn" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3a88a717, "iscsi_unblock_session" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xab1b0d25, "__tracepoint_iscsi_dbg_session" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x52575134, "__SCT__tp_func_iscsi_dbg_session" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x8c16b915, "__tracepoint_iscsi_dbg_eh" },
	{ 0xf7e749fb, "__SCT__tp_func_iscsi_dbg_eh" },
	{ 0x6c5278e7, "__tracepoint_iscsi_dbg_conn" },
	{ 0x15dc8bab, "__SCT__tp_func_iscsi_dbg_conn" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xe46545b3, "iscsi_recv_pdu" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x75976a90, "iscsi_host_for_each_session" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xbf89fd34, "flush_signals" },
	{ 0xa4c8accd, "scsi_remove_host" },
	{ 0xa2cdd540, "iscsi_force_destroy_session" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc2bda946, "scsi_build_sense" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0xfd9ecec5, "iscsi_free_session" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x69acdf38, "memcpy" },
	{ 0x508539a8, "iscsi_session_chkready" },
	{ 0xf7370f56, "system_state" },
	{ 0x74f07ee1, "iscsi_alloc_session" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0xfe2ef0d2, "iscsi_add_session" },
	{ 0x2bb26a92, "iscsi_remove_conn" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa024936a, "iscsi_get_conn" },
	{ 0xcc7213af, "iscsi_block_session" },
	{ 0x24d273d1, "add_timer" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x2434b450, "__SCK__tp_func_iscsi_dbg_eh" },
	{ 0x9475a6ae, "__SCK__tp_func_iscsi_dbg_session" },
	{ 0x9fed1738, "__SCK__tp_func_iscsi_dbg_conn" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_transport_iscsi,scsi_mod,scsi_common");

