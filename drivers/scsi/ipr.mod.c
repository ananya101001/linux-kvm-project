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
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x5a549f7, "_dev_info" },
	{ 0xe2964344, "__wake_up" },
	{ 0x96848186, "scnprintf" },
	{ 0xcfeca16c, "sdev_prefix_printk" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xa6257a2f, "complete" },
	{ 0x4836cf95, "dma_unmap_sg_attrs" },
	{ 0xf635e4fa, "pci_save_state" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x54c15cee, "dma_free_attrs" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x754d539c, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0x3cb5f497, "scsi_change_queue_depth" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4e64974, "pci_restore_state" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7188fd5f, "pci_find_capability" },
	{ 0x66db1387, "pci_write_config_word" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xe5279558, "pci_cfg_access_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x69acdf38, "memcpy" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x6a6d16d1, "scsi_is_host_device" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x797e5068, "pci_read_config_word" },
	{ 0xd5c1f6ea, "pci_cfg_access_trylock" },
	{ 0x31846250, "pci_write_config_byte" },
	{ 0x14cca081, "scsi_dma_unmap" },
	{ 0xecbb1768, "scsi_done" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x6e96bbd6, "scmd_printk" },
	{ 0x61a149aa, "scsi_report_bus_reset" },
	{ 0xc67c7580, "scsi_add_device" },
	{ 0xaedb2a25, "kobject_uevent" },
	{ 0xf2cf1a80, "scsi_device_get" },
	{ 0x4d0bac1, "scsi_remove_device" },
	{ 0x8ffb42d6, "scsi_device_put" },
	{ 0xf4725b80, "scsi_block_requests" },
	{ 0xf2f6c559, "scsi_unblock_requests" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x999e8297, "vfree" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1000e51, "schedule" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x8bc25944, "pci_irq_vector" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4f9c66e8, "pci_free_irq_vectors" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xedc03953, "iounmap" },
	{ 0xdfaa93c9, "pci_release_regions" },
	{ 0x72705ca2, "scsi_host_put" },
	{ 0x544253f5, "pci_disable_device" },
	{ 0xe11820ff, "sysfs_remove_bin_file" },
	{ 0xa4c8accd, "scsi_remove_host" },
	{ 0x52054540, "pci_set_pcie_reset_state" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc6cbbc89, "capable" },
	{ 0x909396f0, "dma_map_sg_attrs" },
	{ 0x349cba85, "strchr" },
	{ 0x609e2ec3, "request_firmware" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xc2cb862e, "sgl_alloc_order" },
	{ 0x891dbb8f, "sgl_free_order" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xfb578fc5, "memset" },
	{ 0xf7370f56, "system_state" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x7b1a0218, "scsi_host_alloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb2cacf1e, "pci_request_regions" },
	{ 0xaad21b46, "pci_enable_device" },
	{ 0xe309dde, "pci_ioremap_bar" },
	{ 0xe1779b47, "dma_set_mask" },
	{ 0x4dce513f, "dma_set_coherent_mask" },
	{ 0x7547b4a, "pci_alloc_irq_vectors" },
	{ 0xb72e7d4e, "pci_set_master" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x483e46cf, "scsi_add_host_with_dma" },
	{ 0x3117c2cd, "sysfs_create_bin_file" },
	{ 0xd1e3ccd, "scsi_scan_host" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x25d9a822, "dma_alloc_attrs" },
	{ 0x5dfd4352, "dma_pool_create" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0xa916b694, "strnlen" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xb033617e, "blk_queue_rq_timeout" },
	{ 0x3a337acd, "scsi_dma_map" },
	{ 0x56470118, "__warn_printk" },
	{ 0x77bc13a0, "strim" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_mod,scsi_common");

MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd00000266bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd00000278bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd000002D4bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd000002D3bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd000002BEbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd0000028Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd000002C0bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd0000030Dbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd000002C1bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd000002C2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd00000338bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd000002C1bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd000002C2bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd00000338bc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000030Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000033Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000035Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd00000360bc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000180sv00001014sd00000264bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002BFbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002D5bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002C3bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd0000033Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000356bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd0000035Fbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000352bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000353bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000354bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000033Bbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000355bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000357bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000035Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000035Ebc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FBbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FCbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FFbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FEbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000046Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004CAbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000474bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000475bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000499bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Bbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C7bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C8bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C9bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000004DAsv00001014sd000004FCbc*sc*i*");
MODULE_ALIAS("pci:v00001014d000004DAsv00001014sd000004FBbc*sc*i*");

MODULE_INFO(srcversion, "9E534974B4A3D7ABE00E3DF");
