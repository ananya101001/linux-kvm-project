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

KSYMTAB_FUNC(nft_fib4_eval_type, "_gpl", "");
KSYMTAB_FUNC(nft_fib4_eval, "_gpl", "");

SYMBOL_CRC(nft_fib4_eval_type, 0xcea3acc2, "_gpl");
SYMBOL_CRC(nft_fib4_eval, 0xb6a07261, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf274816b, "nft_register_expr" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x41746749, "nft_unregister_expr" },
	{ 0x6cd2f178, "l3mdev_master_ifindex_rcu" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0xf68ab1aa, "nft_fib_store_result" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x17c059ff, "fib_table_lookup" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4d70b6f8, "__fib_lookup" },
	{ 0xfe562bfa, "fib_info_nh_uses_dev" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x85d7d749, "inet_dev_addr_type" },
	{ 0xae3a0355, "nft_fib_init" },
	{ 0xf9f36925, "nft_fib_dump" },
	{ 0x71db2a52, "nft_fib_validate" },
	{ 0x2880789f, "nft_fib_reduce" },
	{ 0xbc8624cb, "nft_fib_policy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nft_fib");

