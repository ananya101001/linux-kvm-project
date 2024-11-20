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

KSYMTAB_FUNC(cdrom_dummy_generic_packet, "", "");
KSYMTAB_FUNC(register_cdrom, "", "");
KSYMTAB_FUNC(unregister_cdrom, "", "");
KSYMTAB_FUNC(cdrom_get_media_event, "", "");
KSYMTAB_FUNC(cdrom_open, "", "");
KSYMTAB_FUNC(cdrom_release, "", "");
KSYMTAB_FUNC(cdrom_number_of_slots, "", "");
KSYMTAB_FUNC(cdrom_check_events, "", "");
KSYMTAB_FUNC(init_cdrom_command, "", "");
KSYMTAB_FUNC(cdrom_mode_sense, "", "");
KSYMTAB_FUNC(cdrom_mode_select, "", "");
KSYMTAB_FUNC(cdrom_multisession, "_gpl", "");
KSYMTAB_FUNC(cdrom_read_tocentry, "_gpl", "");
KSYMTAB_FUNC(cdrom_get_last_written, "", "");
KSYMTAB_FUNC(cdrom_ioctl, "", "");

SYMBOL_CRC(cdrom_dummy_generic_packet, 0x7bbb1f6a, "");
SYMBOL_CRC(register_cdrom, 0x821b4f1b, "");
SYMBOL_CRC(unregister_cdrom, 0x8677e984, "");
SYMBOL_CRC(cdrom_get_media_event, 0x69212db2, "");
SYMBOL_CRC(cdrom_open, 0x6d83345e, "");
SYMBOL_CRC(cdrom_release, 0xbd5cb599, "");
SYMBOL_CRC(cdrom_number_of_slots, 0x0be6fc45, "");
SYMBOL_CRC(cdrom_check_events, 0x3b8e74e3, "");
SYMBOL_CRC(init_cdrom_command, 0xbb24f607, "");
SYMBOL_CRC(cdrom_mode_sense, 0x255cc2c1, "");
SYMBOL_CRC(cdrom_mode_select, 0xea547981, "");
SYMBOL_CRC(cdrom_multisession, 0x470a3295, "_gpl");
SYMBOL_CRC(cdrom_read_tocentry, 0xd730984c, "_gpl");
SYMBOL_CRC(cdrom_get_last_written, 0xce1b39ef, "");
SYMBOL_CRC(cdrom_ioctl, 0xb36802d5, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1ed10558, "proc_dostring" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd80008b1, "invalidate_bdev" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfb578fc5, "memset" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x37a0cba, "kfree" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1693c4c3, "unregister_sysctl_table" },
	{ 0x3bd45f5c, "register_sysctl_sz" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0x96848186, "scnprintf" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

