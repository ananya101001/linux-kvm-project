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
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x22470eb1, "tcp_reno_ssthresh" },
	{ 0x795aada2, "tcp_reno_cong_avoid" },
	{ 0xeb5329e2, "tcp_reno_undo_cwnd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x513562ed, "tcp_register_congestion_control" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x7a492395, "tcp_unregister_congestion_control" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

