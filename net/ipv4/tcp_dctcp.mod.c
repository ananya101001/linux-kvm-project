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
	{ 0x7a492395, "tcp_unregister_congestion_control" },
	{ 0x795aada2, "tcp_reno_cong_avoid" },
	{ 0x22470eb1, "tcp_reno_ssthresh" },
	{ 0xeb5329e2, "tcp_reno_undo_cwnd" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x311637c4, "param_get_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x56707b9, "param_set_uint_minmax" },
	{ 0xd28a9d4b, "tcp_plb_update_state" },
	{ 0x29876d34, "tcp_plb_check_rehash" },
	{ 0x861430b6, "__tcp_send_ack" },
	{ 0x3a7990a4, "tcp_plb_update_state_upon_rto" },
	{ 0x1626cdd3, "register_btf_kfunc_id_set" },
	{ 0x513562ed, "tcp_register_congestion_control" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

