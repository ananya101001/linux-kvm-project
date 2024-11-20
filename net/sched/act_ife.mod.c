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

KSYMTAB_FUNC(ife_encode_meta_u16, "_gpl", "");
KSYMTAB_FUNC(ife_get_meta_u32, "_gpl", "");
KSYMTAB_FUNC(ife_check_meta_u32, "_gpl", "");
KSYMTAB_FUNC(ife_check_meta_u16, "_gpl", "");
KSYMTAB_FUNC(ife_encode_meta_u32, "_gpl", "");
KSYMTAB_FUNC(ife_get_meta_u16, "_gpl", "");
KSYMTAB_FUNC(ife_alloc_meta_u32, "_gpl", "");
KSYMTAB_FUNC(ife_alloc_meta_u16, "_gpl", "");
KSYMTAB_FUNC(ife_release_meta_gen, "_gpl", "");
KSYMTAB_FUNC(ife_validate_meta_u32, "_gpl", "");
KSYMTAB_FUNC(ife_validate_meta_u16, "_gpl", "");
KSYMTAB_FUNC(unregister_ife_op, "_gpl", "");
KSYMTAB_FUNC(register_ife_op, "_gpl", "");

SYMBOL_CRC(ife_encode_meta_u16, 0x477f29cb, "_gpl");
SYMBOL_CRC(ife_get_meta_u32, 0x5a2733a3, "_gpl");
SYMBOL_CRC(ife_check_meta_u32, 0xbc3c6b6b, "_gpl");
SYMBOL_CRC(ife_check_meta_u16, 0x175514d1, "_gpl");
SYMBOL_CRC(ife_encode_meta_u32, 0xe17a884a, "_gpl");
SYMBOL_CRC(ife_get_meta_u16, 0x4091b45e, "_gpl");
SYMBOL_CRC(ife_alloc_meta_u32, 0xb419f5cf, "_gpl");
SYMBOL_CRC(ife_alloc_meta_u16, 0xe10c0c9b, "_gpl");
SYMBOL_CRC(ife_release_meta_gen, 0xe57230ea, "_gpl");
SYMBOL_CRC(ife_validate_meta_u32, 0xd7a9660c, "_gpl");
SYMBOL_CRC(ife_validate_meta_u16, 0xf40f1d62, "_gpl");
SYMBOL_CRC(unregister_ife_op, 0x85888c76, "_gpl");
SYMBOL_CRC(register_ife_op, 0xdf358996, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe7888e98, "ife_tlv_meta_encode" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x37a0cba, "kfree" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xc15c8cd9, "tcf_register_action" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe8a6ebf2, "tcf_idrinfo_destroy" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x1cdbff59, "tcf_unregister_action" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8162cfff, "ife_decode" },
	{ 0x67db2029, "ife_tlv_meta_decode" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6210e871, "ife_tlv_meta_next" },
	{ 0x1f415566, "eth_type_trans" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6775c90f, "skb_push" },
	{ 0x91b879e4, "ife_encode" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x87400f82, "skb_pull" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xe75b471f, "tcf_idr_check_alloc" },
	{ 0xa127a41e, "tcf_action_check_ctrlact" },
	{ 0x2c3cd1d0, "tcf_chain_put_by_act" },
	{ 0x571d3614, "tcf_idr_release" },
	{ 0x2e695dcd, "tcf_idr_create" },
	{ 0xcd3f56c3, "tcf_action_set_ctrlact" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xc03f2158, "tcf_idr_cleanup" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ife");

