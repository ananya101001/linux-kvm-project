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
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2f3478c3, "crypto_unregister_template" },
	{ 0x58e8de37, "skcipher_walk_virt" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x83b10dc4, "crypto_cipher_encrypt_one" },
	{ 0xfdbba811, "skcipher_walk_done" },
	{ 0x69acdf38, "memcpy" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc9770d8d, "crypto_cipher_decrypt_one" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfb935981, "crypto_register_template" },
	{ 0x3b2de303, "skcipher_alloc_instance_simple" },
	{ 0x7dbb18ca, "skcipher_register_instance" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");
