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
	{ 0x2b5b320f, "team_mode_unregister" },
	{ 0xa542eb90, "skb_clone" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x70f3d0e7, "netpoll_send_skb" },
	{ 0x17e9a207, "team_modeop_port_enter" },
	{ 0x1e5244ba, "team_modeop_port_change_dev_addr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x96d32a35, "team_mode_register" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "team");
