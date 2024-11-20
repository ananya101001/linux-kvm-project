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

KSYMTAB_DATA(nf_nat_snmp_hook, "_gpl", "");

SYMBOL_CRC(nf_nat_snmp_hook, 0xb0504f1b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x45a3a559, "nf_conntrack_broadcast_help" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x979a7de0, "nf_conntrack_helper_unregister" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf6f05b8, "nf_conntrack_helper_register" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack_broadcast,nf_conntrack");

