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
	{ 0x122c3a7e, "_printk" },
	{ 0x9c9a9f36, "nf_defrag_ipv4_enable" },
	{ 0x83823fac, "ipv6_find_hdr" },
	{ 0x445a3cf8, "nf_tproxy_get_sock_v6" },
	{ 0xd4bf3de7, "nf_tproxy_laddr6" },
	{ 0xe81c35d8, "sock_gen_put" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x850003c2, "sock_edemux" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x7e77ee8d, "nf_tproxy_handle_time_wait6" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7cdbb83b, "nf_tproxy_get_sock_v4" },
	{ 0xa9727531, "nf_tproxy_laddr4" },
	{ 0xd1b5282f, "nf_tproxy_handle_time_wait4" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc2d5d571, "xt_register_targets" },
	{ 0xe2c1468c, "nf_defrag_ipv6_disable" },
	{ 0x55ecc4c2, "nf_defrag_ipv4_disable" },
	{ 0x9d47a039, "xt_unregister_targets" },
	{ 0xa082f2ef, "nf_defrag_ipv6_enable" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_defrag_ipv4,nf_tproxy_ipv6,nf_tproxy_ipv4,x_tables,nf_defrag_ipv6");

