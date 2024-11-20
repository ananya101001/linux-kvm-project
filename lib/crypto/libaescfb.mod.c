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

KSYMTAB_FUNC(aescfb_encrypt, "", "");
KSYMTAB_FUNC(aescfb_decrypt, "", "");

SYMBOL_CRC(aescfb_encrypt, 0x79095771, "");
SYMBOL_CRC(aescfb_decrypt, 0x09ad3e50, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

