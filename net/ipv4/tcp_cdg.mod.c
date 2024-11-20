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
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x795aada2, "tcp_reno_cong_avoid" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x1b6232f9, "tcp_enter_cwr" },
	{ 0xeb5329e2, "tcp_reno_undo_cwnd" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x513562ed, "tcp_register_congestion_control" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb578fc5, "memset" },
	{ 0x7a492395, "tcp_unregister_congestion_control" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

