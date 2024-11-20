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

KSYMTAB_FUNC(arpt_alloc_initial_table, "_gpl", "");
KSYMTAB_FUNC(arpt_unregister_table_pre_exit, "", "");
KSYMTAB_FUNC(arpt_register_table, "", "");
KSYMTAB_FUNC(arpt_unregister_table, "", "");
KSYMTAB_FUNC(arpt_do_table, "", "");

SYMBOL_CRC(arpt_alloc_initial_table, 0xfa076ee4, "_gpl");
SYMBOL_CRC(arpt_unregister_table_pre_exit, 0x37261293, "");
SYMBOL_CRC(arpt_register_table, 0x9b447914, "");
SYMBOL_CRC(arpt_unregister_table, 0xe015c638, "");
SYMBOL_CRC(arpt_do_table, 0x0112ee78, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1cbeb276, "xt_unregister_table" },
	{ 0xe204e042, "xt_free_table_info" },
	{ 0x8087cab8, "xt_find_table" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x7d511f68, "nf_unregister_net_hooks" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0xc2d5d571, "xt_register_targets" },
	{ 0xb2239bc4, "nf_register_sockopt" },
	{ 0x9d47a039, "xt_unregister_targets" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0xa3c6fd94, "xt_proto_fini" },
	{ 0xd0303833, "xt_proto_init" },
	{ 0xcafd02ec, "nf_unregister_sockopt" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1e2109a2, "xt_request_find_table_lock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1c449cb2, "xt_table_unlock" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x182d39a9, "ns_capable" },
	{ 0xbae1b42f, "xt_find_table_lock" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x807d2b2c, "xt_recseq" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xc4bdb536, "xt_target_to_user" },
	{ 0x999e8297, "vfree" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd7f5fcd, "xt_alloc_entry_offsets" },
	{ 0xd87ae60d, "xt_check_entry_offsets" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3bf9d084, "xt_check_table_hooks" },
	{ 0x9c995c69, "xt_percpu_counter_alloc" },
	{ 0x95182f5d, "xt_request_find_target" },
	{ 0x4f64197f, "xt_check_target" },
	{ 0xfef779fa, "xt_find_jump_offset" },
	{ 0x977fd4bf, "xt_alloc_table_info" },
	{ 0x69acdf38, "memcpy" },
	{ 0x134fd34c, "xt_register_table" },
	{ 0x25f2b2c8, "kmemdup_array" },
	{ 0x380ce666, "nf_register_net_hooks" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xf6abeb06, "xt_copy_counters" },
	{ 0xcb3e91cc, "xt_counters_alloc" },
	{ 0xbfa041b0, "xt_replace_table" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xbfacb837, "xt_percpu_counter_free" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "x_tables");

