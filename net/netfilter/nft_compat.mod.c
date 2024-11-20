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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0x754d539c, "strlen" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xd4be4ee6, "nfnetlink_unicast" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x95182f5d, "xt_request_find_target" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xf1ecff4c, "xt_request_find_match" },
	{ 0xa916b694, "strnlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf274816b, "nft_register_expr" },
	{ 0x53f84745, "nfnetlink_subsys_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x41746749, "nft_unregister_expr" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0565d17, "nft_chain_validate_hooks" },
	{ 0xa84b4980, "nfnetlink_subsys_unregister" },
	{ 0x4dc8c704, "nla_reserve" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x3251d762, "nf_tables_trans_destroy_flush_work" },
	{ 0x4f64197f, "xt_check_target" },
	{ 0x5fe85e0, "nft_request_module" },
	{ 0x130d877c, "xt_check_match" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink,x_tables,nf_tables");

