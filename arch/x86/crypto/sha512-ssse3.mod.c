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
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x2307ef45, "crypto_register_shashes" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0x27830220, "crypto_unregister_shashes" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x5d2b5841, "crypto_sha512_finup" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x127bc3a1, "crypto_sha512_update" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0125*");
MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*009C*");
MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0089*");
