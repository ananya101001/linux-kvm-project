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
	{ 0xb8efc77a, "skb_ensure_writable" },
	{ 0x5c0259ec, "inet_proto_csum_replace4" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0xd6625cfb, "skb_put" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa9c64adf, "nf_route" },
	{ 0xbca24e1e, "ip6_mtu" },
	{ 0xf04a650c, "dst_release" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x39374f5e, "ipv4_mtu" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe6f295a9, "ipv6_skip_exthdr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc2d5d571, "xt_register_targets" },
	{ 0x9d47a039, "xt_unregister_targets" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "x_tables");

