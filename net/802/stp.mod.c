#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(stp_proto_register, "_gpl", "");
KSYMTAB_FUNC(stp_proto_unregister, "_gpl", "");

SYMBOL_CRC(stp_proto_register, 0x157d0334, "_gpl");
SYMBOL_CRC(stp_proto_unregister, 0x4c600a76, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x541a86af, "llc_sap_open" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x42bd4e3c, "llc_sap_close" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "llc");

