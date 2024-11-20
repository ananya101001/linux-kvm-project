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

KSYMTAB_FUNC(nf_fwd_netdev_egress, "_gpl", "");
KSYMTAB_FUNC(nf_dup_netdev_egress, "_gpl", "");
KSYMTAB_FUNC(nft_fwd_dup_netdev_offload, "_gpl", "");

SYMBOL_CRC(nf_fwd_netdev_egress, 0xddab817b, "_gpl");
SYMBOL_CRC(nf_dup_netdev_egress, 0xb2efd737, "_gpl");
SYMBOL_CRC(nft_fwd_dup_netdev_offload, 0x0064054c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x6775c90f, "skb_push" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0xa542eb90, "skb_clone" },
	{ 0x19e2cc40, "dev_get_by_index" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

