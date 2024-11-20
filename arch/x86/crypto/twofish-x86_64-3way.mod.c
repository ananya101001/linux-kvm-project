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

KSYMTAB_FUNC(__twofish_enc_blk_3way, "_gpl", "");
KSYMTAB_FUNC(twofish_dec_blk_3way, "_gpl", "");
KSYMTAB_FUNC(twofish_dec_blk_cbc_3way, "_gpl", "");

SYMBOL_CRC(__twofish_enc_blk_3way, 0xe4ae7508, "_gpl");
SYMBOL_CRC(twofish_dec_blk_3way, 0xb4e98a46, "_gpl");
SYMBOL_CRC(twofish_dec_blk_cbc_3way, 0x92a51c43, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2213795c, "twofish_setkey" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x58e8de37, "skcipher_walk_virt" },
	{ 0x3520dd75, "crypto_register_skciphers" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xfdbba811, "skcipher_walk_done" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x7c7bf6e0, "twofish_enc_blk" },
	{ 0xfeca761, "crypto_unregister_skciphers" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x1f491d36, "twofish_dec_blk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "twofish_common,twofish-x86_64");

