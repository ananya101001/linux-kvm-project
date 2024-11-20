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
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb4ab60be, "aead_geniv_alloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x86af1fb6, "aead_init_geniv" },
	{ 0xf5350f44, "aead_exit_geniv" },
	{ 0x17aee539, "aead_register_instance" },
	{ 0x8f877fbc, "crypto_skcipher_encrypt" },
	{ 0xfb578fc5, "memset" },
	{ 0x6590e5b2, "crypto_aead_encrypt" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2f3478c3, "crypto_unregister_template" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfb935981, "crypto_register_template" },
	{ 0xc62611e1, "scatterwalk_map_and_copy" },
	{ 0x8fcebc14, "crypto_aead_decrypt" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "geniv");

