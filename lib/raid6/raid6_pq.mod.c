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

KSYMTAB_DATA(raid6_empty_zero_page, "", "");
KSYMTAB_DATA(raid6_call, "_gpl", "");
KSYMTAB_DATA(raid6_2data_recov, "_gpl", "");
KSYMTAB_DATA(raid6_datap_recov, "_gpl", "");
KSYMTAB_DATA(raid6_gfmul, "", "");
KSYMTAB_DATA(raid6_vgfmul, "", "");
KSYMTAB_DATA(raid6_gfexp, "", "");
KSYMTAB_DATA(raid6_gflog, "", "");
KSYMTAB_DATA(raid6_gfinv, "", "");
KSYMTAB_DATA(raid6_gfexi, "", "");

SYMBOL_CRC(raid6_empty_zero_page, 0xb0d904b7, "");
SYMBOL_CRC(raid6_call, 0x804a5b70, "_gpl");
SYMBOL_CRC(raid6_2data_recov, 0x1803a6ed, "_gpl");
SYMBOL_CRC(raid6_datap_recov, 0xe4b051cf, "_gpl");
SYMBOL_CRC(raid6_gfmul, 0xd91319d6, "");
SYMBOL_CRC(raid6_vgfmul, 0x0b2c64a3, "");
SYMBOL_CRC(raid6_gfexp, 0x17f54263, "");
SYMBOL_CRC(raid6_gflog, 0xc8e3332b, "");
SYMBOL_CRC(raid6_gfinv, 0x59a2712d, "");
SYMBOL_CRC(raid6_gfexi, 0xcc4ee841, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

