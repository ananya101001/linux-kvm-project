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
	{ 0xcec122d7, "chacha_crypt_generic" },
	{ 0xfdbba811, "skcipher_walk_done" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xaaa4b9bc, "hchacha_block_generic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3520dd75, "crypto_register_skciphers" },
	{ 0xfeca761, "crypto_unregister_skciphers" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x58e8de37, "skcipher_walk_virt" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "libchacha");

