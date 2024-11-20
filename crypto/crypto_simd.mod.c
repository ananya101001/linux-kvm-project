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

KSYMTAB_FUNC(simd_skcipher_create_compat, "_gpl", "");
KSYMTAB_FUNC(simd_skcipher_free, "_gpl", "");
KSYMTAB_FUNC(simd_register_skciphers_compat, "_gpl", "");
KSYMTAB_FUNC(simd_unregister_skciphers, "_gpl", "");
KSYMTAB_FUNC(simd_register_aeads_compat, "_gpl", "");
KSYMTAB_FUNC(simd_unregister_aeads, "_gpl", "");

SYMBOL_CRC(simd_skcipher_create_compat, 0x3fc784ee, "_gpl");
SYMBOL_CRC(simd_skcipher_free, 0xefe73979, "_gpl");
SYMBOL_CRC(simd_register_skciphers_compat, 0xb8ff2938, "_gpl");
SYMBOL_CRC(simd_unregister_skciphers, 0x43732641, "_gpl");
SYMBOL_CRC(simd_register_aeads_compat, 0x1c2c006e, "_gpl");
SYMBOL_CRC(simd_unregister_aeads, 0xe6e6c148, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8fcebc14, "crypto_aead_decrypt" },
	{ 0xfc90e0b, "crypto_skcipher_setkey" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x810bda29, "crypto_unregister_aeads" },
	{ 0x926eb123, "cryptd_skcipher_child" },
	{ 0x5f351b39, "crypto_skcipher_decrypt" },
	{ 0xe9c14238, "cryptd_alloc_skcipher" },
	{ 0x6c45925d, "crypto_aead_setkey" },
	{ 0x6df6091e, "crypto_register_skcipher" },
	{ 0x6590e5b2, "crypto_aead_encrypt" },
	{ 0xcf26b4ed, "cryptd_aead_queued" },
	{ 0x28ce5f6d, "crypto_unregister_skcipher" },
	{ 0x3520dd75, "crypto_register_skciphers" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x25987923, "cryptd_skcipher_queued" },
	{ 0x7a222a59, "cryptd_free_aead" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xfeca761, "crypto_unregister_skciphers" },
	{ 0x29ac0f2a, "cryptd_free_skcipher" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x8f877fbc, "crypto_skcipher_encrypt" },
	{ 0x44518775, "cryptd_alloc_aead" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x983a1568, "cryptd_aead_child" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0xe27cbfcb, "crypto_register_aead" },
	{ 0xe9af0dbf, "crypto_unregister_aead" },
	{ 0x37a0cba, "kfree" },
	{ 0xd77a1ee7, "crypto_register_aeads" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xb7e27989, "crypto_aead_setauthsize" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "cryptd");

