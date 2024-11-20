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

KSYMTAB_FUNC(raid_class_attach, "", "");
KSYMTAB_FUNC(raid_class_release, "", "");

SYMBOL_CRC(raid_class_attach, 0x83093940, "");
SYMBOL_CRC(raid_class_release, 0xeda5b7d6, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xdedf4785, "device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x868e51aa, "attribute_container_unregister" },
	{ 0x64925e0c, "transport_class_register" },
	{ 0x49367283, "transport_class_unregister" },
	{ 0x18b1a5c4, "scsi_is_sdev_device" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x5b6107f5, "attribute_container_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4a79fe2e, "attribute_container_classdev_to_container" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe3a61ac6, "_dev_printk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_mod");

