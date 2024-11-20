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

KSYMTAB_FUNC(inet_diag_msg_common_fill, "_gpl", "");
KSYMTAB_FUNC(inet_diag_msg_attrs_fill, "_gpl", "");
KSYMTAB_FUNC(inet_sk_diag_fill, "_gpl", "");
KSYMTAB_FUNC(inet_diag_find_one_icsk, "_gpl", "");
KSYMTAB_FUNC(inet_diag_dump_one_icsk, "_gpl", "");
KSYMTAB_FUNC(inet_diag_bc_sk, "_gpl", "");
KSYMTAB_FUNC(inet_diag_dump_icsk, "_gpl", "");
KSYMTAB_FUNC(inet_diag_register, "_gpl", "");
KSYMTAB_FUNC(inet_diag_unregister, "_gpl", "");

SYMBOL_CRC(inet_diag_msg_common_fill, 0x9ecff906, "_gpl");
SYMBOL_CRC(inet_diag_msg_attrs_fill, 0xf1647506, "_gpl");
SYMBOL_CRC(inet_sk_diag_fill, 0x7391fffc, "_gpl");
SYMBOL_CRC(inet_diag_find_one_icsk, 0xa8e522f8, "_gpl");
SYMBOL_CRC(inet_diag_dump_one_icsk, 0xb74b2ed3, "_gpl");
SYMBOL_CRC(inet_diag_bc_sk, 0x57ad3f9f, "_gpl");
SYMBOL_CRC(inet_diag_dump_icsk, 0xe2869f36, "_gpl");
SYMBOL_CRC(inet_diag_register, 0x5c0fa8b1, "_gpl");
SYMBOL_CRC(inet_diag_unregister, 0x81a3e0b3, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x753e172b, "__netlink_dump_start" },
	{ 0xb1400caf, "sock_diag_unregister" },
	{ 0x7f21169e, "sock_diag_unregister_inet_compat" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0x42bf3d6e, "sock_i_uid" },
	{ 0xc0b8681e, "from_kuid_munged" },
	{ 0xc732619, "sock_i_ino" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x92697d62, "sock_diag_register" },
	{ 0xb4e2744c, "sock_diag_register_inet_compat" },
	{ 0xf6cb9ccc, "netlink_net_capable" },
	{ 0x5d8476d3, "bpf_sk_storage_diag_alloc" },
	{ 0xc4baab08, "inet6_lookup" },
	{ 0xd0aaaac5, "sock_diag_check_cookie" },
	{ 0x187ae725, "__inet_lookup_established" },
	{ 0xe81c35d8, "sock_gen_put" },
	{ 0x3724415c, "__inet_lookup_listener" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x18d8d228, "bpf_sk_storage_diag_put" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x71a80e00, "sock_diag_put_meminfo" },
	{ 0xa916b694, "strnlen" },
	{ 0xba5ca25f, "nla_reserve_64bit" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xe8255b35, "netlink_unicast" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x98a94a64, "sk_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb15aa180, "sock_diag_save_cookie" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8e4eb451, "bpf_sk_storage_diag_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf665f74f, "sock_load_diag_module" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

