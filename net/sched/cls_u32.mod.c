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
	{ 0xaac5defa, "tcf_exts_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x92104429, "__put_net" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf08db286, "tcf_exts_validate_ex" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x6e697614, "__dev_get_by_name" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xfc5d8856, "tcf_exts_dump" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x52a019e9, "tcf_exts_dump_stats" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x77cb69cc, "__dev_get_by_index" },
	{ 0xa916b694, "strnlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xf809c66c, "tcf_exts_init_ex" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x122c3a7e, "_printk" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0xdeb4106d, "register_tcf_proto_ops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x807a82c8, "unregister_tcf_proto_ops" },
	{ 0xb87cb4c0, "tcf_action_exec" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2c65f067, "tc_setup_cb_destroy" },
	{ 0x98fd7c7b, "tc_setup_cb_add" },
	{ 0xaf854864, "tc_setup_cb_call" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x15e8aa1c, "tc_setup_cb_reoffload" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

