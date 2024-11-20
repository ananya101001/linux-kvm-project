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

KSYMTAB_FUNC(nft_fib6_eval_type, "_gpl", "");
KSYMTAB_FUNC(nft_fib6_eval, "_gpl", "");

SYMBOL_CRC(nft_fib6_eval_type, 0xc8db806e, "_gpl");
SYMBOL_CRC(nft_fib6_eval, 0x49c2ec4b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf274816b, "nft_register_expr" },
	{ 0x41746749, "nft_unregister_expr" },
	{ 0x6cd2f178, "l3mdev_master_ifindex_rcu" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0xf68ab1aa, "nft_fib_store_result" },
	{ 0xbf33defc, "ip6_route_lookup" },
	{ 0xf04a650c, "dst_release" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x55c28c9f, "ipv6_chk_addr" },
	{ 0x412609ae, "__nf_ip6_route" },
	{ 0xae3a0355, "nft_fib_init" },
	{ 0xf9f36925, "nft_fib_dump" },
	{ 0x71db2a52, "nft_fib_validate" },
	{ 0x2880789f, "nft_fib_reduce" },
	{ 0xbc8624cb, "nft_fib_policy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nft_fib");

