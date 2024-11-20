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
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x5bc8a689, "__static_call_update" },
	{ 0x80a095d8, "scatterwalk_ffwd" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x8c2cb09c, "skcipher_walk_aead_decrypt" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0x74bea6f9, "crypto_unregister_alg" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1c2c006e, "simd_register_aeads_compat" },
	{ 0x78a16f48, "aes_decrypt" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x30232329, "crypto_register_alg" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x9e13f6f6, "gf128mul_lle" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x58e8de37, "skcipher_walk_virt" },
	{ 0xb8ff2938, "simd_register_skciphers_compat" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xafb1a598, "skcipher_walk_aead_encrypt" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xfdbba811, "skcipher_walk_done" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xc62611e1, "scatterwalk_map_and_copy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe6e6c148, "simd_unregister_aeads" },
	{ 0x43732641, "simd_unregister_skciphers" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "crypto_simd,gf128mul");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0099*");
