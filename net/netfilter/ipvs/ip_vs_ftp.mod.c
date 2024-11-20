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
	{ 0xac5fcec0, "in4_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7b9a7216, "ip_vs_conn_out_get" },
	{ 0xa916b694, "strnlen" },
	{ 0xddd99846, "ip_vs_tcp_conn_listen" },
	{ 0x28f98ed3, "ip_vs_conn_put" },
	{ 0xe98b4a3c, "__nf_nat_mangle_tcp_packet" },
	{ 0xc662d564, "ip_vs_nfct_expect_related" },
	{ 0xba4fda01, "ip_vs_conn_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xb8efc77a, "skb_ensure_writable" },
	{ 0xe210c1bf, "ip_vs_conn_in_get" },
	{ 0x73108bd5, "param_array_ops" },
	{ 0x1c989125, "param_ops_ushort" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x4ded242e, "unregister_ip_vs_app" },
	{ 0xbe541482, "register_ip_vs_app" },
	{ 0xbf02e58f, "register_ip_vs_app_inc" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip_vs,nf_nat");

