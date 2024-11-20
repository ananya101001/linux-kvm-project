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
	{ 0xe8718264, "crypto_shash_update" },
	{ 0xc90fd15, "crypto_shash_final" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x8f877fbc, "crypto_skcipher_encrypt" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x79e7db83, "crypto_shash_setkey" },
	{ 0xe491aeed, "crypto_cipher_setkey" },
	{ 0x83b10dc4, "crypto_cipher_encrypt_one" },
	{ 0xfc90e0b, "crypto_skcipher_setkey" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0xe2d055b4, "crypto_alloc_shash" },
	{ 0x3a4f9d28, "rng_is_initialized" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3488a425, "crypto_register_rngs" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xe32d3f9e, "crypto_alloc_rng" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x754d539c, "strlen" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa916b694, "strnlen" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xf1e046cc, "panic" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x37a0cba, "kfree" },
	{ 0x40184395, "crypto_unregister_rngs" },
	{ 0xa116e62e, "crypto_alloc_base" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9da9be5f, "crypto_alloc_skcipher" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa8e458b, "crypto_req_done" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

