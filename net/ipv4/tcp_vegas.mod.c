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

KSYMTAB_FUNC(tcp_vegas_init, "_gpl", "");
KSYMTAB_FUNC(tcp_vegas_pkts_acked, "_gpl", "");
KSYMTAB_FUNC(tcp_vegas_state, "_gpl", "");
KSYMTAB_FUNC(tcp_vegas_cwnd_event, "_gpl", "");
KSYMTAB_FUNC(tcp_vegas_get_info, "_gpl", "");

SYMBOL_CRC(tcp_vegas_init, 0xba87e9b1, "_gpl");
SYMBOL_CRC(tcp_vegas_pkts_acked, 0xa425839a, "_gpl");
SYMBOL_CRC(tcp_vegas_state, 0x7b6d1eb8, "_gpl");
SYMBOL_CRC(tcp_vegas_cwnd_event, 0x22fdcefd, "_gpl");
SYMBOL_CRC(tcp_vegas_get_info, 0xff0e60b3, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x513562ed, "tcp_register_congestion_control" },
	{ 0x7a492395, "tcp_unregister_congestion_control" },
	{ 0xeee14fb8, "tcp_slow_start" },
	{ 0x795aada2, "tcp_reno_cong_avoid" },
	{ 0x22470eb1, "tcp_reno_ssthresh" },
	{ 0xeb5329e2, "tcp_reno_undo_cwnd" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

