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

KSYMTAB_FUNC(vfio_pci_core_enable, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_disable, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_close_device, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_finish_enable, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_register_dev_region, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_ioctl, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_ioctl_feature, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_read, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_write, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_mmap, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_request, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_match, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_init_dev, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_release_dev, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_register_device, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_unregister_device, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_aer_err_detected, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_sriov_configure, "_gpl", "");
KSYMTAB_DATA(vfio_pci_core_err_handlers, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_set_params, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_iowrite8, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_iowrite16, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_iowrite32, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_ioread8, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_ioread16, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_ioread32, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_do_io_rw, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_setup_barmap, "_gpl", "");
KSYMTAB_FUNC(vfio_pci_core_range_intersect_range, "_gpl", "");

SYMBOL_CRC(vfio_pci_core_enable, 0x50f5e60e, "_gpl");
SYMBOL_CRC(vfio_pci_core_disable, 0x244d79b4, "_gpl");
SYMBOL_CRC(vfio_pci_core_close_device, 0x0e2960e5, "_gpl");
SYMBOL_CRC(vfio_pci_core_finish_enable, 0x316f5af0, "_gpl");
SYMBOL_CRC(vfio_pci_core_register_dev_region, 0x92083d5b, "_gpl");
SYMBOL_CRC(vfio_pci_core_ioctl, 0xf5ca20b7, "_gpl");
SYMBOL_CRC(vfio_pci_core_ioctl_feature, 0x1b734cbf, "_gpl");
SYMBOL_CRC(vfio_pci_core_read, 0x8bd6a344, "_gpl");
SYMBOL_CRC(vfio_pci_core_write, 0x166c509b, "_gpl");
SYMBOL_CRC(vfio_pci_core_mmap, 0x38ec7678, "_gpl");
SYMBOL_CRC(vfio_pci_core_request, 0x3653b5d9, "_gpl");
SYMBOL_CRC(vfio_pci_core_match, 0x1c2e160f, "_gpl");
SYMBOL_CRC(vfio_pci_core_init_dev, 0x8294861a, "_gpl");
SYMBOL_CRC(vfio_pci_core_release_dev, 0x8d1d7d5d, "_gpl");
SYMBOL_CRC(vfio_pci_core_register_device, 0x8b5fbcd4, "_gpl");
SYMBOL_CRC(vfio_pci_core_unregister_device, 0xbef200ca, "_gpl");
SYMBOL_CRC(vfio_pci_core_aer_err_detected, 0x77830d41, "_gpl");
SYMBOL_CRC(vfio_pci_core_sriov_configure, 0x8ca2af7a, "_gpl");
SYMBOL_CRC(vfio_pci_core_err_handlers, 0x9a02ecc5, "_gpl");
SYMBOL_CRC(vfio_pci_core_set_params, 0x4cf699b8, "_gpl");
SYMBOL_CRC(vfio_pci_core_iowrite8, 0xbd6d1744, "_gpl");
SYMBOL_CRC(vfio_pci_core_iowrite16, 0x6c7efcbb, "_gpl");
SYMBOL_CRC(vfio_pci_core_iowrite32, 0x056480af, "_gpl");
SYMBOL_CRC(vfio_pci_core_ioread8, 0x1e0fbdd1, "_gpl");
SYMBOL_CRC(vfio_pci_core_ioread16, 0x9ee8f478, "_gpl");
SYMBOL_CRC(vfio_pci_core_ioread32, 0xe9f57720, "_gpl");
SYMBOL_CRC(vfio_pci_core_do_io_rw, 0xc4db242c, "_gpl");
SYMBOL_CRC(vfio_pci_core_setup_barmap, 0xa993a108, "_gpl");
SYMBOL_CRC(vfio_pci_core_range_intersect_range, 0xe850ca1f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xab25598b, "pci_set_power_state" },
	{ 0x8bc25944, "pci_irq_vector" },
	{ 0xf2c53d53, "pci_write_msi_msg" },
	{ 0x89485687, "iommu_group_put" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3be2ccd0, "pci_read_config_dword" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xb974d643, "pci_intx" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcd11aca6, "pci_user_write_config_word" },
	{ 0xa5957631, "bus_register_notifier" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x77892119, "vfio_file_is_group" },
	{ 0x62c5f6d5, "pci_msix_can_alloc_dyn" },
	{ 0xf2fca409, "vfio_file_has_dev" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x71f1d83b, "pci_clear_master" },
	{ 0x2f2753ce, "__pci_reset_function_locked" },
	{ 0x98378a1d, "cc_mkdec" },
	{ 0x6e7943ec, "iommu_group_id" },
	{ 0x69e683de, "uuid_gen" },
	{ 0x37712435, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x418873cc, "irq_bypass_register_producer" },
	{ 0x74a47b49, "pci_write_vpd" },
	{ 0x2f6c3097, "vfio_virqfd_enable" },
	{ 0xc5e99260, "vga_client_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x797e5068, "pci_read_config_word" },
	{ 0x5a921311, "strncmp" },
	{ 0x52d4dae5, "aperture_remove_conflicting_pci_devices" },
	{ 0x353484e6, "vfio_unregister_group_dev" },
	{ 0x6668bb2, "pci_map_rom" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xf392aadf, "pci_store_saved_state" },
	{ 0xabb7c7c2, "get_cached_msi_msg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbfee4f4c, "pci_iounmap" },
	{ 0x4e64974, "pci_restore_state" },
	{ 0xb19b445, "ioread8" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x9c075a2a, "pcie_get_mps" },
	{ 0x1d2f1cee, "pci_dev_trylock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb67fec0e, "uuid_parse" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0x6c28be5a, "vfio_info_add_capability" },
	{ 0x890e3de1, "pci_dev_driver" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x745a981, "xa_erase" },
	{ 0x56160fed, "vfio_find_device_in_devset" },
	{ 0xf6e772c3, "irq_bypass_unregister_producer" },
	{ 0xe726acf2, "_dev_notice" },
	{ 0x67b9625c, "pm_runtime_forbid" },
	{ 0xde191a29, "pm_runtime_allow" },
	{ 0xce411868, "pci_reset_bus" },
	{ 0x8188f58f, "__pm_runtime_resume" },
	{ 0x3004042e, "vfio_register_group_dev" },
	{ 0x2af6b088, "vfio_assign_device_set" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1ddcd7ad, "pci_user_read_config_byte" },
	{ 0xd2f02019, "pci_try_reset_function" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x336481db, "pci_get_class" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7ee1da8b, "pci_user_write_config_dword" },
	{ 0x84b1bf5f, "pcie_capability_read_dword" },
	{ 0x3a6d574, "pci_load_and_free_saved_state" },
	{ 0x1651d3ce, "pci_disable_sriov" },
	{ 0x48ee7465, "vfio_device_set_open_count" },
	{ 0x544253f5, "pci_disable_device" },
	{ 0xc6140db5, "pci_match_id" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x7867b713, "pci_check_and_unmask_intx" },
	{ 0x5e4458f5, "pcie_set_readrq" },
	{ 0x6efcc1bc, "pci_walk_bus" },
	{ 0x1f13ee2, "pci_msix_alloc_irq_at" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xd7a9e416, "pci_unmap_rom" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x798dd6b1, "pci_read_config_byte" },
	{ 0xc5e74216, "release_resource" },
	{ 0x754d539c, "strlen" },
	{ 0xab2be559, "vga_set_legacy_decoding" },
	{ 0x4625c732, "vmf_insert_pfn_pmd" },
	{ 0x3bff2988, "vmf_insert_pfn_pud" },
	{ 0xeba534dc, "pci_dev_unlock" },
	{ 0x66db1387, "pci_write_config_word" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc10e997, "eventfd_signal_mask" },
	{ 0x4f9c66e8, "pci_free_irq_vectors" },
	{ 0xbd268111, "pci_enable_sriov" },
	{ 0x53b954a2, "up_read" },
	{ 0x538246ce, "__pm_runtime_idle" },
	{ 0xbf74048a, "vfio_virqfd_flush_thread" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xe2eaa37c, "pci_bus_type" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0xf635e4fa, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13110126, "request_resource" },
	{ 0x21857e5b, "vmf_insert_pfn" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x55901d2c, "pci_read_vpd" },
	{ 0x42f6690f, "bus_unregister_notifier" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc9751130, "pci_request_selected_regions" },
	{ 0x3dae33b, "pci_release_selected_regions" },
	{ 0x541b618e, "pci_user_write_config_byte" },
	{ 0xaad21b46, "pci_enable_device" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x81ff19a1, "pci_bus_max_busnr" },
	{ 0x35f3a007, "pci_check_and_mask_intx" },
	{ 0x1f48acd, "pci_iomap" },
	{ 0x19567d06, "vfio_info_cap_shift" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x7547b4a, "pci_alloc_irq_vectors" },
	{ 0xadc044b7, "vfio_set_irqs_validate_and_prepare" },
	{ 0x73e388dd, "pci_enable_atomic_ops_to_root" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xf727c35a, "pci_dev_put" },
	{ 0x2771f835, "iommu_group_get" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x5e7cc1e7, "vfio_virqfd_disable" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x61e1334, "fget" },
	{ 0x64bfcca9, "pci_num_vf" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8da3b374, "unmap_mapping_range" },
	{ 0x13f6b9e7, "pci_user_read_config_dword" },
	{ 0x37a0cba, "kfree" },
	{ 0x76d0885b, "pci_user_read_config_word" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x47a19caf, "pci_probe_reset_bus" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x1ede9e43, "pci_probe_reset_slot" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "vfio");

