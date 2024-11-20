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
	{ 0x807a82c8, "unregister_tcf_proto_ops" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xfc5d8856, "tcf_exts_dump" },
	{ 0x7be4665, "tcf_em_tree_dump" },
	{ 0x52a019e9, "tcf_exts_dump_stats" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xaac5defa, "tcf_exts_destroy" },
	{ 0x3ac41fbd, "tcf_em_tree_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x92104429, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xf809c66c, "tcf_exts_init_ex" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x453a58fc, "tcf_exts_validate" },
	{ 0xc909bb60, "tcf_em_tree_validate" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xb026b129, "task_cls_state" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xb87cb4c0, "tcf_action_exec" },
	{ 0x911db6ee, "__tcf_em_tree_match" },
	{ 0xdeb4106d, "register_tcf_proto_ops" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

