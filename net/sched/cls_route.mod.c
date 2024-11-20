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
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xaac5defa, "tcf_exts_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x92104429, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xf809c66c, "tcf_exts_init_ex" },
	{ 0x453a58fc, "tcf_exts_validate" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xd83d44fd, "tcf_block_netif_keep_dst" },
	{ 0x56470118, "__warn_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb87cb4c0, "tcf_action_exec" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xdeb4106d, "register_tcf_proto_ops" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x807a82c8, "unregister_tcf_proto_ops" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xfc5d8856, "tcf_exts_dump" },
	{ 0x52a019e9, "tcf_exts_dump_stats" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

