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
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xb87cb4c0, "tcf_action_exec" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xaf854864, "tc_setup_cb_call" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x4dc8c704, "nla_reserve" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfc5d8856, "tcf_exts_dump" },
	{ 0x52a019e9, "tcf_exts_dump_stats" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x754d539c, "strlen" },
	{ 0xaac5defa, "tcf_exts_destroy" },
	{ 0x9685ea8b, "bpf_prog_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x744bb6af, "bpf_prog_put" },
	{ 0x92104429, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xf809c66c, "tcf_exts_init_ex" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x453a58fc, "tcf_exts_validate" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xf4d50f3e, "bpf_prog_create" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x6238493f, "bpf_prog_get_type_dev" },
	{ 0xd83d44fd, "tcf_block_netif_keep_dst" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xdeb4106d, "register_tcf_proto_ops" },
	{ 0x98fd7c7b, "tc_setup_cb_add" },
	{ 0xcf84a25f, "tc_setup_cb_replace" },
	{ 0x2c65f067, "tc_setup_cb_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x807a82c8, "unregister_tcf_proto_ops" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x15e8aa1c, "tc_setup_cb_reoffload" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

