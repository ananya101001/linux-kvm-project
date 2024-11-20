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
	{ 0x69f4ff25, "__camellia_enc_blk_2way" },
	{ 0x58e8de37, "skcipher_walk_virt" },
	{ 0xb8ff2938, "simd_register_skciphers_compat" },
	{ 0x8b44ee75, "camellia_ecb_dec_16way" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x339c33c5, "camellia_cbc_dec_16way" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xfdbba811, "skcipher_walk_done" },
	{ 0x43732641, "simd_unregister_skciphers" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xb901549, "camellia_dec_blk_2way" },
	{ 0x2c8b5dbf, "camellia_ecb_enc_16way" },
	{ 0x8d725052, "__camellia_setkey" },
	{ 0xfe729ed6, "__camellia_enc_blk" },
	{ 0xff09bd65, "camellia_dec_blk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8d9b761c, "camellia_decrypt_cbc_2way" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "camellia-x86_64,crypto_simd,camellia-aesni-avx-x86_64");

