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
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x58e8de37, "skcipher_walk_virt" },
	{ 0xb8ff2938, "simd_register_skciphers_compat" },
	{ 0xbcc074f3, "__serpent_decrypt" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xfdbba811, "skcipher_walk_done" },
	{ 0x43732641, "simd_unregister_skciphers" },
	{ 0x4eb4c55e, "__serpent_encrypt" },
	{ 0xd4c9681a, "__serpent_setkey" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "crypto_simd,serpent_generic");

