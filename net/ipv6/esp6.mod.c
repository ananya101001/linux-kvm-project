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

KSYMTAB_FUNC(esp6_output_head, "_gpl", "");
KSYMTAB_FUNC(esp6_output_tail, "_gpl", "");
KSYMTAB_FUNC(esp6_input_done2, "_gpl", "");

SYMBOL_CRC(esp6_output_head, 0xe5ecb27a, "_gpl");
SYMBOL_CRC(esp6_output_tail, 0x8b73c775, "_gpl");
SYMBOL_CRC(esp6_input_done2, 0x9eb69ec4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xb7e27989, "crypto_aead_setauthsize" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x37a0cba, "kfree" },
	{ 0x638b7fff, "xfrm6_protocol_deregister" },
	{ 0x98942be5, "xfrm_state_lookup" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0x15a0849c, "ip6_update_pmtu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xaecd4a1b, "__xfrm_state_destroy" },
	{ 0xc53add22, "ip6_redirect" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xe229fc1c, "napi_pp_put_page" },
	{ 0xb5f4750d, "__put_devmap_managed_folio_refs" },
	{ 0x94c1bfc3, "__folio_put" },
	{ 0x6775c90f, "skb_push" },
	{ 0xc2ee83f2, "xfrm_dev_resume" },
	{ 0x32e75a74, "xfrm_output_resume" },
	{ 0x99224b11, "__skb_ext_del" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xe6f295a9, "ipv6_skip_exthdr" },
	{ 0x4366733a, "km_new_mapping" },
	{ 0x11729181, "skb_pull_rcsum" },
	{ 0x69da51b6, "___pskb_trim" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x2e7e3146, "xfrm_input_resume" },
	{ 0x591c87c2, "skb_cow_data" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x5bbea807, "skb_to_sgvec" },
	{ 0x8fcebc14, "crypto_aead_decrypt" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x86dba9f6, "pskb_put" },
	{ 0xfb578fc5, "memset" },
	{ 0xa2c81948, "skb_page_frag_refill" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x6590e5b2, "crypto_aead_encrypt" },
	{ 0x1d99c634, "xfrm_state_mtu" },
	{ 0x39b0d0ba, "xfrm6_rcv" },
	{ 0x2c15205, "xfrm_input" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9591300f, "skb_checksum" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x76bdf2f0, "xfrm_register_type" },
	{ 0x75a81d11, "xfrm6_protocol_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4c450d1, "xfrm_unregister_type" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf8f81eec, "crypto_alloc_aead" },
	{ 0x6c45925d, "crypto_aead_setkey" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "xfrm_algo");

