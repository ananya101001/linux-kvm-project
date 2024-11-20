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
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x9a8695b, "crypto_spawn_tfm2" },
	{ 0x6c3651f2, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f3478c3, "crypto_unregister_template" },
	{ 0x5f351b39, "crypto_skcipher_decrypt" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xd3f02915, "crypto_grab_skcipher" },
	{ 0x95b4a431, "crypto_inst_setname" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7dbb18ca, "skcipher_register_instance" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x8f877fbc, "crypto_skcipher_encrypt" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfb935981, "crypto_register_template" },
	{ 0x5e373fb4, "gf128mul_64k_bbe" },
	{ 0x58e8de37, "skcipher_walk_virt" },
	{ 0xfdbba811, "skcipher_walk_done" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfc90e0b, "crypto_skcipher_setkey" },
	{ 0xd60736ec, "gf128mul_free_64k" },
	{ 0x3755f990, "gf128mul_init_64k_bbe" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "gf128mul");

