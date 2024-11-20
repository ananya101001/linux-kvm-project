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
	{ 0x37a0cba, "kfree" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0xedc03953, "iounmap" },
	{ 0x77358855, "iomem_resource" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xcc09a84e, "sysfs_remove_file_ns" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xc9f34c1d, "acpi_acquire_global_lock" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfb578fc5, "memset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xb19b445, "ioread8" },
	{ 0xfbab1bb1, "ioread8_rep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa805ecfc, "acpi_release_global_lock" },
	{ 0x26f8f0b8, "iowrite16be" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xaf77d964, "kset_create_and_add" },
	{ 0x1d8e83ac, "platform_get_resource" },
	{ 0x85bd1608, "__request_region" },
	{ 0x594bf15b, "ioport_map" },
	{ 0xe3434d1e, "platform_get_resource_byname" },
	{ 0xc62c42cf, "sysfs_create_file_ns" },
	{ 0xde80cd09, "ioremap" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x9f7d1bf1, "kobject_init_and_add" },
	{ 0x3117c2cd, "sysfs_create_bin_file" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe497e923, "kset_find_obj" },
	{ 0x356b9af6, "kobject_set_name" },
	{ 0xafd7b2b0, "kset_register" },
	{ 0x5cad8430, "sysfs_create_link" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x1bf55fc, "paddr_vmcoreinfo_note" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x122c3a7e, "_printk" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc83dee71, "firmware_kobj" },
	{ 0x59f073a6, "kobject_create_and_add" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0xf24e5dec, "kobject_del" },
	{ 0x7ab30f45, "kobject_put" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb4fd855b, "kset_unregister" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:QEMU0002:*");
MODULE_ALIAS("of:N*T*Cqemu,fw-cfg-mmio");
MODULE_ALIAS("of:N*T*Cqemu,fw-cfg-mmioC*");
