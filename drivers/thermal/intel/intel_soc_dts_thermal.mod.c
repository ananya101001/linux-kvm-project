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
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x122c3a7e, "_printk" },
	{ 0x171c78df, "acpi_register_gsi" },
	{ 0xb5bbd7ad, "intel_soc_dts_iosf_interrupt_handler" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xf235e592, "intel_soc_dts_iosf_exit" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7b5452b8, "acpi_unregister_gsi" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0xc7100ae, "intel_soc_dts_iosf_init" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "intel_soc_dts_iosf");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0037:feature:*");
