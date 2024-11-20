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
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x49c2ec4b, "nft_fib6_eval" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xcea3acc2, "nft_fib4_eval_type" },
	{ 0xb6a07261, "nft_fib4_eval" },
	{ 0xc8db806e, "nft_fib6_eval_type" },
	{ 0x41746749, "nft_unregister_expr" },
	{ 0xae3a0355, "nft_fib_init" },
	{ 0xf9f36925, "nft_fib_dump" },
	{ 0x71db2a52, "nft_fib_validate" },
	{ 0x2880789f, "nft_fib_reduce" },
	{ 0xbc8624cb, "nft_fib_policy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf274816b, "nft_register_expr" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nft_fib_ipv6,nft_fib_ipv4,nf_tables,nft_fib");

