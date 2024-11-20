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
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x41746749, "nft_unregister_expr" },
	{ 0xec00a2a6, "cgroup_get_from_path" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x38d69b4c, "nft_parse_register_store" },
	{ 0xf4e03971, "nf_sk_lookup_slow_v6" },
	{ 0xe81c35d8, "sock_gen_put" },
	{ 0x73879818, "nf_sk_lookup_slow_v4" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf274816b, "nft_register_expr" },
	{ 0x9d3e6477, "nft_reg_track_update" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xde1137d4, "nft_expr_reduce_bitwise" },
	{ 0xf0565d17, "nft_chain_validate_hooks" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xa086b5b, "nft_dump_register" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_socket_ipv6,nf_socket_ipv4");

