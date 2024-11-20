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
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc97cfd53, "nf_ct_tmpl_alloc" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb01b476d, "nf_connlabels_put" },
	{ 0xc403a2f4, "nft_parse_register_load" },
	{ 0x192a9ae, "nf_connlabels_get" },
	{ 0xe5590ebd, "init_net" },
	{ 0xbdd4326c, "nf_ct_helper_ext_add" },
	{ 0x1e415c0e, "nf_ct_expect_alloc" },
	{ 0x26b0ff0f, "nf_ct_expect_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaef1bb6, "nf_ct_expect_related_report" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0xd92a2d2, "__nf_ct_refresh_acct" },
	{ 0x49efa1d8, "nf_ct_ext_add" },
	{ 0xf3c11973, "nf_connlabels_replace" },
	{ 0x369490a9, "nf_ct_ecache_ext_add" },
	{ 0x6cf6b978, "nf_ct_get_id" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x8002cbaf, "nft_ct_get_fast_eval" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf274816b, "nft_register_expr" },
	{ 0x92e68c1d, "nft_register_obj" },
	{ 0xe3ed4b17, "nft_unregister_obj" },
	{ 0x41746749, "nft_unregister_expr" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x26040007, "nf_ct_netns_put" },
	{ 0x15755874, "nf_ct_untimeout" },
	{ 0x37a0cba, "kfree" },
	{ 0x7affc372, "nf_ct_netns_get" },
	{ 0x824aae3f, "nf_conntrack_helper_put" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x24574fc9, "nf_conntrack_helper_try_module_get" },
	{ 0x1cfe9388, "__nft_reg_track_cancel" },
	{ 0xa086b5b, "nft_dump_register" },
	{ 0x9d3e6477, "nft_reg_track_update" },
	{ 0xde1137d4, "nft_expr_reduce_bitwise" },
	{ 0x38d69b4c, "nft_parse_register_store" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xa916b694, "strnlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x64261cc1, "nf_ct_l4proto_find" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nf_tables");

