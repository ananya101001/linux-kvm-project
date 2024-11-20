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

KSYMTAB_FUNC(__vmbus_driver_register, "_gpl", "");
KSYMTAB_FUNC(vmbus_driver_unregister, "_gpl", "");
KSYMTAB_FUNC(vmbus_device_unregister, "_gpl", "");
KSYMTAB_FUNC(vmbus_allocate_mmio, "_gpl", "");
KSYMTAB_FUNC(vmbus_free_mmio, "_gpl", "");
KSYMTAB_DATA(vmbus_connection, "_gpl", "");
KSYMTAB_DATA(vmbus_proto_version, "_gpl", "");
KSYMTAB_FUNC(vmbus_set_event, "_gpl", "");
KSYMTAB_FUNC(vmbus_setevent, "_gpl", "");
KSYMTAB_FUNC(vmbus_free_ring, "_gpl", "");
KSYMTAB_FUNC(vmbus_alloc_ring, "_gpl", "");
KSYMTAB_FUNC(vmbus_send_tl_connect_request, "_gpl", "");
KSYMTAB_FUNC(vmbus_send_modifychannel, "_gpl", "");
KSYMTAB_FUNC(vmbus_establish_gpadl, "_gpl", "");
KSYMTAB_FUNC(vmbus_connect_ring, "_gpl", "");
KSYMTAB_FUNC(vmbus_open, "_gpl", "");
KSYMTAB_FUNC(vmbus_teardown_gpadl, "_gpl", "");
KSYMTAB_FUNC(vmbus_disconnect_ring, "_gpl", "");
KSYMTAB_FUNC(vmbus_close, "_gpl", "");
KSYMTAB_FUNC(vmbus_sendpacket_getid, "", "");
KSYMTAB_FUNC(vmbus_sendpacket, "", "");
KSYMTAB_FUNC(vmbus_sendpacket_pagebuffer, "_gpl", "");
KSYMTAB_FUNC(vmbus_sendpacket_mpb_desc, "_gpl", "");
KSYMTAB_FUNC(vmbus_recvpacket, "", "");
KSYMTAB_FUNC(vmbus_recvpacket_raw, "_gpl", "");
KSYMTAB_FUNC(vmbus_next_request_id, "_gpl", "");
KSYMTAB_FUNC(__vmbus_request_addr_match, "_gpl", "");
KSYMTAB_FUNC(vmbus_request_addr_match, "_gpl", "");
KSYMTAB_FUNC(vmbus_request_addr, "_gpl", "");
KSYMTAB_DATA(vmbus_devs, "_gpl", "");
KSYMTAB_FUNC(vmbus_prep_negotiate_resp, "_gpl", "");
KSYMTAB_FUNC(vmbus_hvsock_device_unregister, "_gpl", "");
KSYMTAB_FUNC(vmbus_set_sc_create_callback, "_gpl", "");
KSYMTAB_FUNC(vmbus_set_chn_rescind_callback, "_gpl", "");
KSYMTAB_FUNC(hv_ringbuffer_get_debuginfo, "_gpl", "");
KSYMTAB_FUNC(hv_ringbuffer_spinlock_busy, "_gpl", "");
KSYMTAB_FUNC(hv_pkt_iter_first, "_gpl", "");
KSYMTAB_FUNC(__hv_pkt_iter_next, "_gpl", "");
KSYMTAB_FUNC(hv_pkt_iter_close, "_gpl", "");

SYMBOL_CRC(__vmbus_driver_register, 0xe2eaa621, "_gpl");
SYMBOL_CRC(vmbus_driver_unregister, 0x16dbe47e, "_gpl");
SYMBOL_CRC(vmbus_device_unregister, 0x0e397fdd, "_gpl");
SYMBOL_CRC(vmbus_allocate_mmio, 0x615206e6, "_gpl");
SYMBOL_CRC(vmbus_free_mmio, 0x31e2e77f, "_gpl");
SYMBOL_CRC(vmbus_connection, 0xb69fad82, "_gpl");
SYMBOL_CRC(vmbus_proto_version, 0x46a417ca, "_gpl");
SYMBOL_CRC(vmbus_set_event, 0x1dcaca3d, "_gpl");
SYMBOL_CRC(vmbus_setevent, 0xf4d31f6e, "_gpl");
SYMBOL_CRC(vmbus_free_ring, 0xdf4b9805, "_gpl");
SYMBOL_CRC(vmbus_alloc_ring, 0x6db2914f, "_gpl");
SYMBOL_CRC(vmbus_send_tl_connect_request, 0x4b2210b8, "_gpl");
SYMBOL_CRC(vmbus_send_modifychannel, 0x00a36b2f, "_gpl");
SYMBOL_CRC(vmbus_establish_gpadl, 0x0e60e530, "_gpl");
SYMBOL_CRC(vmbus_connect_ring, 0x06518b34, "_gpl");
SYMBOL_CRC(vmbus_open, 0x4f9e213f, "_gpl");
SYMBOL_CRC(vmbus_teardown_gpadl, 0xfcbc8b43, "_gpl");
SYMBOL_CRC(vmbus_disconnect_ring, 0xd49cf21d, "_gpl");
SYMBOL_CRC(vmbus_close, 0x49a5f7d6, "_gpl");
SYMBOL_CRC(vmbus_sendpacket_getid, 0xb9ad9572, "");
SYMBOL_CRC(vmbus_sendpacket, 0x92f96652, "");
SYMBOL_CRC(vmbus_sendpacket_pagebuffer, 0xb154e5bb, "_gpl");
SYMBOL_CRC(vmbus_sendpacket_mpb_desc, 0x2e948b87, "_gpl");
SYMBOL_CRC(vmbus_recvpacket, 0x793144fa, "");
SYMBOL_CRC(vmbus_recvpacket_raw, 0xdd9cc713, "_gpl");
SYMBOL_CRC(vmbus_next_request_id, 0x55c97da5, "_gpl");
SYMBOL_CRC(__vmbus_request_addr_match, 0x6cff4269, "_gpl");
SYMBOL_CRC(vmbus_request_addr_match, 0x8e503cff, "_gpl");
SYMBOL_CRC(vmbus_request_addr, 0xd3106f95, "_gpl");
SYMBOL_CRC(vmbus_devs, 0x59a7261d, "_gpl");
SYMBOL_CRC(vmbus_prep_negotiate_resp, 0x321055cb, "_gpl");
SYMBOL_CRC(vmbus_hvsock_device_unregister, 0xa1395cb6, "_gpl");
SYMBOL_CRC(vmbus_set_sc_create_callback, 0xbe826397, "_gpl");
SYMBOL_CRC(vmbus_set_chn_rescind_callback, 0x0526291f, "_gpl");
SYMBOL_CRC(hv_ringbuffer_get_debuginfo, 0x674e657e, "_gpl");
SYMBOL_CRC(hv_ringbuffer_spinlock_busy, 0x02bf0d31, "_gpl");
SYMBOL_CRC(hv_pkt_iter_first, 0xbb147492, "_gpl");
SYMBOL_CRC(__hv_pkt_iter_next, 0x3044a9b3, "_gpl");
SYMBOL_CRC(hv_pkt_iter_close, 0x496c992e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x98378a1d, "cc_mkdec" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xfddeb056, "efi" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0xb5228f1a, "bus_unregister" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x13b9e193, "acpi_dev_resource_interrupt" },
	{ 0x80c61457, "hv_setup_dma_ops" },
	{ 0x7bb045a7, "__request_percpu_irq" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc25b8971, "hv_remove_crash_handler" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x65704d22, "hv_stimer_cleanup" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x27df3105, "hv_alloc_hyperv_zeroed_page" },
	{ 0x6aae782e, "driver_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x81547437, "vmap" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9f7d1bf1, "kobject_init_and_add" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1b7a4fb, "sysfs_create_group" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xee006366, "hv_isolation_type_tdx" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x79d304b7, "hv_setup_crash_handler" },
	{ 0x3d4155c2, "device_register" },
	{ 0x95a052b1, "bpf_trace_run1" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xba01ec83, "hv_stimer_global_cleanup" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x8b89f01c, "hv_ghcb_hypercall" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xbc6bec66, "free_percpu_irq" },
	{ 0x1cd44f98, "hyperv_paravisor_present" },
	{ 0x2c86a755, "hv_tdx_hypercall" },
	{ 0x57cb662d, "__cpuhp_setup_state_cpuslocked" },
	{ 0xab1e0e93, "hv_setup_kexec_handler" },
	{ 0xf6fc8791, "__bitmap_xor" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0xe37056dc, "pv_ops" },
	{ 0x980d5636, "sysfs_remove_group" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2ffedb6b, "hv_free_hyperv_page" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0xc683da81, "set_memory_decrypted" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcb8a461c, "hv_stimer_legacy_cleanup" },
	{ 0x335c570f, "enable_percpu_irq" },
	{ 0x3fae6ab0, "hv_vp_index" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x90a9d8cc, "hv_is_hyperv_initialized" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4c8adfe1, "hv_root_partition" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x4475dcaf, "hv_nested" },
	{ 0x56470118, "__warn_printk" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0xdfb62b1b, "ms_hyperv" },
	{ 0xaedb2a25, "kobject_uevent" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x7bbccd05, "nr_node_ids" },
	{ 0xefa610b7, "hv_get_msr" },
	{ 0xe1779b47, "dma_set_mask" },
	{ 0xe9c215c5, "hv_set_msr" },
	{ 0xa96e8b4e, "hv_setup_vmbus_handler" },
	{ 0x4ea4e308, "set_primary_fwnode" },
	{ 0x77358855, "iomem_resource" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x972052ee, "driver_register" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0xaab744b7, "__cpuhp_remove_state" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x85bd1608, "__request_region" },
	{ 0xf21e1f9b, "disable_percpu_irq" },
	{ 0x6be3a96b, "hv_remove_vmbus_handler" },
	{ 0xa83a27a3, "bus_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xaf77d964, "kset_create_and_add" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2e0a637d, "acpi_walk_resources" },
	{ 0x7ab30f45, "kobject_put" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xd5f3bb7b, "set_memory_encrypted" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xbdb2217d, "hv_is_isolation_supported" },
	{ 0xfa017be3, "is_acpi_device_node" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x3c0e8050, "hyperv_pcpu_input_arg" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x31128b8e, "hv_remove_kexec_handler" },
	{ 0xae9852a0, "housekeeping_cpumask" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0x4ec8d88, "vmalloc_to_page" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0xf727c35a, "pci_dev_put" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xf1891ecb, "driver_attach" },
	{ 0xdedf4785, "device_unregister" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0xa90c8360, "pci_get_device" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x556422b3, "ioremap_cache" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0xedc03953, "iounmap" },
	{ 0xa2f7487f, "hv_is_hibernation_supported" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfa1eb910, "unregister_syscore_ops" },
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0xb4fd855b, "kset_unregister" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0x16dfbf36, "add_interrupt_randomness" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x3131271a, "get_device" },
	{ 0x9bad141d, "hv_hypercall_pg" },
	{ 0xc3876c1a, "hv_isolation_type_snp" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xb75041d1, "hv_stimer_legacy_init" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x8e9bd4a3, "hv_alloc_hyperv_page" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0x8df9dd10, "guid_null" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x4945db69, "__alloc_pages_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xca844bc7, "put_device" },
	{ 0x37b8b39e, "screen_info" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x618911fc, "numa_node" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8f14d45b, "get_zeroed_page_noprof" },
	{ 0x20899467, "hv_stimer0_isr" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x755d9921, "device_get_dma_attr" },
	{ 0x6c7f6def, "driver_set_override" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrosoft,vmbus");
MODULE_ALIAS("of:N*T*Cmicrosoft,vmbusC*");
MODULE_ALIAS("acpi*:VMBUS:*");
MODULE_ALIAS("acpi*:VMBus:*");
