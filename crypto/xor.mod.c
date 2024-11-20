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

KSYMTAB_FUNC(xor_blocks, "", "");

SYMBOL_CRC(xor_blocks, 0x5b6c00e6, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

