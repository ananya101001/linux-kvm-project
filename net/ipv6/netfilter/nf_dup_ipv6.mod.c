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

KSYMTAB_FUNC(nf_dup_ipv6, "_gpl", "");

SYMBOL_CRC(nf_dup_ipv6, 0x686c835b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x1c59eff6, "__pskb_copy_fclone" },
	{ 0x496e68b4, "ip6_route_output_flags" },
	{ 0x36a8b5d0, "ip6_local_out" },
	{ 0xf04a650c, "dst_release" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

