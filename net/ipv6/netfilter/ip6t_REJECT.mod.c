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
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x38cccf68, "nf_send_unreach6" },
	{ 0x73b182da, "nf_send_reset6" },
	{ 0x86a14c80, "xt_unregister_target" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x282082dd, "xt_register_target" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_reject_ipv6,x_tables");

