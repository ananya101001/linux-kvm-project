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

KSYMTAB_FUNC(nvdimm_bus_lock, "", "");
KSYMTAB_FUNC(nvdimm_bus_unlock, "", "");
KSYMTAB_FUNC(is_nvdimm_bus_locked, "", "");
KSYMTAB_FUNC(devm_nvdimm_memremap, "_gpl", "");
KSYMTAB_FUNC(nd_fletcher64, "_gpl", "");
KSYMTAB_FUNC(to_nd_desc, "_gpl", "");
KSYMTAB_FUNC(to_nvdimm_bus_dev, "_gpl", "");
KSYMTAB_FUNC(nvdimm_bus_add_badrange, "_gpl", "");
KSYMTAB_FUNC(nd_device_notify, "", "");
KSYMTAB_FUNC(nvdimm_region_notify, "_gpl", "");
KSYMTAB_FUNC(nvdimm_clear_poison, "_gpl", "");
KSYMTAB_FUNC(to_nvdimm_bus, "_gpl", "");
KSYMTAB_FUNC(nvdimm_to_bus, "_gpl", "");
KSYMTAB_FUNC(nvdimm_bus_register, "_gpl", "");
KSYMTAB_FUNC(nvdimm_bus_unregister, "_gpl", "");
KSYMTAB_FUNC(nd_synchronize, "_gpl", "");
KSYMTAB_FUNC(nd_device_register, "", "");
KSYMTAB_FUNC(nd_device_unregister, "", "");
KSYMTAB_FUNC(__nd_driver_register, "", "");
KSYMTAB_FUNC(nvdimm_check_and_set_ro, "", "");
KSYMTAB_FUNC(nd_cmd_dimm_desc, "_gpl", "");
KSYMTAB_FUNC(nd_cmd_bus_desc, "_gpl", "");
KSYMTAB_FUNC(nd_cmd_in_size, "_gpl", "");
KSYMTAB_FUNC(nd_cmd_out_size, "_gpl", "");
KSYMTAB_FUNC(to_nvdimm, "_gpl", "");
KSYMTAB_FUNC(to_ndd, "", "");
KSYMTAB_FUNC(nvdimm_name, "_gpl", "");
KSYMTAB_FUNC(nvdimm_kobj, "_gpl", "");
KSYMTAB_FUNC(nvdimm_cmd_mask, "_gpl", "");
KSYMTAB_FUNC(nvdimm_provider_data, "_gpl", "");
KSYMTAB_FUNC(__nvdimm_create, "_gpl", "");
KSYMTAB_FUNC(nvdimm_delete, "_gpl", "");
KSYMTAB_FUNC(nvdimm_security_setup_events, "_gpl", "");
KSYMTAB_FUNC(nvdimm_in_overwrite, "_gpl", "");
KSYMTAB_FUNC(nvdimm_bus_check_dimm_count, "_gpl", "");
KSYMTAB_FUNC(register_nvdimm_pmu, "_gpl", "");
KSYMTAB_FUNC(unregister_nvdimm_pmu, "_gpl", "");
KSYMTAB_FUNC(to_nd_region, "_gpl", "");
KSYMTAB_FUNC(nd_region_dev, "_gpl", "");
KSYMTAB_FUNC(nd_region_provider_data, "_gpl", "");
KSYMTAB_FUNC(nd_region_to_nstype, "", "");
KSYMTAB_FUNC(nd_region_acquire_lane, "", "");
KSYMTAB_FUNC(nd_region_release_lane, "", "");
KSYMTAB_FUNC(nvdimm_pmem_region_create, "_gpl", "");
KSYMTAB_FUNC(nvdimm_volatile_region_create, "_gpl", "");
KSYMTAB_FUNC(nvdimm_region_delete, "_gpl", "");
KSYMTAB_FUNC(nvdimm_flush, "_gpl", "");
KSYMTAB_FUNC(nvdimm_has_flush, "_gpl", "");
KSYMTAB_FUNC(nvdimm_has_cache, "_gpl", "");
KSYMTAB_FUNC(is_nvdimm_sync, "_gpl", "");
KSYMTAB_FUNC(pmem_should_map_pages, "", "");
KSYMTAB_FUNC(pmem_sector_size, "", "");
KSYMTAB_FUNC(nvdimm_namespace_disk_name, "", "");
KSYMTAB_FUNC(nd_dev_to_uuid, "", "");
KSYMTAB_FUNC(nvdimm_namespace_capacity, "", "");
KSYMTAB_FUNC(nvdimm_namespace_locked, "", "");
KSYMTAB_FUNC(nvdimm_namespace_common_probe, "", "");
KSYMTAB_FUNC(devm_namespace_enable, "_gpl", "");
KSYMTAB_FUNC(devm_namespace_disable, "_gpl", "");
KSYMTAB_FUNC(badrange_init, "_gpl", "");
KSYMTAB_FUNC(badrange_add, "_gpl", "");
KSYMTAB_FUNC(badrange_forget, "_gpl", "");
KSYMTAB_FUNC(nvdimm_badblocks_populate, "_gpl", "");
KSYMTAB_FUNC(nd_sb_checksum, "", "");
KSYMTAB_FUNC(to_nd_btt, "", "");
KSYMTAB_FUNC(is_nd_btt, "", "");
KSYMTAB_FUNC(nd_btt_arena_is_valid, "", "");
KSYMTAB_FUNC(nd_btt_version, "", "");
KSYMTAB_FUNC(nd_btt_probe, "", "");
KSYMTAB_FUNC(to_nd_pfn, "", "");
KSYMTAB_FUNC(is_nd_pfn, "", "");
KSYMTAB_FUNC(nd_pfn_validate, "", "");
KSYMTAB_FUNC(nd_pfn_probe, "", "");
KSYMTAB_FUNC(nvdimm_setup_pfn, "_gpl", "");
KSYMTAB_FUNC(to_nd_dax, "", "");
KSYMTAB_FUNC(is_nd_dax, "", "");
KSYMTAB_FUNC(nd_dax_probe, "", "");

SYMBOL_CRC(nvdimm_bus_lock, 0x3d3cb877, "");
SYMBOL_CRC(nvdimm_bus_unlock, 0x87c5b046, "");
SYMBOL_CRC(is_nvdimm_bus_locked, 0xdda78f45, "");
SYMBOL_CRC(devm_nvdimm_memremap, 0xdc0ac618, "_gpl");
SYMBOL_CRC(nd_fletcher64, 0xaf076aec, "_gpl");
SYMBOL_CRC(to_nd_desc, 0x9cdca57c, "_gpl");
SYMBOL_CRC(to_nvdimm_bus_dev, 0xd70ba0c8, "_gpl");
SYMBOL_CRC(nvdimm_bus_add_badrange, 0x64ad7fa9, "_gpl");
SYMBOL_CRC(nd_device_notify, 0x2b60631f, "");
SYMBOL_CRC(nvdimm_region_notify, 0x18ac5b56, "_gpl");
SYMBOL_CRC(nvdimm_clear_poison, 0xba094a60, "_gpl");
SYMBOL_CRC(to_nvdimm_bus, 0xe65142a5, "_gpl");
SYMBOL_CRC(nvdimm_to_bus, 0xcdebca1e, "_gpl");
SYMBOL_CRC(nvdimm_bus_register, 0x577d95f8, "_gpl");
SYMBOL_CRC(nvdimm_bus_unregister, 0x148d23a1, "_gpl");
SYMBOL_CRC(nd_synchronize, 0x7d00c65b, "_gpl");
SYMBOL_CRC(nd_device_register, 0x6f356ba9, "");
SYMBOL_CRC(nd_device_unregister, 0x91b33d54, "");
SYMBOL_CRC(__nd_driver_register, 0xe464d707, "");
SYMBOL_CRC(nvdimm_check_and_set_ro, 0x6f32a11d, "");
SYMBOL_CRC(nd_cmd_dimm_desc, 0xb501b2df, "_gpl");
SYMBOL_CRC(nd_cmd_bus_desc, 0xa01a8d9b, "_gpl");
SYMBOL_CRC(nd_cmd_in_size, 0xb08c4ce7, "_gpl");
SYMBOL_CRC(nd_cmd_out_size, 0x87f8c15b, "_gpl");
SYMBOL_CRC(to_nvdimm, 0xb88fa80a, "_gpl");
SYMBOL_CRC(to_ndd, 0x965455ba, "");
SYMBOL_CRC(nvdimm_name, 0xf865c2da, "_gpl");
SYMBOL_CRC(nvdimm_kobj, 0xf11871e3, "_gpl");
SYMBOL_CRC(nvdimm_cmd_mask, 0x3d8d952b, "_gpl");
SYMBOL_CRC(nvdimm_provider_data, 0x5b45aaa8, "_gpl");
SYMBOL_CRC(__nvdimm_create, 0xc1b444d6, "_gpl");
SYMBOL_CRC(nvdimm_delete, 0xacc2f35e, "_gpl");
SYMBOL_CRC(nvdimm_security_setup_events, 0xeebf016e, "_gpl");
SYMBOL_CRC(nvdimm_in_overwrite, 0xc5b65c75, "_gpl");
SYMBOL_CRC(nvdimm_bus_check_dimm_count, 0x2ce5c14e, "_gpl");
SYMBOL_CRC(register_nvdimm_pmu, 0x7861b080, "_gpl");
SYMBOL_CRC(unregister_nvdimm_pmu, 0x7a064576, "_gpl");
SYMBOL_CRC(to_nd_region, 0x7e58e25b, "_gpl");
SYMBOL_CRC(nd_region_dev, 0xc05f42a8, "_gpl");
SYMBOL_CRC(nd_region_provider_data, 0x5c546278, "_gpl");
SYMBOL_CRC(nd_region_to_nstype, 0xcc174201, "");
SYMBOL_CRC(nd_region_acquire_lane, 0xfd5ded75, "");
SYMBOL_CRC(nd_region_release_lane, 0xdcfcb3b8, "");
SYMBOL_CRC(nvdimm_pmem_region_create, 0x6f897810, "_gpl");
SYMBOL_CRC(nvdimm_volatile_region_create, 0x56cb6f9c, "_gpl");
SYMBOL_CRC(nvdimm_region_delete, 0x9ac3c652, "_gpl");
SYMBOL_CRC(nvdimm_flush, 0xee973591, "_gpl");
SYMBOL_CRC(nvdimm_has_flush, 0x5db35492, "_gpl");
SYMBOL_CRC(nvdimm_has_cache, 0x3a145f56, "_gpl");
SYMBOL_CRC(is_nvdimm_sync, 0x7a8c1b8a, "_gpl");
SYMBOL_CRC(pmem_should_map_pages, 0x6c521783, "");
SYMBOL_CRC(pmem_sector_size, 0x6d951349, "");
SYMBOL_CRC(nvdimm_namespace_disk_name, 0xc39836ef, "");
SYMBOL_CRC(nd_dev_to_uuid, 0xef3e091f, "");
SYMBOL_CRC(nvdimm_namespace_capacity, 0x6d7edf3c, "");
SYMBOL_CRC(nvdimm_namespace_locked, 0x16d4c8cf, "");
SYMBOL_CRC(nvdimm_namespace_common_probe, 0x943c8feb, "");
SYMBOL_CRC(devm_namespace_enable, 0xf18aeccd, "_gpl");
SYMBOL_CRC(devm_namespace_disable, 0xaabff9fa, "_gpl");
SYMBOL_CRC(badrange_init, 0x11e06ee9, "_gpl");
SYMBOL_CRC(badrange_add, 0x2e08226d, "_gpl");
SYMBOL_CRC(badrange_forget, 0x82092899, "_gpl");
SYMBOL_CRC(nvdimm_badblocks_populate, 0x5b1b0bf1, "_gpl");
SYMBOL_CRC(nd_sb_checksum, 0x499f0ecf, "");
SYMBOL_CRC(to_nd_btt, 0x6c76af9d, "");
SYMBOL_CRC(is_nd_btt, 0x138ab30d, "");
SYMBOL_CRC(nd_btt_arena_is_valid, 0xdb877604, "");
SYMBOL_CRC(nd_btt_version, 0x5d8fd465, "");
SYMBOL_CRC(nd_btt_probe, 0xeb781b8e, "");
SYMBOL_CRC(to_nd_pfn, 0x0473d6f1, "");
SYMBOL_CRC(is_nd_pfn, 0x9da2755e, "");
SYMBOL_CRC(nd_pfn_validate, 0xa5618d05, "");
SYMBOL_CRC(nd_pfn_probe, 0x73f6b0a3, "");
SYMBOL_CRC(nvdimm_setup_pfn, 0xa45a3cbf, "_gpl");
SYMBOL_CRC(to_nd_dax, 0xbae0bb2c, "");
SYMBOL_CRC(is_nd_dax, 0x8bf44538, "");
SYMBOL_CRC(nd_dax_probe, 0x46a46c19, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb67fec0e, "uuid_parse" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xd68c5a1f, "adjust_resource" },
	{ 0x87234cc2, "kill_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x5a1cdf3, "__devm_release_region" },
	{ 0x98a57143, "kernfs_put" },
	{ 0x4d8e509f, "__register_chrdev" },
	{ 0x50785e75, "device_destroy" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd21b61bd, "async_schedule_node_domain" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x249651a5, "badblocks_check" },
	{ 0xe9bb6414, "__devm_add_action" },
	{ 0x2c635527, "arch_invalidate_pmem" },
	{ 0xf6a28554, "region_intersects" },
	{ 0xd6c4bdb7, "badblocks_clear" },
	{ 0xccd4fe5f, "devm_init_badblocks" },
	{ 0x754d539c, "strlen" },
	{ 0x77358855, "iomem_resource" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x972052ee, "driver_register" },
	{ 0x4a958e37, "class_register" },
	{ 0xaab744b7, "__cpuhp_remove_state" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0x4d7272e4, "migrate_enable" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x85bd1608, "__request_region" },
	{ 0xa83a27a3, "bus_register" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xfac73ba8, "set_disk_ro" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd6551b9c, "cpu_cache_has_invalidate_memregion" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0xf2f53617, "memregion_free" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x77bc13a0, "strim" },
	{ 0x4ce1de71, "devm_memremap" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x213a738d, "memregion_alloc" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x22475f44, "badblocks_set" },
	{ 0xdedf4785, "device_unregister" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0xedc03953, "iounmap" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6ca4bf88, "async_synchronize_full_domain" },
	{ 0x37a0cba, "kfree" },
	{ 0xd16efa42, "badblocks_exit" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x80b29ea5, "device_for_each_child" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xbc4e24bb, "copy_mc_to_kernel" },
	{ 0x3131271a, "get_device" },
	{ 0x4d924f20, "memremap" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x16062d10, "kernfs_notify" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xee99c7ef, "dev_driver_string" },
	{ 0x8df9dd10, "guid_null" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x26f50494, "__devm_request_region" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x18245177, "__cpuhp_state_remove_instance" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xca844bc7, "put_device" },
	{ 0xbb8685b9, "badblocks_show" },
	{ 0x618911fc, "numa_node" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc81ce80d, "compat_ptr_ioctl" },
	{ 0xf3375236, "perf_pmu_migrate_context" },
	{ 0xf8bb134c, "perf_pmu_register" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfbb7344, "memremap_compat_align" },
	{ 0xb5228f1a, "bus_unregister" },
	{ 0x49608959, "migrate_disable" },
	{ 0x3c804b25, "cpu_cache_invalidate_memregion" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xb7c0f443, "sort" },
	{ 0xb66eb73f, "__cpuhp_setup_state" },
	{ 0xf34dabaf, "devm_memunmap" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x934ea33f, "device_add" },
	{ 0x5c309e65, "hibernate_quiet_exec" },
	{ 0x2a71977a, "noop_llseek" },
	{ 0x328e3354, "__memcpy_flushcache" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3088fe39, "kernfs_find_and_get_ns" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x6dcf857f, "uuid_null" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xffb7c514, "ida_free" },
	{ 0x6aae782e, "driver_unregister" },
	{ 0xe5e55228, "__cpuhp_state_add_instance" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9e622e92, "perf_pmu_unregister" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xde80cd09, "ioremap" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2037cee, "device_find_child" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

