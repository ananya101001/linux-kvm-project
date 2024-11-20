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
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdf9734a7, "sg_nents" },
	{ 0xc62611e1, "scatterwalk_map_and_copy" },
	{ 0xc9770d8d, "crypto_cipher_decrypt_one" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9c37991a, "crypto_shash_digest" },
	{ 0x21f3700, "poly1305_core_blocks" },
	{ 0xbcb90cb3, "poly1305_core_emit" },
	{ 0x8f877fbc, "crypto_skcipher_encrypt" },
	{ 0x83b10dc4, "crypto_cipher_encrypt_one" },
	{ 0x6c3651f2, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f3478c3, "crypto_unregister_template" },
	{ 0xfc90e0b, "crypto_skcipher_setkey" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa8e458b, "crypto_req_done" },
	{ 0xe491aeed, "crypto_cipher_setkey" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xd45b9cf4, "poly1305_core_setkey" },
	{ 0x79e7db83, "crypto_shash_setkey" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xd3f02915, "crypto_grab_skcipher" },
	{ 0x4608a6b5, "crypto_grab_spawn" },
	{ 0x49fe5a78, "crypto_grab_shash" },
	{ 0x122c3a7e, "_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7dbb18ca, "skcipher_register_instance" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfb935981, "crypto_register_template" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x9a8695b, "crypto_spawn_tfm2" },
	{ 0x9e339dd9, "crypto_spawn_tfm" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4c3d8970, "sg_miter_start" },
	{ 0x8988704a, "sg_miter_next" },
	{ 0xe8718264, "crypto_shash_update" },
	{ 0x35b0ea3, "sg_miter_stop" },
	{ 0xc90fd15, "crypto_shash_final" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "libpoly1305");

