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

KSYMTAB_FUNC(uio_event_notify, "_gpl", "");
KSYMTAB_FUNC(__uio_register_device, "_gpl", "");
KSYMTAB_FUNC(__devm_uio_register_device, "_gpl", "");
KSYMTAB_FUNC(uio_unregister_device, "_gpl", "");

SYMBOL_CRC(uio_event_notify, 0x89a9721d, "_gpl");
SYMBOL_CRC(__uio_register_device, 0x4d175ef4, "_gpl");
SYMBOL_CRC(__devm_uio_register_device, 0x0e367f9c, "_gpl");
SYMBOL_CRC(uio_unregister_device, 0x308786e4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xce807a25, "up_write" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xcdcfd934, "dma_mmap_attrs" },
	{ 0x805bc397, "remap_pfn_range" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xd7b1a882, "cdev_alloc" },
	{ 0x356b9af6, "kobject_set_name" },
	{ 0x30149b9, "cdev_add" },
	{ 0x4a958e37, "class_register" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x122c3a7e, "_printk" },
	{ 0xce767f9d, "cdev_del" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x934ea33f, "device_add" },
	{ 0x59f073a6, "kobject_create_and_add" },
	{ 0x7be0f43, "kobject_init" },
	{ 0xe6217930, "kobject_add" },
	{ 0xaedb2a25, "kobject_uevent" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc04e9955, "device_del" },
	{ 0xbe5b632e, "__devres_alloc_node" },
	{ 0xf401d1a8, "devres_add" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xdedf4785, "device_unregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xe059a232, "generic_access_phys" },
	{ 0x2a71977a, "noop_llseek" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe2964344, "__wake_up" },
	{ 0xa23d56ab, "kill_fasync" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x7ab30f45, "kobject_put" },
	{ 0x3403f878, "fasync_helper" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xca844bc7, "put_device" },
	{ 0x20978fb9, "idr_find" },
	{ 0x3131271a, "get_device" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x4ec8d88, "vmalloc_to_page" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x57bc19d2, "down_write" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

