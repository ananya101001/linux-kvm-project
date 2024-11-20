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
	{ 0xea43f98d, "misc_register" },
	{ 0x8d8eecb1, "class_destroy" },
	{ 0x63a7a96c, "fuse_sync_release" },
	{ 0xba6096b2, "fuse_conn_put" },
	{ 0x9743ad48, "fuse_conn_get" },
	{ 0x676dd115, "fuse_do_open" },
	{ 0x60dc295b, "fuse_do_ioctl" },
	{ 0x4fb55bc, "fuse_direct_io" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x754d539c, "strlen" },
	{ 0x85df9b6c, "strsep" },
	{ 0x77bc13a0, "strim" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xca844bc7, "put_device" },
	{ 0x122c3a7e, "_printk" },
	{ 0x934ea33f, "device_add" },
	{ 0xd7b1a882, "cdev_alloc" },
	{ 0x30149b9, "cdev_add" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xaedb2a25, "kobject_uevent" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xeb5c539e, "fuse_dev_fiq_ops" },
	{ 0xa649c9b9, "fuse_conn_init" },
	{ 0x267a4298, "fuse_dev_alloc_install" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x884a43df, "fuse_simple_background" },
	{ 0x3ecfd791, "fuse_dev_free" },
	{ 0x2a71977a, "noop_llseek" },
	{ 0xe0111838, "fuse_file_poll" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xee97a1d3, "fuse_abort_conn" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdedf4785, "device_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xce767f9d, "cdev_del" },
	{ 0x416fabd, "fuse_dev_release" },
	{ 0x37a0cba, "kfree" },
	{ 0xf7309174, "fuse_dev_operations" },
	{ 0xc101b80e, "class_create" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "fuse");

