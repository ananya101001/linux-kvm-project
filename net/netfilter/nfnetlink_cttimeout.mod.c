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
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x37a0cba, "kfree" },
	{ 0x64261cc1, "nf_ct_l4proto_find" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe893d918, "__module_get" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x15755874, "nf_ct_untimeout" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xd4be4ee6, "nfnetlink_unicast" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x56470118, "__warn_printk" },
	{ 0x753e172b, "__netlink_dump_start" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x53f84745, "nfnetlink_subsys_register" },
	{ 0x5f8319a, "nf_ct_timeout_hook" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0xa84b4980, "nfnetlink_subsys_unregister" },
	{ 0x49450d8f, "nf_ct_iterate_destroy" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0xa916b694, "strnlen" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nfnetlink");

