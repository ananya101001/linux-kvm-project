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
	{ 0x2c15205, "xfrm_input" },
	{ 0x6775c90f, "skb_push" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x76bdf2f0, "xfrm_register_type" },
	{ 0x1ffb1ee2, "xfrm4_tunnel_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8ca2c32c, "xfrm4_tunnel_deregister" },
	{ 0x4c450d1, "xfrm_unregister_type" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "tunnel4");

