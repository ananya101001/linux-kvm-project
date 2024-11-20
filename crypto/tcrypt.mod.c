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
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x9da9be5f, "crypto_alloc_skcipher" },
	{ 0xa8e458b, "crypto_req_done" },
	{ 0xfc90e0b, "crypto_skcipher_setkey" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0xfb578fc5, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa84653c0, "crypto_alloc_ahash" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x808e15ac, "crypto_ahash_init" },
	{ 0x10f8b997, "crypto_ahash_update" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b945a2a, "crypto_ahash_final" },
	{ 0x7970c44a, "crypto_ahash_setkey" },
	{ 0x2e51c17d, "crypto_ahash_digest" },
	{ 0xf8f81eec, "crypto_alloc_aead" },
	{ 0xb7e27989, "crypto_aead_setauthsize" },
	{ 0x6c45925d, "crypto_aead_setkey" },
	{ 0x3bdb5d28, "alg_test" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xee3f884, "param_ops_charp" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x8fcebc14, "crypto_aead_decrypt" },
	{ 0x6590e5b2, "crypto_aead_encrypt" },
	{ 0x122c3a7e, "_printk" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5f351b39, "crypto_skcipher_decrypt" },
	{ 0x8f877fbc, "crypto_skcipher_encrypt" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

