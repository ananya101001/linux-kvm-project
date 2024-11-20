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
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0xaac5defa, "tcf_exts_destroy" },
	{ 0x3ac41fbd, "tcf_em_tree_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x92104429, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xc909bb60, "tcf_em_tree_validate" },
	{ 0xf809c66c, "tcf_exts_init_ex" },
	{ 0x453a58fc, "tcf_exts_validate" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x7919d80, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd83d44fd, "tcf_block_netif_keep_dst" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x5a99a0d7, "flow_get_u32_dst" },
	{ 0x38dd5b75, "from_kgid" },
	{ 0xb87cb4c0, "tcf_action_exec" },
	{ 0x6514c1e6, "flow_get_u32_src" },
	{ 0x911db6ee, "__tcf_em_tree_match" },
	{ 0x1678131f, "from_kuid" },
	{ 0xeff39aad, "flow_keys_dissector" },
	{ 0xf35293b1, "__skb_flow_dissect" },
	{ 0xe5497da, "__skb_get_hash_net" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xdeb4106d, "register_tcf_proto_ops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x807a82c8, "unregister_tcf_proto_ops" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xfc5d8856, "tcf_exts_dump" },
	{ 0x7be4665, "tcf_em_tree_dump" },
	{ 0x52a019e9, "tcf_exts_dump_stats" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

