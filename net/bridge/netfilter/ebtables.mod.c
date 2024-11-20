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

KSYMTAB_FUNC(ebt_register_template, "", "");
KSYMTAB_FUNC(ebt_unregister_template, "", "");
KSYMTAB_FUNC(ebt_unregister_table_pre_exit, "", "");
KSYMTAB_FUNC(ebt_register_table, "", "");
KSYMTAB_FUNC(ebt_unregister_table, "", "");
KSYMTAB_FUNC(ebt_do_table, "", "");

SYMBOL_CRC(ebt_register_template, 0xfa8aed31, "");
SYMBOL_CRC(ebt_unregister_template, 0x86d88ae9, "");
SYMBOL_CRC(ebt_unregister_table_pre_exit, 0x7ad7cb41, "");
SYMBOL_CRC(ebt_register_table, 0xa768d33a, "");
SYMBOL_CRC(ebt_unregister_table, 0x3f7cbb67, "");
SYMBOL_CRC(ebt_do_table, 0x4236e892, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x739d89f2, "xt_find_match" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x130d877c, "xt_check_match" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x95182f5d, "xt_request_find_target" },
	{ 0x4f64197f, "xt_check_target" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x7d511f68, "nf_unregister_net_hooks" },
	{ 0x282082dd, "xt_register_target" },
	{ 0xb2239bc4, "nf_register_sockopt" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x86a14c80, "xt_unregister_target" },
	{ 0xcafd02ec, "nf_unregister_sockopt" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x7bce4603, "xt_data_to_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x999e8297, "vfree" },
	{ 0x618911fc, "numa_node" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x838eb641, "vmalloc_node_noprof" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x182d39a9, "ns_capable" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x5afc722e, "__audit_log_nfcfg" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x2c4f2e35, "__vmalloc_noprof" },
	{ 0xfb578fc5, "memset" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x25f2b2c8, "kmemdup_array" },
	{ 0x380ce666, "nf_register_net_hooks" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x69acdf38, "memcpy" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "x_tables");

