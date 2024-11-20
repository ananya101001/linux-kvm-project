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
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x92104429, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x2c65f067, "tc_setup_cb_destroy" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0xaf854864, "tc_setup_cb_call" },
	{ 0x1579fe3b, "tcf_action_update_hw_stats" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0xfc5d8856, "tcf_exts_dump" },
	{ 0x52a019e9, "tcf_exts_dump_stats" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x98fd7c7b, "tc_setup_cb_add" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xf809c66c, "tcf_exts_init_ex" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0xf08db286, "tcf_exts_validate_ex" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb87cb4c0, "tcf_action_exec" },
	{ 0xdeb4106d, "register_tcf_proto_ops" },
	{ 0x8f82af7a, "tcf_exts_num_actions" },
	{ 0xd86a776b, "flow_rule_alloc" },
	{ 0x50e5f892, "tc_setup_offload_action" },
	{ 0x15e8aa1c, "tc_setup_cb_reoffload" },
	{ 0x537cd94e, "tc_cleanup_offload_action" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x807a82c8, "unregister_tcf_proto_ops" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

