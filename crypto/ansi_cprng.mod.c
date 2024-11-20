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
	{ 0xa116e62e, "crypto_alloc_base" },
	{ 0x83b10dc4, "crypto_cipher_encrypt_one" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xf1e046cc, "panic" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3488a425, "crypto_register_rngs" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x40184395, "crypto_unregister_rngs" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe491aeed, "crypto_cipher_setkey" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

