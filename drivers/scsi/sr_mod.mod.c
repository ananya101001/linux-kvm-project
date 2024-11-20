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
	{ 0x5e69b622, "scsi_block_when_processing_errors" },
	{ 0x80131ca2, "put_disk" },
	{ 0x4f899bc7, "scsi_ioctl" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfb23ba51, "blk_execute_rq" },
	{ 0x42f9b424, "blk_mq_free_request" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8ffb42d6, "scsi_device_put" },
	{ 0xce1b39ef, "cdrom_get_last_written" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x3b8e74e3, "cdrom_check_events" },
	{ 0xd897d355, "blk_rq_map_user" },
	{ 0xd7be87d8, "set_capacity" },
	{ 0x69212db2, "cdrom_get_media_event" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcfeca16c, "sdev_prefix_printk" },
	{ 0x6aae782e, "driver_unregister" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x59c98678, "del_gendisk" },
	{ 0xbd5cb599, "cdrom_release" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x66f36e00, "blk_rq_unmap_user" },
	{ 0x13cb982a, "scsi_alloc_sgtables" },
	{ 0x9898486b, "scsi_autopm_get_device" },
	{ 0xb4e14f8f, "__scsi_register_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xce2667da, "blk_mq_freeze_queue" },
	{ 0x6d83345e, "cdrom_open" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x6e96bbd6, "scmd_printk" },
	{ 0x5407a918, "scsi_execute_cmd" },
	{ 0x51f342fc, "scsi_free_sgtables" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x9a10cdbe, "disk_check_media_change" },
	{ 0xf5e5c28c, "blk_dump_rq_flags" },
	{ 0x8677e984, "unregister_cdrom" },
	{ 0xcf3cd7e, "blk_mq_unfreeze_queue" },
	{ 0x353b6112, "scsi_ioctl_block_when_processing_errors" },
	{ 0xf3c6aee3, "scsi_alloc_request" },
	{ 0xb837b08e, "queue_limits_commit_update" },
	{ 0x2ff715a7, "blkdev_compat_ptr_ioctl" },
	{ 0xbe6fc45, "cdrom_number_of_slots" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb033617e, "blk_queue_rq_timeout" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x21564da5, "scsi_set_medium_removal" },
	{ 0x2ab3d198, "scsi_mode_sense" },
	{ 0x64498edb, "scsi_autopm_put_device" },
	{ 0xf2cf1a80, "scsi_device_get" },
	{ 0x69e9c1d7, "device_add_disk" },
	{ 0x821b4f1b, "register_cdrom" },
	{ 0x75ae2c58, "blk_pm_runtime_init" },
	{ 0xb36802d5, "cdrom_ioctl" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0xca37042f, "blk_mq_alloc_disk_for_queue" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x184fa3d5, "scsi_test_unit_ready" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_mod,cdrom,scsi_common");

