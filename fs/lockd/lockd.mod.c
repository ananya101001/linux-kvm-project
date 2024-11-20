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

KSYMTAB_FUNC(nlmclnt_init, "_gpl", "");
KSYMTAB_FUNC(nlmclnt_done, "_gpl", "");
KSYMTAB_FUNC(nlmclnt_rpc_clnt, "_gpl", "");
KSYMTAB_FUNC(nlmclnt_proc, "_gpl", "");
KSYMTAB_DATA(nlmsvc_ops, "_gpl", "");
KSYMTAB_FUNC(lockd_up, "_gpl", "");
KSYMTAB_FUNC(lockd_down, "_gpl", "");
KSYMTAB_FUNC(nlmsvc_unlock_all_by_sb, "_gpl", "");
KSYMTAB_FUNC(nlmsvc_unlock_all_by_ip, "_gpl", "");

SYMBOL_CRC(nlmclnt_init, 0x3b3003a5, "_gpl");
SYMBOL_CRC(nlmclnt_done, 0x1132462d, "_gpl");
SYMBOL_CRC(nlmclnt_rpc_clnt, 0x9e733e50, "_gpl");
SYMBOL_CRC(nlmclnt_proc, 0xf25d5633, "_gpl");
SYMBOL_CRC(nlmsvc_ops, 0x993a9832, "_gpl");
SYMBOL_CRC(lockd_up, 0x6dfae95f, "_gpl");
SYMBOL_CRC(lockd_down, 0x0e1c80a6, "_gpl");
SYMBOL_CRC(nlmsvc_unlock_all_by_sb, 0xb5baa7ee, "_gpl");
SYMBOL_CRC(nlmsvc_unlock_all_by_ip, 0x9cbde0a0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd37b660c, "vfs_cancel_lock" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x896c49d8, "proc_doulongvec_minmax" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x53445f68, "nlm_debug" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xc85970f2, "freezing_slow_path" },
	{ 0xb1d1fcd7, "rpc_create" },
	{ 0x9084e9e0, "svc_destroy" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0xa0a98052, "rpc_call_start" },
	{ 0xa98a1786, "svc_create" },
	{ 0x481e6455, "default_llseek" },
	{ 0xb2e8dc61, "rpc_call_sync" },
	{ 0x241cd204, "proc_mkdir" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x3bd45f5c, "register_sysctl_sz" },
	{ 0xbfcb40d9, "vfs_lock_file" },
	{ 0x5fb794e3, "rpc_delay" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6f6ce90e, "svc_generic_init_request" },
	{ 0x668b19a1, "down_read" },
	{ 0xbddd4e00, "svc_set_client" },
	{ 0x24d2973b, "xdr_reserve_space" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc03f042e, "kthread_create_on_node" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5e24bb01, "rpc_force_rebind" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x50093ad7, "rpc_restart_call" },
	{ 0xea6d20c6, "svc_xprt_destroy_all" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xab3fc466, "remove_proc_entry" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4062257a, "svc_find_xprt" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0x602fcf02, "svc_print_addr" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x5e7eeea9, "locks_delete_block" },
	{ 0x754d539c, "strlen" },
	{ 0x2e18942, "locks_start_grace" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0xeacb1238, "param_get_int" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x53b954a2, "up_read" },
	{ 0xd5dd23a8, "svc_xprt_create" },
	{ 0x57f6a5f0, "rpc_wait_for_completion_task" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x954291bf, "locks_copy_lock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3eca0c01, "proc_dointvec_minmax" },
	{ 0x5da1deb1, "rpc_put_task" },
	{ 0xdfb5ce53, "svc_generic_rpcbind_set" },
	{ 0xf5776dee, "svc_wake_up" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xb6671de9, "bpf_trace_run4" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd9ec1342, "rpc_shutdown_client" },
	{ 0xd498af92, "svc_bind" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe147ba19, "proc_create" },
	{ 0x97fb344e, "svc_recv" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb8bd5570, "xdr_inline_decode" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x1fe1e1ad, "locks_end_grace" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x95cfab64, "simple_transaction_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5341442, "vfs_test_lock" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x4a03ef6, "svc_exit_thread" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x549c0738, "rpc_ntop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xdb0a3af9, "param_get_ulong" },
	{ 0xa4eaed62, "rpc_run_task" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdaff2388, "__put_cred" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x6975c768, "locks_in_grace" },
	{ 0x16d30c75, "wake_up_process" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x96a6fad, "proc_dobool" },
	{ 0xb812bb66, "locks_lock_inode_wait" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x1693c4c3, "unregister_sysctl_table" },
	{ 0x6cd470, "locks_release_private" },
	{ 0xa916b694, "strnlen" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x82593c59, "locks_init_lock" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x84e72310, "simple_transaction_release" },
	{ 0x3413f027, "svc_xprt_put" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8f6e8e55, "svc_age_temp_xprts_now" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe5590ebd, "init_net" },
	{ 0xce807a25, "up_write" },
	{ 0xecb252b, "svc_set_num_threads" },
	{ 0x556301f7, "svc_rpcb_cleanup" },
	{ 0xa07a37f0, "memchr" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "sunrpc,grace");

