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
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x778e30b9, "__SCT__tp_func_kvm_cr" },
	{ 0x793edc23, "kvm_init_shadow_ept_mmu" },
	{ 0x65a333ca, "kvm_emulate_monitor" },
	{ 0x9fe4fc83, "__tracepoint_kvm_pml_full" },
	{ 0x665ab419, "kvm_requeue_exception_e" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4945db69, "__alloc_pages_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5c7e9f84, "__SCT__tp_func_kvm_apicv_accept_irq" },
	{ 0x89952a9f, "kvm_gfn_to_hva_cache_init" },
	{ 0x9310c0d5, "kvm_lmsw" },
	{ 0x3ef2f595, "x86_perf_get_lbr" },
	{ 0x2964e50, "kvm_lapic_set_eoi" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xc96d35f4, "report_ignored_msrs" },
	{ 0x2e14d515, "kvm_queue_exception" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf447173f, "kvm_emulate_halt_noskip" },
	{ 0xcda7704a, "kvm_emulate_rdmsr" },
	{ 0x793ac193, "__SCT__tp_func_ipi_send_cpu" },
	{ 0xd1f618b9, "__tracepoint_kvm_apicv_accept_irq" },
	{ 0xe08c051b, "__tracepoint_kvm_pi_irte_update" },
	{ 0x618911fc, "numa_node" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x8b618aa6, "__SCT__tp_func_kvm_nested_vmexit_inject" },
	{ 0x30e1c4fa, "kvm_vcpu_unmap" },
	{ 0xb8907859, "kvm_write_guest_page" },
	{ 0xc287d96a, "kvm_set_posted_intr_wakeup_handler" },
	{ 0x686a1b5, "__free_pages" },
	{ 0xbaf9d785, "__tss_limit_invalid" },
	{ 0x7fe19488, "kvm_add_user_return_msr" },
	{ 0x3e39d447, "__SCT__apic_call_send_IPI_self" },
	{ 0x7b1fba0d, "__SCT__apic_call_send_IPI_mask" },
	{ 0x51fdecaf, "kvm_valid_efer" },
	{ 0x8a2c214, "__tracepoint_ipi_send_cpu" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x3e7f3dc8, "__SCK__tp_func_kvm_pi_irte_update" },
	{ 0x53e1e808, "__SCK__tp_func_kvm_apicv_accept_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0xbbfa2776, "__SCK__tp_func_kvm_entry" },
	{ 0xb582a0c0, "kvm_apic_ack_interrupt" },
	{ 0xe7c81c4e, "kvm_read_guest_offset_cached" },
	{ 0x52f215da, "kvm_handle_invpcid" },
	{ 0xbfab50f6, "__tracepoint_kvm_entry" },
	{ 0x8180702d, "kvm_load_host_xsave_state" },
	{ 0xd9d6dcc, "__tracepoint_kvm_page_fault" },
	{ 0x2db19a93, "kvm_mmu_free_roots" },
	{ 0x586432fc, "irq_stat" },
	{ 0x2e2df7f4, "irq_remapping_cap" },
	{ 0x93fc8e7f, "kvm_queue_exception_p" },
	{ 0x30428200, "kvm_read_l1_tsc" },
	{ 0x8c341c48, "current_save_fsgs" },
	{ 0x65b83531, "kvm_vcpu_deliver_sipi_vector" },
	{ 0xe123a7b3, "__tracepoint_kvm_inj_virq" },
	{ 0x49608959, "migrate_disable" },
	{ 0xcc6267b2, "kvm_cpu_has_interrupt" },
	{ 0x6243ac82, "__kvm_apic_update_irr" },
	{ 0xf7341410, "handle_fastpath_set_msr_irqoff" },
	{ 0x50938a9, "kvm_apic_update_ppr" },
	{ 0x6cdc8d1, "kvm_configure_mmu" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0xf559ebe0, "kvm_make_all_cpus_request" },
	{ 0xfcadfcea, "__srcu_read_lock" },
	{ 0xb341b44d, "pmc_write_counter" },
	{ 0xab55cd08, "kvm_apic_update_irr" },
	{ 0x4be3109d, "kvm_cpu_get_extint" },
	{ 0x4936f604, "kvm_init_mmu" },
	{ 0x3ce7234, "sched_smt_present" },
	{ 0x73c135b3, "kvm_emulate_wbinvd" },
	{ 0x68400e4c, "kvm_set_cr3" },
	{ 0x696d7e0b, "l1tf_mitigation" },
	{ 0x25315395, "kvm_update_cpuid_runtime" },
	{ 0xc43e20ed, "__SCK__kvm_x86_get_cs_db_l_bits" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3b91db5b, "intel_pt_handle_vmx" },
	{ 0x4381c4f8, "__SCK__tp_func_kvm_page_fault" },
	{ 0x38741409, "kvm_alloc_apic_access_page" },
	{ 0x4220c31c, "kvm_get_cr8" },
	{ 0x6636c3c9, "irq_set_vcpu_affinity" },
	{ 0x388e0e10, "__SCT__tp_func_kvm_pi_irte_update" },
	{ 0xe17dfa62, "vcpu_load" },
	{ 0x5b3f81e6, "__SCK__tp_func_ipi_send_cpu" },
	{ 0x4115ab1a, "kvm_handle_memory_failure" },
	{ 0x5e5d3ff1, "kvm_set_dr" },
	{ 0x657bb33b, "kvm_set_msi_irq" },
	{ 0x3cadedd0, "kvm_emulate_hypercall" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x31c45b8c, "mds_verw_sel" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x709cd8cb, "kvm_spurious_fault" },
	{ 0xffc6bf70, "kvm_get_linear_rip" },
	{ 0xba75c362, "kvm_prepare_emulation_failure_exit" },
	{ 0x2a5c0933, "x86_cpu_to_apicid" },
	{ 0xb58a11d, "kvm_nr_uret_msrs" },
	{ 0x68952493, "rcu_note_context_switch" },
	{ 0x340728d5, "load_pdptrs" },
	{ 0x4c42ad7a, "kvm_get_running_vcpu" },
	{ 0xe3e88acb, "__get_current_cr3_fast" },
	{ 0x5d0113e0, "x86_pred_cmd" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x5cef1dee, "kvm_vcpu_read_guest_page" },
	{ 0x5d996b31, "kvm_set_cpu_caps" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0xcf42fbb8, "hv_track_root_tdp" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf2df48f3, "__SCT__tp_func_kvm_pml_full" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x9d4894c8, "x2apic_mode" },
	{ 0x5751a3e, "kvm_set_cr4" },
	{ 0x678fcdba, "kvm_get_msr_with_filter" },
	{ 0xdb6b7305, "__SCK__tp_func_kvm_exit" },
	{ 0x81430f4b, "kvm_handle_page_fault" },
	{ 0x6303c089, "kvm_calc_nested_tsc_offset" },
	{ 0xbff653a2, "kvm_cpu_caps" },
	{ 0x2d82cc24, "kvm_spec_ctrl_test_value" },
	{ 0x616e6c95, "__SCT__tp_func_kvm_exit" },
	{ 0x9acd3f6f, "get_cpu_entry_area" },
	{ 0x61f31aab, "kvm_apic_clear_irr" },
	{ 0x98070117, "__x86_set_memory_region" },
	{ 0x9ded6b28, "kvm_load_guest_xsave_state" },
	{ 0x9bd9b28b, "kvm_set_cr0" },
	{ 0x68a12ab8, "rep_movs_alternative" },
	{ 0x828abb29, "__kvm_is_valid_cr4" },
	{ 0xbf7494bf, "kvm_mmu_free_guest_mode_roots" },
	{ 0xe37056dc, "pv_ops" },
	{ 0x7df1e5a0, "kvm_set_cr8" },
	{ 0x4fc11cfc, "kvm_get_dr" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb637410, "cr4_update_irqsoff" },
	{ 0xc575c737, "debug_locks_off" },
	{ 0x44aaf30f, "tsc_khz" },
	{ 0x54a97be8, "kvm_mmu_page_fault" },
	{ 0x41d9f0ad, "clear_bhb_loop" },
	{ 0x239fd3dd, "__SCK__tp_func_kvm_nested_vmexit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbc92596d, "intel_pt_validate_cap" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x3d0447c7, "kvm_emulate_instruction" },
	{ 0xa6729c43, "cpu_info" },
	{ 0xef14fd98, "kvm_calc_nested_tsc_multiplier" },
	{ 0x2c36954, "__SCK__tp_func_kvm_pml_full" },
	{ 0x5dcd5cf5, "kvm_pmu_trigger_event" },
	{ 0x9490f105, "kvm_mmu_reset_context" },
	{ 0x83598345, "kvm_get_apic_mode" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x50b03f5d, "l1tf_vmx_mitigation" },
	{ 0x5eaa0f4, "kvm_vcpu_read_guest" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4b2d052b, "kvm_vcpu_on_spin" },
	{ 0x9bbea9f9, "__SCK__tp_func_kvm_fast_mmio" },
	{ 0xfb75fc72, "kvm_read_guest" },
	{ 0x858798ad, "__hrtimer_get_remaining" },
	{ 0xe9e46d5f, "kvm_write_guest_cached" },
	{ 0x4c78ca7b, "gfn_to_pfn_memslot" },
	{ 0x755abc1, "__srcu_read_unlock" },
	{ 0xb7217383, "kvm_vcpu_wake_up" },
	{ 0xdfb62b1b, "ms_hyperv" },
	{ 0x485cd7f6, "kvm_rebooting" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x6d39af5, "kvm_get_rflags" },
	{ 0x3ee4d0ec, "kvm_queue_exception_e" },
	{ 0xa2d0b59d, "mmio_stale_data_clear" },
	{ 0x6becaded, "__SCT__tp_func_kvm_inj_virq" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0x513ae683, "__tracepoint_kvm_exit" },
	{ 0x2bb46f6, "kvm_emulate_cpuid" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xa9e3e330, "kvm_emulate_wrmsr" },
	{ 0x7c043264, "__SCK__tp_func_kvm_inj_virq" },
	{ 0xad8f283a, "kvm_apic_set_eoi_accelerated" },
	{ 0xf6b2c392, "kvm_find_cpuid_entry_index" },
	{ 0x6d2c9437, "__SCT__tp_func_kvm_nested_vmenter" },
	{ 0xf2fc7881, "kvm_vcpu_kick" },
	{ 0x59387ba3, "__SCT__kvm_x86_cache_reg" },
	{ 0x7eba9ffb, "kvm_inject_realmode_interrupt" },
	{ 0x7cf883e7, "kvm_mmu_invlpg" },
	{ 0x4248ef36, "kvm_emulate_invd" },
	{ 0x34f889f4, "kvm_fast_pio" },
	{ 0x32383c7e, "__SCK__tp_func_kvm_ple_window_update" },
	{ 0xb67f174b, "kvm_set_msr_common" },
	{ 0x17553418, "kvm_mmu_invalidate_addr" },
	{ 0xe93dfc8c, "__SCT__tp_func_kvm_nested_vmenter_failed" },
	{ 0xf5b52d5c, "hv_vp_assist_page" },
	{ 0x9e7506d5, "__SCK__tp_func_kvm_nested_vmexit_inject" },
	{ 0xd6df01f7, "perf_get_hw_event_config" },
	{ 0xd00d59e5, "kvm_intr_is_single_vcpu" },
	{ 0x4d3f91cf, "perf_event_release_kernel" },
	{ 0xbfb24cf0, "kvm_apic_has_interrupt" },
	{ 0x3f510ff5, "kvm_has_noapic_vcpu" },
	{ 0x17add64b, "gdt_page" },
	{ 0xf1cd8929, "kvm_read_and_reset_apf_flags" },
	{ 0xefb3efb8, "kvm_emulate_rdpmc" },
	{ 0x93a3e40e, "__SCT__tp_func_kvm_ple_window_update" },
	{ 0x884a3a60, "__tracepoint_kvm_nested_vmexit_inject" },
	{ 0x4e3fd1b4, "kvm_release_pfn_clean" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x7ff2a104, "__SCT__tp_func_kvm_page_fault" },
	{ 0x659bda3e, "kvm_require_dr" },
	{ 0xcacbd05f, "kvm_skip_emulated_instruction" },
	{ 0x5bf7cde0, "kvm_mmu_set_ept_masks" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0xc54e4a08, "kvm_handle_invalid_op" },
	{ 0xfce78ab5, "kvm_set_msr_with_filter" },
	{ 0xcf509080, "kvm_caps" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x9c1e8c9a, "kvm_vcpu_write_guest" },
	{ 0x4d7272e4, "migrate_enable" },
	{ 0xd133603e, "hv_flush_remote_tlbs_range" },
	{ 0xa71e1bb8, "kvm_complete_insn_gp" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x78b60b51, "kvm_mmu_print_sptes" },
	{ 0xea69d7d7, "asm_exc_nmi_kvm_vmx" },
	{ 0x251159a7, "kvm_apic_write_nodecode" },
	{ 0x808a8088, "handle_guest_split_lock" },
	{ 0x9cf59e7a, "allow_smaller_maxphyaddr" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x6508a9b9, "__SCK__kvm_x86_cache_reg" },
	{ 0x5b7b830c, "kvm_x86_vendor_init" },
	{ 0x8edca894, "__tracepoint_kvm_ple_window_update" },
	{ 0x970f0386, "vcpu_put" },
	{ 0xd3752d75, "kvm_arch_has_assigned_device" },
	{ 0xfbdb084b, "kvm_vcpu_mark_page_dirty" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x9d14205c, "cr4_read_shadow" },
	{ 0xb8bdeb6e, "kvm_host" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x3ab2794c, "kvm_find_user_return_msr" },
	{ 0x6988d0ca, "cpu_dr7" },
	{ 0xb82c0987, "enable_pmu" },
	{ 0x4f33aa8d, "kvm_requeue_exception" },
	{ 0xd416cfec, "perf_guest_get_msrs" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x53d9f927, "__SCT__kvm_x86_get_cs_db_l_bits" },
	{ 0x2c3688a5, "__SCK__tp_func_kvm_nested_vmenter_failed" },
	{ 0xd475c188, "kvm_pmu_cap" },
	{ 0x27046576, "kvm_exit" },
	{ 0xde272e49, "kvm_init" },
	{ 0xf767ca35, "fixed_percpu_data" },
	{ 0xd830bb56, "kvm_set_msr" },
	{ 0x8c82ead4, "kvm_deliver_exception_payload" },
	{ 0xc071e99f, "__SCT__tp_func_kvm_entry" },
	{ 0x305a916c, "__x86_indirect_thunk_rdi" },
	{ 0x6b39c530, "__tracepoint_kvm_nested_vmexit" },
	{ 0x1db1c372, "enable_vmware_backdoor" },
	{ 0x1d013832, "kvm_enable_efer_bits" },
	{ 0x1764dddd, "__tracepoint_kvm_nested_vmenter" },
	{ 0xf881cecd, "load_fixmap_gdt" },
	{ 0x2510fc6d, "__SCT__tp_func_kvm_nested_vmexit" },
	{ 0x4d4141b, "perf_event_create_kernel_counter" },
	{ 0xbd9d6dfc, "kvm_mmu_set_me_spte_mask" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x338e80e9, "hrtimer_try_to_cancel" },
	{ 0xb349a53, "kvm_lapic_expired_hv_timer" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xe9313472, "kvm_emulate_xsetbv" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x7c300588, "kvm_fixup_and_inject_pf_error" },
	{ 0x4e44f2f2, "__SCK__tp_func_kvm_cr" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x97de2b83, "debug_locks_silent" },
	{ 0xddf65613, "kvm_vcpu_write_guest_page" },
	{ 0xce576a13, "enable_apicv" },
	{ 0x609da4e9, "kvm_read_guest_cached" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0x1b9cc6aa, "handle_ud" },
	{ 0x84e62e9a, "kvm_mmu_new_pgd" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x972bf09a, "__tracepoint_kvm_nested_vmenter_failed" },
	{ 0x59b2776f, "kvm_get_msr_common" },
	{ 0xd4106022, "smp_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x8394c91b, "__tracepoint_kvm_fast_mmio" },
	{ 0xc997e50e, "__SCK__tp_func_kvm_nested_vmenter" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x14561c18, "kvm_arch_has_noncoherent_dma" },
	{ 0x7494db76, "kvm_hv_get_assist_page" },
	{ 0x6340434e, "x86_model" },
	{ 0xf352ee80, "kvm_emulate_halt" },
	{ 0xfcc16c54, "kvm_pmu_eventsel" },
	{ 0x3dff86a5, "handle_fastpath_hlt" },
	{ 0x23f23b66, "kvm_emulate_mwait" },
	{ 0xb4b82a6a, "kvm_vcpu_map" },
	{ 0xdde129a9, "kvm_lapic_readable_reg_mask" },
	{ 0x1b7aee8e, "kvm_msr_allowed" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x90ee8a34, "kvm_service_local_tlb_flush_requests" },
	{ 0xc5fd3374, "kvm_lapic_find_highest_irr" },
	{ 0x687b78fc, "kvm_x86_vendor_exit" },
	{ 0x2de5035b, "kvm_wait_lapic_expire" },
	{ 0xc69498f8, "hv_flush_remote_tlbs" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x41358b0d, "perf_event_read_value" },
	{ 0x9493fc86, "node_states" },
	{ 0x8ab2fcf2, "kvm_write_guest_virt_system" },
	{ 0x61b443f8, "x86_spec_ctrl_current" },
	{ 0xa15b4b3a, "kvm_find_cpuid_entry" },
	{ 0xd8683867, "kvm_task_switch" },
	{ 0xea5cda33, "__SCT__tp_func_kvm_fast_mmio" },
	{ 0x1c71353b, "kvm_read_guest_virt" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x7cf7159b, "__tracepoint_kvm_cr" },
	{ 0x3f2c33d0, "kvm_io_bus_write" },
	{ 0x9ae47436, "_find_last_bit" },
	{ 0x53614ec, "kvm_set_user_return_msr" },
	{ 0xb912560d, "static_key_disable" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "kvm");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0085*");