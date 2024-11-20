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
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x5407a918, "scsi_execute_cmd" },
	{ 0xb04ce688, "scsi_print_sense_hdr" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcfeca16c, "sdev_prefix_printk" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x20978fb9, "idr_find" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf2cf1a80, "scsi_device_get" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x37a0cba, "kfree" },
	{ 0x8ffb42d6, "scsi_device_put" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x50785e75, "device_destroy" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x954f099c, "idr_preload" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5d480ef3, "device_create" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xaef41929, "scsi_device_lookup" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x353b6112, "scsi_ioctl_block_when_processing_errors" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4f899bc7, "scsi_ioctl" },
	{ 0x2a71977a, "noop_llseek" },
	{ 0xc81ce80d, "compat_ptr_ioctl" },
	{ 0x73108bd5, "param_array_ops" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4a958e37, "class_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4d8e509f, "__register_chrdev" },
	{ 0xb4e14f8f, "__scsi_register_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x6aae782e, "driver_unregister" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_mod");

