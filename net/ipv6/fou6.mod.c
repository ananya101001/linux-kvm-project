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
	{ 0x6775c90f, "skb_push" },
	{ 0xe191fc4d, "udp6_set_csum" },
	{ 0x8a0fe83f, "__gue_build_header" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8cb52a69, "__fou_build_header" },
	{ 0xcc703b56, "inet6_protos" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xf13914b3, "gue_encap_hlen" },
	{ 0x1757d1a4, "fou_encap_hlen" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x97e4a230, "ip6_tnl_encap_add_ops" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe949876a, "ip6_tnl_encap_del_ops" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "fou,ip6_tunnel");

