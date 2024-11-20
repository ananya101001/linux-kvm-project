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

KSYMTAB_FUNC(xfrm6_tunnel_register, "", "");
KSYMTAB_FUNC(xfrm6_tunnel_deregister, "", "");

SYMBOL_CRC(xfrm6_tunnel_register, 0x51b137c7, "");
SYMBOL_CRC(xfrm6_tunnel_deregister, 0xa7c24025, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x15aa1a9a, "inet6_add_protocol" },
	{ 0x1009218c, "xfrm_input_register_afinfo" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3c079b00, "inet6_del_protocol" },
	{ 0xc50e9813, "icmp6_send" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x2f2b2fae, "xfrm_input_unregister_afinfo" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

