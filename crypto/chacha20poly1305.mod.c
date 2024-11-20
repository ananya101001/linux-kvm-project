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
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xac4d65a9, "crypto_register_templates" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfc90e0b, "crypto_skcipher_setkey" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x9a8695b, "crypto_spawn_tfm2" },
	{ 0x6c3651f2, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0xd818ba22, "crypto_unregister_templates" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xd3f02915, "crypto_grab_skcipher" },
	{ 0x11cfda6a, "crypto_grab_ahash" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x17aee539, "aead_register_instance" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc62611e1, "scatterwalk_map_and_copy" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x80a095d8, "scatterwalk_ffwd" },
	{ 0x5f351b39, "crypto_skcipher_decrypt" },
	{ 0x43babd19, "sg_init_one" },
	{ 0xfb72abaf, "crypto_ahash_finup" },
	{ 0x10f8b997, "crypto_ahash_update" },
	{ 0x808e15ac, "crypto_ahash_init" },
	{ 0x8f877fbc, "crypto_skcipher_encrypt" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

