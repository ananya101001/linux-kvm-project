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
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xf1e046cc, "panic" },
	{ 0x7412ed5b, "kvfree_sensitive" },
	{ 0xe8718264, "crypto_shash_update" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xfb578fc5, "memset" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc90fd15, "crypto_shash_final" },
	{ 0x7d2903c, "crypto_shash_finup" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe2d055b4, "crypto_alloc_shash" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0xec53247c, "crypto_register_rng" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0xd26f9acc, "crypto_unregister_rng" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

