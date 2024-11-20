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
	{ 0x9e339dd9, "crypto_spawn_tfm" },
	{ 0x2f3478c3, "crypto_unregister_template" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x4608a6b5, "crypto_grab_spawn" },
	{ 0x450b7455, "shash_free_singlespawn_instance" },
	{ 0x95b4a431, "crypto_inst_setname" },
	{ 0x657bc45a, "shash_register_instance" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfb935981, "crypto_register_template" },
	{ 0xe491aeed, "crypto_cipher_setkey" },
	{ 0x83b10dc4, "crypto_cipher_encrypt_one" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

