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
	{ 0x9c9a9f36, "nf_defrag_ipv4_enable" },
	{ 0xa082f2ef, "nf_defrag_ipv6_enable" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb99fd232, "xt_register_matches" },
	{ 0xf4e03971, "nf_sk_lookup_slow_v6" },
	{ 0xe81c35d8, "sock_gen_put" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x55ecc4c2, "nf_defrag_ipv4_disable" },
	{ 0xe2c1468c, "nf_defrag_ipv6_disable" },
	{ 0x73879818, "nf_sk_lookup_slow_v4" },
	{ 0x2e62920b, "xt_unregister_matches" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_defrag_ipv4,nf_defrag_ipv6,x_tables,nf_socket_ipv6,nf_socket_ipv4");

