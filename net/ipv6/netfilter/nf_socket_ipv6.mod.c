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

KSYMTAB_FUNC(nf_sk_lookup_slow_v6, "_gpl", "");

SYMBOL_CRC(nf_sk_lookup_slow_v6, 0xf4e03971, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x83823fac, "ipv6_find_hdr" },
	{ 0xe6f295a9, "ipv6_skip_exthdr" },
	{ 0x7cf9ad42, "udp6_lib_lookup" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc4baab08, "inet6_lookup" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

