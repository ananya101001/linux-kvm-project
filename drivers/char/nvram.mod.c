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

KSYMTAB_DATA(arch_nvram_ops, "", "");

SYMBOL_CRC(arch_nvram_ops, 0x3ef38dc9, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xab3fc466, "remove_proc_entry" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x377214d3, "seq_printf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xea43f98d, "misc_register" },
	{ 0x4b16762f, "proc_create_single_data" },
	{ 0x122c3a7e, "_printk" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9e64fbfe, "rtc_cmos_read" },
	{ 0x7040fff9, "rtc_lock" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2def7f76, "rtc_cmos_write" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x70576a70, "generic_file_llseek_size" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

