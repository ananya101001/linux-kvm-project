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
	{ 0x656e4a6e, "snprintf" },
	{ 0x17aee539, "aead_register_instance" },
	{ 0x11cfda6a, "crypto_grab_ahash" },
	{ 0xd3f02915, "crypto_grab_skcipher" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x80a095d8, "scatterwalk_ffwd" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x808e15ac, "crypto_ahash_init" },
	{ 0x10f8b997, "crypto_ahash_update" },
	{ 0xfb72abaf, "crypto_ahash_finup" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x5f351b39, "crypto_skcipher_decrypt" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x8f877fbc, "crypto_skcipher_encrypt" },
	{ 0x8fcebc14, "crypto_aead_decrypt" },
	{ 0x6590e5b2, "crypto_aead_encrypt" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xac4d65a9, "crypto_register_templates" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc62611e1, "scatterwalk_map_and_copy" },
	{ 0xb7e27989, "crypto_aead_setauthsize" },
	{ 0x6c45925d, "crypto_aead_setkey" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x9a8695b, "crypto_spawn_tfm2" },
	{ 0x6c3651f2, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb578fc5, "memset" },
	{ 0xfc90e0b, "crypto_skcipher_setkey" },
	{ 0x7970c44a, "crypto_ahash_setkey" },
	{ 0xe491aeed, "crypto_cipher_setkey" },
	{ 0x69acdf38, "memcpy" },
	{ 0x83b10dc4, "crypto_cipher_encrypt_one" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x9e339dd9, "crypto_spawn_tfm" },
	{ 0xd818ba22, "crypto_unregister_templates" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x4608a6b5, "crypto_grab_spawn" },
	{ 0x95b4a431, "crypto_inst_setname" },
	{ 0x450b7455, "shash_free_singlespawn_instance" },
	{ 0x657bc45a, "shash_register_instance" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf3f9e370, "crypto_grab_aead" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

