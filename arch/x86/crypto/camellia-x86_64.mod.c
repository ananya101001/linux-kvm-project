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

KSYMTAB_FUNC(__camellia_enc_blk, "_gpl", "");
KSYMTAB_FUNC(camellia_dec_blk, "_gpl", "");
KSYMTAB_FUNC(__camellia_enc_blk_2way, "_gpl", "");
KSYMTAB_FUNC(camellia_dec_blk_2way, "_gpl", "");
KSYMTAB_FUNC(__camellia_setkey, "_gpl", "");
KSYMTAB_FUNC(camellia_decrypt_cbc_2way, "_gpl", "");

SYMBOL_CRC(__camellia_enc_blk, 0xfe729ed6, "_gpl");
SYMBOL_CRC(camellia_dec_blk, 0xff09bd65, "_gpl");
SYMBOL_CRC(__camellia_enc_blk_2way, 0x69f4ff25, "_gpl");
SYMBOL_CRC(camellia_dec_blk_2way, 0x0b901549, "_gpl");
SYMBOL_CRC(__camellia_setkey, 0x8d725052, "_gpl");
SYMBOL_CRC(camellia_decrypt_cbc_2way, 0x8d9b761c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x58e8de37, "skcipher_walk_virt" },
	{ 0x3520dd75, "crypto_register_skciphers" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xfdbba811, "skcipher_walk_done" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xfeca761, "crypto_unregister_skciphers" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x74bea6f9, "crypto_unregister_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x30232329, "crypto_register_alg" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

