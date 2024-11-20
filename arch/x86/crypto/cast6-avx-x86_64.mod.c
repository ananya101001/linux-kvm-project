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
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x58e8de37, "skcipher_walk_virt" },
	{ 0xb8ff2938, "simd_register_skciphers_compat" },
	{ 0xcfce512f, "__cast6_encrypt" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xfdbba811, "skcipher_walk_done" },
	{ 0x5609ce41, "cast_s2" },
	{ 0x43732641, "simd_unregister_skciphers" },
	{ 0xbd3e7542, "cast_s1" },
	{ 0x5b17be06, "cast_s4" },
	{ 0x3dbae082, "__cast6_decrypt" },
	{ 0xb9cba57f, "cast_s3" },
	{ 0x46b3e85, "cast6_setkey" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "crypto_simd,cast6_generic,cast_common");

