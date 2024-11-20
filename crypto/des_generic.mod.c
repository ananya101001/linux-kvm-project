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
	{ 0x105b595, "des_encrypt" },
	{ 0xa8fb743d, "des_expand_key" },
	{ 0xc4002df1, "crypto_unregister_algs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1c5e8714, "crypto_register_algs" },
	{ 0x574eda34, "des3_ede_decrypt" },
	{ 0x856a5ef3, "des3_ede_encrypt" },
	{ 0xa77b3b62, "des3_ede_expand_key" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa6aa9857, "des_decrypt" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "libdes");

