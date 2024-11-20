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
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xfa406eba, "crypto_register_shash" },
	{ 0x6eef9a09, "crypto_unregister_shash" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x765ff474, "crc_t10dif_generic" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0081*");
