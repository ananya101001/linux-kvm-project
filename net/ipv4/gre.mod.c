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

KSYMTAB_FUNC(gre_add_protocol, "_gpl", "");
KSYMTAB_FUNC(gre_del_protocol, "_gpl", "");
KSYMTAB_FUNC(gre_parse_header, "", "");

SYMBOL_CRC(gre_add_protocol, 0xe8a6d928, "_gpl");
SYMBOL_CRC(gre_del_protocol, 0xc2eedcbe, "_gpl");
SYMBOL_CRC(gre_parse_header, 0xe289201b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x38c39e07, "inet_add_protocol" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x8db86cae, "inet_del_protocol" },
	{ 0x126aae90, "__skb_checksum_complete" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

