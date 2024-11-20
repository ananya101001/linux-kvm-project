#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(aead_geniv_alloc, "_gpl", "");
KSYMTAB_FUNC(aead_init_geniv, "_gpl", "");
KSYMTAB_FUNC(aead_exit_geniv, "_gpl", "");

SYMBOL_CRC(aead_geniv_alloc, 0xb4ab60be, "_gpl");
SYMBOL_CRC(aead_init_geniv, 0x86af1fb6, "_gpl");
SYMBOL_CRC(aead_exit_geniv, 0xf5350f44, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb7e27989, "crypto_aead_setauthsize" },
	{ 0x6c45925d, "crypto_aead_setkey" },
	{ 0x6c3651f2, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ff607b6, "crypto_get_default_rng" },
	{ 0x8a73fda, "crypto_default_rng" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x668402aa, "crypto_put_default_rng" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x1e246fb8, "crypto_get_default_null_skcipher" },
	{ 0x9a8695b, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xf3f9e370, "crypto_grab_aead" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "crypto_null");

