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
	{ 0xfa406eba, "crypto_register_shash" },
	{ 0x6eef9a09, "crypto_unregister_shash" },
	{ 0xc3c71805, "crypto_register_ahash" },
	{ 0x7f677500, "cryptd_shash_desc" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2e51c17d, "crypto_ahash_digest" },
	{ 0x3b945a2a, "crypto_ahash_final" },
	{ 0xc90fd15, "crypto_shash_final" },
	{ 0xfb4db461, "shash_ahash_digest" },
	{ 0xdd32720b, "cryptd_ahash_queued" },
	{ 0x10f8b997, "crypto_ahash_update" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0x31581d2e, "cryptd_free_ahash" },
	{ 0xa088f329, "cryptd_alloc_ahash" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0xb3edd7b2, "shash_ahash_update" },
	{ 0x7970c44a, "crypto_ahash_setkey" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x6a2db30d, "cryptd_ahash_child" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2fcd052, "crypto_unregister_ahash" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "cryptd");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0081*");
