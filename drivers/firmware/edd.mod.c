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
	{ 0x96848186, "scnprintf" },
	{ 0x11089ac7, "_ctype" },
	{ 0x754d539c, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x7ab30f45, "kobject_put" },
	{ 0xb4fd855b, "kset_unregister" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc83dee71, "firmware_kobj" },
	{ 0xaf77d964, "kset_create_and_add" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x9f7d1bf1, "kobject_init_and_add" },
	{ 0x9d1e6054, "pci_get_domain_bus_and_slot" },
	{ 0x5cad8430, "sysfs_create_link" },
	{ 0xf727c35a, "pci_dev_put" },
	{ 0xaedb2a25, "kobject_uevent" },
	{ 0xc62c42cf, "sysfs_create_file_ns" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x607b34f1, "edd" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8AB2A19ABA541757449E64D");
