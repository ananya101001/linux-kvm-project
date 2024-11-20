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

KSYMTAB_FUNC(crypto_authenc_extractkeys, "_gpl", "");

SYMBOL_CRC(crypto_authenc_extractkeys, 0x2479193e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x9a8695b, "crypto_spawn_tfm2" },
	{ 0x1e246fb8, "crypto_get_default_null_skcipher" },
	{ 0x6c3651f2, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f3478c3, "crypto_unregister_template" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x11cfda6a, "crypto_grab_ahash" },
	{ 0xd3f02915, "crypto_grab_skcipher" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x17aee539, "aead_register_instance" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xfb935981, "crypto_register_template" },
	{ 0x2e51c17d, "crypto_ahash_digest" },
	{ 0xc62611e1, "scatterwalk_map_and_copy" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x80a095d8, "scatterwalk_ffwd" },
	{ 0x5f351b39, "crypto_skcipher_decrypt" },
	{ 0x8f877fbc, "crypto_skcipher_encrypt" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7970c44a, "crypto_ahash_setkey" },
	{ 0xfc90e0b, "crypto_skcipher_setkey" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "crypto_null");

