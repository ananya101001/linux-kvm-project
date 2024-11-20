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

KSYMTAB_FUNC(mqprio_validate_qopt, "_gpl", "");
KSYMTAB_FUNC(mqprio_qopt_reconstruct, "_gpl", "");
KSYMTAB_FUNC(mqprio_fp_to_offload, "_gpl", "");

SYMBOL_CRC(mqprio_validate_qopt, 0x347b0b56, "_gpl");
SYMBOL_CRC(mqprio_qopt_reconstruct, 0x8f717072, "_gpl");
SYMBOL_CRC(mqprio_fp_to_offload, 0xa59d46b5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

