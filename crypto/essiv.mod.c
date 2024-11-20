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
	{ 0x6c45925d, "crypto_aead_setkey" },
	{ 0xfc90e0b, "crypto_skcipher_setkey" },
	{ 0xb74523cc, "crypto_shash_tfm_digest" },
	{ 0x8f877fbc, "crypto_skcipher_encrypt" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xd3f02915, "crypto_grab_skcipher" },
	{ 0xf3f9e370, "crypto_grab_aead" },
	{ 0x9f984513, "strrchr" },
	{ 0x349cba85, "strchr" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa88683b8, "crypto_alg_mod_lookup" },
	{ 0x4d083d8d, "shash_no_setkey" },
	{ 0xad50959e, "crypto_mod_put" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x17aee539, "aead_register_instance" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7dbb18ca, "skcipher_register_instance" },
	{ 0xbac8aeea, "sg_nents_for_len" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x80a095d8, "scatterwalk_ffwd" },
	{ 0xc62611e1, "scatterwalk_map_and_copy" },
	{ 0x8fcebc14, "crypto_aead_decrypt" },
	{ 0x6590e5b2, "crypto_aead_encrypt" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfb935981, "crypto_register_template" },
	{ 0x37a0cba, "kfree" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x9a8695b, "crypto_spawn_tfm2" },
	{ 0xa116e62e, "crypto_alloc_base" },
	{ 0xe2d055b4, "crypto_alloc_shash" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb7e27989, "crypto_aead_setauthsize" },
	{ 0x83b10dc4, "crypto_cipher_encrypt_one" },
	{ 0x5f351b39, "crypto_skcipher_decrypt" },
	{ 0x6c3651f2, "crypto_drop_spawn" },
	{ 0x2f3478c3, "crypto_unregister_template" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0xe8718264, "crypto_shash_update" },
	{ 0x7d2903c, "crypto_shash_finup" },
	{ 0xe491aeed, "crypto_cipher_setkey" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "authenc");

