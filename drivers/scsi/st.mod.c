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
	{ 0x686a1b5, "__free_pages" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd5a5a065, "pin_user_pages_fast" },
	{ 0xfb578fc5, "memset" },
	{ 0xdf36bc0b, "unpin_user_pages" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8ffb42d6, "scsi_device_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x21564da5, "scsi_set_medium_removal" },
	{ 0x5e69b622, "scsi_block_when_processing_errors" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xb0e602eb, "memmove" },
	{ 0xcb3888f2, "unpin_user_pages_dirty_lock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x20978fb9, "idr_find" },
	{ 0xf2cf1a80, "scsi_device_get" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x353b6112, "scsi_ioctl_block_when_processing_errors" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4f899bc7, "scsi_ioctl" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x2a71977a, "noop_llseek" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4a958e37, "class_register" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xb4e14f8f, "__scsi_register_driver" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x96848186, "scnprintf" },
	{ 0x7b68bebe, "sysfs_remove_link" },
	{ 0xce767f9d, "cdev_del" },
	{ 0xdedf4785, "device_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd7b1a882, "cdev_alloc" },
	{ 0x30149b9, "cdev_add" },
	{ 0x5d480ef3, "device_create" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa6257a2f, "complete" },
	{ 0x66f36e00, "blk_rq_unmap_user" },
	{ 0x42f9b424, "blk_mq_free_request" },
	{ 0x6aae782e, "driver_unregister" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xcfeca16c, "sdev_prefix_printk" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xe446487a, "__scsi_print_sense" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x37a0cba, "kfree" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x754d539c, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x9898486b, "scsi_autopm_get_device" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb033617e, "blk_queue_rq_timeout" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x954f099c, "idr_preload" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x5cad8430, "sysfs_create_link" },
	{ 0x64498edb, "scsi_autopm_put_device" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf3c6aee3, "scsi_alloc_request" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x7efc2c75, "blk_execute_rq_nowait" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xd897d355, "blk_rq_map_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_mod,scsi_common");

