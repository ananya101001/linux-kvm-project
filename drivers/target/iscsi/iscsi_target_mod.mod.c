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

KSYMTAB_FUNC(iscsi_find_param_from_key, "", "");
KSYMTAB_FUNC(iscsit_get_datain_values, "", "");
KSYMTAB_FUNC(iscsit_increment_maxcmdsn, "", "");
KSYMTAB_FUNC(iscsit_cause_connection_reinstatement, "", "");
KSYMTAB_FUNC(iscsit_stop_dataout_timer, "", "");
KSYMTAB_FUNC(iscsi_change_param_sprintf, "", "");
KSYMTAB_FUNC(iscsi_target_check_login_request, "", "");
KSYMTAB_FUNC(iscsit_tmr_post_handler, "", "");
KSYMTAB_FUNC(iscsit_allocate_cmd, "", "");
KSYMTAB_FUNC(iscsit_sequence_cmd, "", "");
KSYMTAB_FUNC(iscsit_find_cmd_from_itt, "", "");
KSYMTAB_FUNC(iscsit_find_cmd_from_itt_or_dump, "", "");
KSYMTAB_FUNC(iscsit_add_cmd_to_immediate_queue, "", "");
KSYMTAB_FUNC(iscsit_release_cmd, "", "");
KSYMTAB_FUNC(iscsit_free_cmd, "", "");
KSYMTAB_FUNC(iscsit_queue_rsp, "", "");
KSYMTAB_FUNC(iscsit_aborted_task, "", "");
KSYMTAB_FUNC(iscsit_add_reject, "", "");
KSYMTAB_FUNC(iscsit_reject_cmd, "", "");
KSYMTAB_FUNC(iscsit_setup_scsi_cmd, "", "");
KSYMTAB_FUNC(iscsit_set_unsolicited_dataout, "", "");
KSYMTAB_FUNC(iscsit_process_scsi_cmd, "", "");
KSYMTAB_FUNC(__iscsit_check_dataout_hdr, "", "");
KSYMTAB_FUNC(iscsit_check_dataout_hdr, "", "");
KSYMTAB_FUNC(iscsit_check_dataout_payload, "", "");
KSYMTAB_FUNC(iscsit_setup_nop_out, "", "");
KSYMTAB_FUNC(iscsit_process_nop_out, "", "");
KSYMTAB_FUNC(iscsit_handle_task_mgt_cmd, "", "");
KSYMTAB_FUNC(iscsit_setup_text_cmd, "", "");
KSYMTAB_FUNC(iscsit_process_text_cmd, "", "");
KSYMTAB_FUNC(iscsit_handle_logout_cmd, "", "");
KSYMTAB_FUNC(iscsit_handle_snack, "", "");
KSYMTAB_FUNC(iscsit_build_datain_pdu, "", "");
KSYMTAB_FUNC(iscsit_build_logout_rsp, "", "");
KSYMTAB_FUNC(iscsit_build_nopin_rsp, "", "");
KSYMTAB_FUNC(iscsit_build_r2ts_for_cmd, "", "");
KSYMTAB_FUNC(iscsit_build_rsp_pdu, "", "");
KSYMTAB_FUNC(iscsit_build_task_mgt_rsp, "", "");
KSYMTAB_FUNC(iscsit_build_text_rsp, "", "");
KSYMTAB_FUNC(iscsit_build_reject, "", "");
KSYMTAB_FUNC(iscsit_thread_check_cpumask, "", "");
KSYMTAB_FUNC(iscsit_immediate_queue, "", "");
KSYMTAB_FUNC(iscsit_response_queue, "", "");
KSYMTAB_FUNC(iscsit_logout_post_handler, "", "");
KSYMTAB_FUNC(iscsit_register_transport, "", "");
KSYMTAB_FUNC(iscsit_unregister_transport, "", "");

SYMBOL_CRC(iscsi_find_param_from_key, 0xf34332f0, "");
SYMBOL_CRC(iscsit_get_datain_values, 0x98102ee2, "");
SYMBOL_CRC(iscsit_increment_maxcmdsn, 0xa642a631, "");
SYMBOL_CRC(iscsit_cause_connection_reinstatement, 0x51dcba74, "");
SYMBOL_CRC(iscsit_stop_dataout_timer, 0xc1d7ad82, "");
SYMBOL_CRC(iscsi_change_param_sprintf, 0xca3ba20a, "");
SYMBOL_CRC(iscsi_target_check_login_request, 0xa18392f1, "");
SYMBOL_CRC(iscsit_tmr_post_handler, 0x7ba7910c, "");
SYMBOL_CRC(iscsit_allocate_cmd, 0x5252a29e, "");
SYMBOL_CRC(iscsit_sequence_cmd, 0xdddc0c44, "");
SYMBOL_CRC(iscsit_find_cmd_from_itt, 0x9b3eec59, "");
SYMBOL_CRC(iscsit_find_cmd_from_itt_or_dump, 0xb1033b60, "");
SYMBOL_CRC(iscsit_add_cmd_to_immediate_queue, 0x444fb4a7, "");
SYMBOL_CRC(iscsit_release_cmd, 0xfe970a6c, "");
SYMBOL_CRC(iscsit_free_cmd, 0x4995d9b8, "");
SYMBOL_CRC(iscsit_queue_rsp, 0x73876b7f, "");
SYMBOL_CRC(iscsit_aborted_task, 0x405a0060, "");
SYMBOL_CRC(iscsit_add_reject, 0xd8526087, "");
SYMBOL_CRC(iscsit_reject_cmd, 0xcfb7943b, "");
SYMBOL_CRC(iscsit_setup_scsi_cmd, 0x9f96d38e, "");
SYMBOL_CRC(iscsit_set_unsolicited_dataout, 0x2660e19e, "");
SYMBOL_CRC(iscsit_process_scsi_cmd, 0xb3192b87, "");
SYMBOL_CRC(__iscsit_check_dataout_hdr, 0x59d2bee4, "");
SYMBOL_CRC(iscsit_check_dataout_hdr, 0xbe150ca4, "");
SYMBOL_CRC(iscsit_check_dataout_payload, 0x340213e4, "");
SYMBOL_CRC(iscsit_setup_nop_out, 0xecbd83d9, "");
SYMBOL_CRC(iscsit_process_nop_out, 0x2bd773b8, "");
SYMBOL_CRC(iscsit_handle_task_mgt_cmd, 0x150c7c2b, "");
SYMBOL_CRC(iscsit_setup_text_cmd, 0xc356e733, "");
SYMBOL_CRC(iscsit_process_text_cmd, 0x6d9dd4b3, "");
SYMBOL_CRC(iscsit_handle_logout_cmd, 0x121bfe60, "");
SYMBOL_CRC(iscsit_handle_snack, 0xd5ad3063, "");
SYMBOL_CRC(iscsit_build_datain_pdu, 0x5cbecdb1, "");
SYMBOL_CRC(iscsit_build_logout_rsp, 0x2985bf5b, "");
SYMBOL_CRC(iscsit_build_nopin_rsp, 0x9201c59c, "");
SYMBOL_CRC(iscsit_build_r2ts_for_cmd, 0x3ea7bb3e, "");
SYMBOL_CRC(iscsit_build_rsp_pdu, 0x68b12d82, "");
SYMBOL_CRC(iscsit_build_task_mgt_rsp, 0x1a88961a, "");
SYMBOL_CRC(iscsit_build_text_rsp, 0xc69ed85d, "");
SYMBOL_CRC(iscsit_build_reject, 0xbce584d9, "");
SYMBOL_CRC(iscsit_thread_check_cpumask, 0x5bfbdf1c, "");
SYMBOL_CRC(iscsit_immediate_queue, 0x7919e8c7, "");
SYMBOL_CRC(iscsit_response_queue, 0x9cc36c9b, "");
SYMBOL_CRC(iscsit_logout_post_handler, 0xc1097481, "");
SYMBOL_CRC(iscsit_register_transport, 0x32b18ef9, "");
SYMBOL_CRC(iscsit_unregister_transport, 0x56a1b77f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xfb72abaf, "crypto_ahash_finup" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xe97b444e, "iov_iter_bvec" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2e51c17d, "crypto_ahash_digest" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x3b945a2a, "crypto_ahash_final" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb09b00ae, "__target_init_cmd" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc03f042e, "kthread_create_on_node" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x6841b081, "transport_lookup_cmd_lun" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x73cac43f, "core_tpg_check_initiator_node_acl" },
	{ 0x88af39b2, "target_cmd_init_cdb" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9f30d669, "kernel_listen" },
	{ 0x66e7a0f1, "core_tmr_alloc_req" },
	{ 0x999e8297, "vfree" },
	{ 0x5182ab5f, "ip_sock_set_freebind" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xfbcff4f6, "sbitmap_finish_wait" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7d2903c, "crypto_shash_finup" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe5418327, "transport_wait_for_tasks" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5271c8c6, "target_get_sess_cmd" },
	{ 0x1caa1b56, "target_complete_cmd" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x7007a625, "sock_recvmsg" },
	{ 0xc6f557c4, "core_tpg_deregister" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xfc700bf4, "__transport_register_session" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe6568929, "target_show_dynamic_sessions" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8d0e1b55, "sock_release" },
	{ 0xaf4438db, "target_register_template" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x888a95a2, "tcp_sock_set_nodelay" },
	{ 0x4d3a823f, "send_sig" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x12429fcd, "transport_generic_free_cmd" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x7c1142df, "core_tpg_register" },
	{ 0x754d539c, "strlen" },
	{ 0x89e6c49b, "target_put_sess_cmd" },
	{ 0x742578a5, "wait_for_random_bytes" },
	{ 0x10f8b997, "crypto_ahash_update" },
	{ 0xc6c71a55, "transport_deregister_session" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xaa8f1b71, "inet_addr_is_any" },
	{ 0x349cba85, "strchr" },
	{ 0xe2d055b4, "crypto_alloc_shash" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xabf1b35b, "__sbitmap_queue_get" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x97ca392f, "target_tpg_has_node_acl" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa84653c0, "crypto_alloc_ahash" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0xc65e34a6, "target_alloc_cmd_counter" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xb4489234, "target_wait_for_cmds" },
	{ 0xcaaff00e, "transport_generic_new_cmd" },
	{ 0x5d24150b, "target_free_cmd_counter" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x918373b5, "target_execute_cmd" },
	{ 0xa85bbe00, "__SCT__tp_func_sk_data_ready" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xedc25195, "kernel_bind" },
	{ 0xcf2a6966, "up" },
	{ 0xef1cc86c, "sock_create" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x43babd19, "sg_init_one" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xa68216d0, "__tracepoint_sk_data_ready" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0xbe870214, "target_submit" },
	{ 0xa90b9bf5, "kernel_accept" },
	{ 0x148653, "vsnprintf" },
	{ 0x82f4059, "core_tpg_set_initiator_node_queue_depth" },
	{ 0x2b9b3376, "target_stop_cmd_counter" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9b8cb826, "transport_generic_handle_tmr" },
	{ 0xcc97c826, "transport_lookup_tmr_lun" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x16d30c75, "wake_up_process" },
	{ 0x6d11488, "__bitmap_equal" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc3e55310, "transport_alloc_session_tags" },
	{ 0x775b28bd, "transport_alloc_session" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9b2c6b1a, "sbitmap_prepare_to_wait" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa39a5fbf, "target_unregister_template" },
	{ 0x84a9a089, "transport_send_check_condition_and_sense" },
	{ 0xa916b694, "strnlen" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb307af80, "transport_free_session" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xbf89fd34, "flush_signals" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x808e15ac, "crypto_ahash_init" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe5590ebd, "init_net" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x83e6c952, "__SCK__tp_func_sk_data_ready" },
	{ 0x30fd05df, "config_group_init_type_name" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x954f099c, "idr_preload" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x6f33cda8, "set_cpus_allowed_ptr" },
	{ 0x87b6bbaa, "transport_deregister_session_configfs" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x112df548, "sbitmap_queue_clear" },
	{ 0x9b555eee, "iov_iter_kvec" },
	{ 0xffb7c514, "ida_free" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x7f3e0d89, "inet_pton_with_scope" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x58d3c8ec, "sock_sendmsg" },
	{ 0xe8718264, "crypto_shash_update" },
	{ 0xb116070d, "core_tpg_set_initiator_node_tag" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x585258e2, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x11089ac7, "_ctype" },
	{ 0xa77892fc, "target_cmd_parse_cdb" },
	{ 0x12ba8633, "sock_set_reuseaddr" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "target_core_mod,scsi_common,configfs");


MODULE_INFO(srcversion, "9CA55D8970A09E85C48891E");
