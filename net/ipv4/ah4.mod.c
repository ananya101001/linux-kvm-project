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
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0xbbd24cc4, "xfrm4_protocol_deregister" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xa84653c0, "crypto_alloc_ahash" },
	{ 0x7970c44a, "crypto_ahash_setkey" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x98942be5, "xfrm_state_lookup" },
	{ 0xd390b3fe, "ipv4_redirect" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xaecd4a1b, "__xfrm_state_destroy" },
	{ 0x5e31881f, "ipv4_update_pmtu" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0x591c87c2, "skb_cow_data" },
	{ 0xfb578fc5, "memset" },
	{ 0x6775c90f, "skb_push" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x225f0aab, "skb_to_sgvec_nomark" },
	{ 0x2e51c17d, "crypto_ahash_digest" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1a2f1c91, "xfrm4_rcv" },
	{ 0x2c15205, "xfrm_input" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x76bdf2f0, "xfrm_register_type" },
	{ 0x1eecd435, "xfrm4_protocol_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4c450d1, "xfrm_unregister_type" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x32e75a74, "xfrm_output_resume" },
	{ 0x2e7e3146, "xfrm_input_resume" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "xfrm_algo");

