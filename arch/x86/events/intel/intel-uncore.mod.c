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
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x876a73c4, "x86_topo_system" },
	{ 0xece784c2, "rb_first" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xb6cb556a, "_find_first_and_bit" },
	{ 0xe37056dc, "pv_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xa6729c43, "cpu_info" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x450110e8, "perf_assign_events" },
	{ 0x3db036bc, "pci_find_next_ext_capability" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0x7bbccd05, "nr_node_ids" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0xf07464e4, "hrtimer_forward" },
	{ 0x754d539c, "strlen" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0xaab744b7, "__cpuhp_remove_state" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xffc20648, "topology_get_logical_id" },
	{ 0x3d647afc, "pci_write_config_dword" },
	{ 0xe2eaa37c, "pci_bus_type" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0x42f6690f, "bus_unregister_notifier" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf727c35a, "pci_dev_put" },
	{ 0xca9360b5, "rb_next" },
	{ 0xd7c9f34b, "__kmalloc_node_noprof" },
	{ 0xa90c8360, "pci_get_device" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xedc03953, "iounmap" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x794d07af, "pci_find_next_bus" },
	{ 0x3be2ccd0, "pci_read_config_dword" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x794d8cdf, "__num_cores_per_package" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xa5957631, "bus_register_notifier" },
	{ 0x618911fc, "numa_node" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x5f56663b, "rdmsrl_on_cpu" },
	{ 0xf3375236, "perf_pmu_migrate_context" },
	{ 0xf8bb134c, "perf_pmu_register" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x3c427f67, "cpu_die_map" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xb66eb73f, "__cpuhp_setup_state" },
	{ 0x9d1e6054, "pci_get_domain_bus_and_slot" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x9e622e92, "perf_pmu_unregister" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xde80cd09, "ioremap" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbd48ea6a, "__max_dies_per_package" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod001A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod001E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0025:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0045:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0046:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0047:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0056:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0057:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0085:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0055:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A6:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A5:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A7:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0097:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00B7:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BA:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BF:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00AC:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00AA:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00C6:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00B5:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00C5:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BD:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00CF:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00AD:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00AE:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0086:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00BE:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00AF:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00B6:feature:*");
