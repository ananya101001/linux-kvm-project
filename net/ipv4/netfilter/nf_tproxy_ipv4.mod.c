#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(nf_tproxy_handle_time_wait4, "_gpl", "");
KSYMTAB_FUNC(nf_tproxy_laddr4, "_gpl", "");
KSYMTAB_FUNC(nf_tproxy_get_sock_v4, "_gpl", "");

SYMBOL_CRC(nf_tproxy_handle_time_wait4, 0xd1b5282f, "_gpl");
SYMBOL_CRC(nf_tproxy_laddr4, 0xa9727531, "_gpl");
SYMBOL_CRC(nf_tproxy_get_sock_v4, 0x7cdbb83b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x187ae725, "__inet_lookup_established" },
	{ 0xdca9fd99, "udp4_lib_lookup" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3724415c, "__inet_lookup_listener" },
	{ 0x98a94a64, "sk_free" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x74fda50a, "inet_twsk_deschedule_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x17aedc9d, "inet_twsk_put" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

