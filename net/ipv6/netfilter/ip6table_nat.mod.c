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
	{ 0x93bd55a7, "ip6t_unregister_table_exit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x14927eef, "nf_nat_ipv6_unregister_fn" },
	{ 0x37a0cba, "kfree" },
	{ 0x4053ffcb, "ip6t_alloc_initial_table" },
	{ 0x1209e74f, "ip6t_register_table" },
	{ 0x8087cab8, "xt_find_table" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x226c0a91, "nf_nat_ipv6_register_fn" },
	{ 0x4eee7fec, "xt_unregister_template" },
	{ 0x115e819e, "ip6t_do_table" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x8a983b3f, "xt_register_template" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip6_tables,nf_nat,x_tables");
