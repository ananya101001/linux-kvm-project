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

KSYMTAB_FUNC(__cast6_setkey, "_gpl", "");
KSYMTAB_FUNC(cast6_setkey, "_gpl", "");
KSYMTAB_FUNC(__cast6_encrypt, "_gpl", "");
KSYMTAB_FUNC(__cast6_decrypt, "_gpl", "");

SYMBOL_CRC(__cast6_setkey, 0xd76a5716, "_gpl");
SYMBOL_CRC(cast6_setkey, 0x046b3e85, "_gpl");
SYMBOL_CRC(__cast6_encrypt, 0xcfce512f, "_gpl");
SYMBOL_CRC(__cast6_decrypt, 0x3dbae082, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5b17be06, "cast_s4" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x30232329, "crypto_register_alg" },
	{ 0x74bea6f9, "crypto_unregister_alg" },
	{ 0x5609ce41, "cast_s2" },
	{ 0xbd3e7542, "cast_s1" },
	{ 0xb9cba57f, "cast_s3" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "cast_common");

