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
	{ 0x83f51840, "__nla_parse" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x5a921311, "strncmp" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xf6f05b8, "nf_conntrack_helper_register" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0xa916b694, "strnlen" },
	{ 0x754d539c, "strlen" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xd4be4ee6, "nfnetlink_unicast" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x753e172b, "__netlink_dump_start" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc40f284c, "nf_ct_helper_hsize" },
	{ 0x693c3961, "nf_ct_helper_hash" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x53f84745, "nfnetlink_subsys_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa84b4980, "nfnetlink_subsys_unregister" },
	{ 0x979a7de0, "nf_conntrack_helper_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nfnetlink");

