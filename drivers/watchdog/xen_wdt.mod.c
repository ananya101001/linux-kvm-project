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
	{ 0xfd4a5a9c, "platform_device_unregister" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0xd081dfa2, "platform_device_register_full" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x1754c363, "watchdog_init_timeout" },
	{ 0x40333ad, "devm_watchdog_register_device" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "watchdog");

