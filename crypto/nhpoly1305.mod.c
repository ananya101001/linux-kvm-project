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

KSYMTAB_FUNC(crypto_nhpoly1305_setkey, "", "");
KSYMTAB_FUNC(crypto_nhpoly1305_init, "", "");
KSYMTAB_FUNC(crypto_nhpoly1305_update_helper, "", "");
KSYMTAB_FUNC(crypto_nhpoly1305_update, "", "");
KSYMTAB_FUNC(crypto_nhpoly1305_final_helper, "", "");
KSYMTAB_FUNC(crypto_nhpoly1305_final, "", "");

SYMBOL_CRC(crypto_nhpoly1305_setkey, 0x43524d71, "");
SYMBOL_CRC(crypto_nhpoly1305_init, 0x0fe2d604, "");
SYMBOL_CRC(crypto_nhpoly1305_update_helper, 0x7429fd9b, "");
SYMBOL_CRC(crypto_nhpoly1305_update, 0x7d58713e, "");
SYMBOL_CRC(crypto_nhpoly1305_final_helper, 0x6449f637, "");
SYMBOL_CRC(crypto_nhpoly1305_final, 0x8bcdbb2c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x21f3700, "poly1305_core_blocks" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbcb90cb3, "poly1305_core_emit" },
	{ 0xfa406eba, "crypto_register_shash" },
	{ 0x6eef9a09, "crypto_unregister_shash" },
	{ 0xd45b9cf4, "poly1305_core_setkey" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "libpoly1305");

