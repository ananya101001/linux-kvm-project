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

KSYMTAB_FUNC(xt_register_target, "", "");
KSYMTAB_FUNC(xt_unregister_target, "", "");
KSYMTAB_FUNC(xt_register_targets, "", "");
KSYMTAB_FUNC(xt_unregister_targets, "", "");
KSYMTAB_FUNC(xt_register_match, "", "");
KSYMTAB_FUNC(xt_unregister_match, "", "");
KSYMTAB_FUNC(xt_register_matches, "", "");
KSYMTAB_FUNC(xt_unregister_matches, "", "");
KSYMTAB_FUNC(xt_find_match, "", "");
KSYMTAB_FUNC(xt_request_find_match, "_gpl", "");
KSYMTAB_FUNC(xt_request_find_target, "_gpl", "");
KSYMTAB_FUNC(xt_data_to_user, "_gpl", "");
KSYMTAB_FUNC(xt_match_to_user, "_gpl", "");
KSYMTAB_FUNC(xt_target_to_user, "_gpl", "");
KSYMTAB_FUNC(xt_find_revision, "_gpl", "");
KSYMTAB_FUNC(xt_check_proc_name, "", "");
KSYMTAB_FUNC(xt_check_match, "_gpl", "");
KSYMTAB_FUNC(xt_check_table_hooks, "", "");
KSYMTAB_FUNC(xt_check_entry_offsets, "", "");
KSYMTAB_FUNC(xt_alloc_entry_offsets, "", "");
KSYMTAB_FUNC(xt_find_jump_offset, "", "");
KSYMTAB_FUNC(xt_check_target, "_gpl", "");
KSYMTAB_FUNC(xt_copy_counters, "_gpl", "");
KSYMTAB_FUNC(xt_alloc_table_info, "", "");
KSYMTAB_FUNC(xt_free_table_info, "", "");
KSYMTAB_FUNC(xt_find_table, "", "");
KSYMTAB_FUNC(xt_find_table_lock, "_gpl", "");
KSYMTAB_FUNC(xt_request_find_table_lock, "_gpl", "");
KSYMTAB_FUNC(xt_table_unlock, "_gpl", "");
KSYMTAB_DATA(xt_recseq, "_gpl", "");
KSYMTAB_DATA(xt_tee_enabled, "_gpl", "");
KSYMTAB_FUNC(xt_counters_alloc, "", "");
KSYMTAB_FUNC(xt_replace_table, "_gpl", "");
KSYMTAB_FUNC(xt_register_table, "_gpl", "");
KSYMTAB_FUNC(xt_unregister_table, "_gpl", "");
KSYMTAB_FUNC(xt_hook_ops_alloc, "_gpl", "");
KSYMTAB_FUNC(xt_register_template, "_gpl", "");
KSYMTAB_FUNC(xt_unregister_template, "_gpl", "");
KSYMTAB_FUNC(xt_proto_init, "_gpl", "");
KSYMTAB_FUNC(xt_proto_fini, "_gpl", "");
KSYMTAB_FUNC(xt_percpu_counter_alloc, "_gpl", "");
KSYMTAB_FUNC(xt_percpu_counter_free, "_gpl", "");

SYMBOL_CRC(xt_register_target, 0x282082dd, "");
SYMBOL_CRC(xt_unregister_target, 0x86a14c80, "");
SYMBOL_CRC(xt_register_targets, 0xc2d5d571, "");
SYMBOL_CRC(xt_unregister_targets, 0x9d47a039, "");
SYMBOL_CRC(xt_register_match, 0x41775631, "");
SYMBOL_CRC(xt_unregister_match, 0xe0118241, "");
SYMBOL_CRC(xt_register_matches, 0xb99fd232, "");
SYMBOL_CRC(xt_unregister_matches, 0x2e62920b, "");
SYMBOL_CRC(xt_find_match, 0x739d89f2, "");
SYMBOL_CRC(xt_request_find_match, 0xf1ecff4c, "_gpl");
SYMBOL_CRC(xt_request_find_target, 0x95182f5d, "_gpl");
SYMBOL_CRC(xt_data_to_user, 0x7bce4603, "_gpl");
SYMBOL_CRC(xt_match_to_user, 0x2b2a5f1f, "_gpl");
SYMBOL_CRC(xt_target_to_user, 0xc4bdb536, "_gpl");
SYMBOL_CRC(xt_find_revision, 0xddf68fc6, "_gpl");
SYMBOL_CRC(xt_check_proc_name, 0x48012e28, "");
SYMBOL_CRC(xt_check_match, 0x130d877c, "_gpl");
SYMBOL_CRC(xt_check_table_hooks, 0x3bf9d084, "");
SYMBOL_CRC(xt_check_entry_offsets, 0xd87ae60d, "");
SYMBOL_CRC(xt_alloc_entry_offsets, 0x0d7f5fcd, "");
SYMBOL_CRC(xt_find_jump_offset, 0xfef779fa, "");
SYMBOL_CRC(xt_check_target, 0x4f64197f, "_gpl");
SYMBOL_CRC(xt_copy_counters, 0xf6abeb06, "_gpl");
SYMBOL_CRC(xt_alloc_table_info, 0x977fd4bf, "");
SYMBOL_CRC(xt_free_table_info, 0xe204e042, "");
SYMBOL_CRC(xt_find_table, 0x8087cab8, "");
SYMBOL_CRC(xt_find_table_lock, 0xbae1b42f, "_gpl");
SYMBOL_CRC(xt_request_find_table_lock, 0x1e2109a2, "_gpl");
SYMBOL_CRC(xt_table_unlock, 0x1c449cb2, "_gpl");
SYMBOL_CRC(xt_recseq, 0x807d2b2c, "_gpl");
SYMBOL_CRC(xt_tee_enabled, 0xd3fcc511, "_gpl");
SYMBOL_CRC(xt_counters_alloc, 0xcb3e91cc, "");
SYMBOL_CRC(xt_replace_table, 0xbfa041b0, "_gpl");
SYMBOL_CRC(xt_register_table, 0x134fd34c, "_gpl");
SYMBOL_CRC(xt_unregister_table, 0x1cbeb276, "_gpl");
SYMBOL_CRC(xt_hook_ops_alloc, 0x533a92a7, "_gpl");
SYMBOL_CRC(xt_register_template, 0x8a983b3f, "_gpl");
SYMBOL_CRC(xt_unregister_template, 0x4eee7fec, "_gpl");
SYMBOL_CRC(xt_proto_init, 0xd0303833, "_gpl");
SYMBOL_CRC(xt_proto_fini, 0xa3c6fd94, "_gpl");
SYMBOL_CRC(xt_percpu_counter_alloc, 0x9c995c69, "_gpl");
SYMBOL_CRC(xt_percpu_counter_free, 0xbfacb837, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x754d539c, "strlen" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x349cba85, "strchr" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x69acdf38, "memcpy" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0xa3951d2b, "make_kgid" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x861b6aec, "proc_create_net_data" },
	{ 0x1e9a8fad, "proc_create_seq_private" },
	{ 0x43c2d3b, "proc_set_user" },
	{ 0xab3fc466, "remove_proc_entry" },
	{ 0x377214d3, "seq_printf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x618911fc, "numa_node" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x5afc722e, "__audit_log_nfcfg" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xabf53b48, "rep_stos_alternative" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

