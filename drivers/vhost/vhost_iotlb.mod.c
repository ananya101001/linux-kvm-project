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

KSYMTAB_FUNC(vhost_iotlb_map_free, "_gpl", "");
KSYMTAB_FUNC(vhost_iotlb_add_range_ctx, "_gpl", "");
KSYMTAB_FUNC(vhost_iotlb_add_range, "_gpl", "");
KSYMTAB_FUNC(vhost_iotlb_del_range, "_gpl", "");
KSYMTAB_FUNC(vhost_iotlb_init, "_gpl", "");
KSYMTAB_FUNC(vhost_iotlb_alloc, "_gpl", "");
KSYMTAB_FUNC(vhost_iotlb_reset, "_gpl", "");
KSYMTAB_FUNC(vhost_iotlb_free, "_gpl", "");
KSYMTAB_FUNC(vhost_iotlb_itree_first, "_gpl", "");
KSYMTAB_FUNC(vhost_iotlb_itree_next, "_gpl", "");

SYMBOL_CRC(vhost_iotlb_map_free, 0xf9deb0db, "_gpl");
SYMBOL_CRC(vhost_iotlb_add_range_ctx, 0x885512a2, "_gpl");
SYMBOL_CRC(vhost_iotlb_add_range, 0x38ff875f, "_gpl");
SYMBOL_CRC(vhost_iotlb_del_range, 0x6bec0e66, "_gpl");
SYMBOL_CRC(vhost_iotlb_init, 0x8a7d8ee9, "_gpl");
SYMBOL_CRC(vhost_iotlb_alloc, 0xc577832d, "_gpl");
SYMBOL_CRC(vhost_iotlb_reset, 0x5f4e5249, "_gpl");
SYMBOL_CRC(vhost_iotlb_free, 0xa24517eb, "_gpl");
SYMBOL_CRC(vhost_iotlb_itree_first, 0x69e872f9, "_gpl");
SYMBOL_CRC(vhost_iotlb_itree_next, 0x83be64b9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xca9360b5, "rb_next" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "296B63318D245963CFD0B8B");
