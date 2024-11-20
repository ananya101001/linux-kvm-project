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

KSYMTAB_DATA(halt_poll_ns, "_gpl", "");
KSYMTAB_DATA(halt_poll_ns_grow, "_gpl", "");
KSYMTAB_DATA(halt_poll_ns_grow_start, "_gpl", "");
KSYMTAB_DATA(halt_poll_ns_shrink, "_gpl", "");
KSYMTAB_FUNC(vcpu_load, "_gpl", "");
KSYMTAB_FUNC(vcpu_put, "_gpl", "");
KSYMTAB_FUNC(kvm_make_all_cpus_request, "_gpl", "");
KSYMTAB_FUNC(kvm_flush_remote_tlbs, "_gpl", "");
KSYMTAB_FUNC(kvm_destroy_vcpus, "_gpl", "");
KSYMTAB_FUNC(kvm_get_kvm, "_gpl", "");
KSYMTAB_FUNC(kvm_get_kvm_safe, "_gpl", "");
KSYMTAB_FUNC(kvm_put_kvm, "_gpl", "");
KSYMTAB_FUNC(kvm_put_kvm_no_destroy, "_gpl", "");
KSYMTAB_FUNC(__kvm_set_memory_region, "_gpl", "");
KSYMTAB_FUNC(kvm_set_memory_region, "_gpl", "");
KSYMTAB_FUNC(gfn_to_memslot, "_gpl", "");
KSYMTAB_FUNC(kvm_is_visible_gfn, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_is_visible_gfn, "_gpl", "");
KSYMTAB_FUNC(gfn_to_hva_memslot, "_gpl", "");
KSYMTAB_FUNC(gfn_to_hva, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_gfn_to_hva, "_gpl", "");
KSYMTAB_FUNC(__gfn_to_pfn_memslot, "_gpl", "");
KSYMTAB_FUNC(gfn_to_pfn_prot, "_gpl", "");
KSYMTAB_FUNC(gfn_to_pfn_memslot, "_gpl", "");
KSYMTAB_FUNC(gfn_to_pfn_memslot_atomic, "_gpl", "");
KSYMTAB_FUNC(gfn_to_pfn, "_gpl", "");
KSYMTAB_FUNC(gfn_to_page_many_atomic, "_gpl", "");
KSYMTAB_FUNC(gfn_to_page, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_map, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_unmap, "_gpl", "");
KSYMTAB_FUNC(kvm_release_page_clean, "_gpl", "");
KSYMTAB_FUNC(kvm_release_pfn_clean, "_gpl", "");
KSYMTAB_FUNC(kvm_release_page_dirty, "_gpl", "");
KSYMTAB_FUNC(kvm_release_pfn_dirty, "_gpl", "");
KSYMTAB_FUNC(kvm_set_pfn_dirty, "_gpl", "");
KSYMTAB_FUNC(kvm_set_pfn_accessed, "_gpl", "");
KSYMTAB_FUNC(kvm_read_guest_page, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_read_guest_page, "_gpl", "");
KSYMTAB_FUNC(kvm_read_guest, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_read_guest, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_read_guest_atomic, "_gpl", "");
KSYMTAB_FUNC(kvm_write_guest_page, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_write_guest_page, "_gpl", "");
KSYMTAB_FUNC(kvm_write_guest, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_write_guest, "_gpl", "");
KSYMTAB_FUNC(kvm_gfn_to_hva_cache_init, "_gpl", "");
KSYMTAB_FUNC(kvm_write_guest_offset_cached, "_gpl", "");
KSYMTAB_FUNC(kvm_write_guest_cached, "_gpl", "");
KSYMTAB_FUNC(kvm_read_guest_offset_cached, "_gpl", "");
KSYMTAB_FUNC(kvm_read_guest_cached, "_gpl", "");
KSYMTAB_FUNC(kvm_clear_guest, "_gpl", "");
KSYMTAB_FUNC(mark_page_dirty_in_slot, "_gpl", "");
KSYMTAB_FUNC(mark_page_dirty, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_mark_page_dirty, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_halt, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_wake_up, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_kick, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_yield_to, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_on_spin, "_gpl", "");
KSYMTAB_FUNC(kvm_are_all_memslots_empty, "_gpl", "");
KSYMTAB_FUNC(file_is_kvm, "_gpl", "");
KSYMTAB_DATA(kvm_rebooting, "_gpl", "");
KSYMTAB_FUNC(kvm_io_bus_write, "_gpl", "");
KSYMTAB_FUNC(kvm_io_bus_get_dev, "_gpl", "");
KSYMTAB_FUNC(kvm_get_running_vcpu, "_gpl", "");
KSYMTAB_FUNC(kvm_init, "_gpl", "");
KSYMTAB_FUNC(kvm_exit, "_gpl", "");
KSYMTAB_FUNC(kvm_irq_has_notifier, "_gpl", "");
KSYMTAB_DATA(kvm_caps, "_gpl", "");
KSYMTAB_DATA(kvm_host, "_gpl", "");
KSYMTAB_DATA(__SCK__kvm_x86_get_cs_db_l_bits, "_gpl", "");
KSYMTAB_FUNC(__SCT__kvm_x86_get_cs_db_l_bits, "_gpl", "");
KSYMTAB_DATA(__SCK__kvm_x86_cache_reg, "_gpl", "");
KSYMTAB_FUNC(__SCT__kvm_x86_cache_reg, "_gpl", "");
KSYMTAB_DATA(report_ignored_msrs, "_gpl", "");
KSYMTAB_DATA(enable_vmware_backdoor, "_gpl", "");
KSYMTAB_DATA(enable_pmu, "_gpl", "");
KSYMTAB_DATA(kvm_nr_uret_msrs, "_gpl", "");
KSYMTAB_DATA(allow_smaller_maxphyaddr, "_gpl", "");
KSYMTAB_DATA(enable_apicv, "_gpl", "");
KSYMTAB_FUNC(kvm_add_user_return_msr, "_gpl", "");
KSYMTAB_FUNC(kvm_find_user_return_msr, "_gpl", "");
KSYMTAB_FUNC(kvm_set_user_return_msr, "_gpl", "");
KSYMTAB_FUNC(kvm_get_apic_mode, "_gpl", "");
KSYMTAB_FUNC(kvm_spurious_fault, "_gpl", "");
KSYMTAB_FUNC(kvm_deliver_exception_payload, "_gpl", "");
KSYMTAB_FUNC(kvm_queue_exception, "_gpl", "");
KSYMTAB_FUNC(kvm_requeue_exception, "_gpl", "");
KSYMTAB_FUNC(kvm_queue_exception_p, "_gpl", "");
KSYMTAB_FUNC(kvm_complete_insn_gp, "_gpl", "");
KSYMTAB_FUNC(kvm_inject_emulated_page_fault, "_gpl", "");
KSYMTAB_FUNC(kvm_queue_exception_e, "_gpl", "");
KSYMTAB_FUNC(kvm_requeue_exception_e, "_gpl", "");
KSYMTAB_FUNC(kvm_require_dr, "_gpl", "");
KSYMTAB_FUNC(load_pdptrs, "_gpl", "");
KSYMTAB_FUNC(kvm_post_set_cr0, "_gpl", "");
KSYMTAB_FUNC(kvm_set_cr0, "_gpl", "");
KSYMTAB_FUNC(kvm_lmsw, "_gpl", "");
KSYMTAB_FUNC(kvm_load_guest_xsave_state, "_gpl", "");
KSYMTAB_FUNC(kvm_load_host_xsave_state, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_xsetbv, "_gpl", "");
KSYMTAB_FUNC(__kvm_is_valid_cr4, "_gpl", "");
KSYMTAB_FUNC(kvm_post_set_cr4, "_gpl", "");
KSYMTAB_FUNC(kvm_set_cr4, "_gpl", "");
KSYMTAB_FUNC(kvm_set_cr3, "_gpl", "");
KSYMTAB_FUNC(kvm_set_cr8, "_gpl", "");
KSYMTAB_FUNC(kvm_get_cr8, "_gpl", "");
KSYMTAB_FUNC(kvm_update_dr7, "_gpl", "");
KSYMTAB_FUNC(kvm_set_dr, "_gpl", "");
KSYMTAB_FUNC(kvm_get_dr, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_rdpmc, "_gpl", "");
KSYMTAB_FUNC(kvm_valid_efer, "_gpl", "");
KSYMTAB_FUNC(kvm_enable_efer_bits, "_gpl", "");
KSYMTAB_FUNC(kvm_msr_allowed, "_gpl", "");
KSYMTAB_FUNC(kvm_get_msr_with_filter, "_gpl", "");
KSYMTAB_FUNC(kvm_set_msr_with_filter, "_gpl", "");
KSYMTAB_FUNC(kvm_get_msr, "_gpl", "");
KSYMTAB_FUNC(kvm_set_msr, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_rdmsr, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_wrmsr, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_invd, "_gpl", "");
KSYMTAB_FUNC(kvm_handle_invalid_op, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_mwait, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_monitor, "_gpl", "");
KSYMTAB_FUNC(handle_fastpath_set_msr_irqoff, "_gpl", "");
KSYMTAB_FUNC(kvm_read_l1_tsc, "_gpl", "");
KSYMTAB_FUNC(kvm_calc_nested_tsc_offset, "_gpl", "");
KSYMTAB_FUNC(kvm_calc_nested_tsc_multiplier, "_gpl", "");
KSYMTAB_FUNC(kvm_service_local_tlb_flush_requests, "_gpl", "");
KSYMTAB_FUNC(kvm_set_msr_common, "_gpl", "");
KSYMTAB_FUNC(kvm_get_msr_common, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_gva_to_gpa_read, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_gva_to_gpa_write, "_gpl", "");
KSYMTAB_FUNC(kvm_read_guest_virt, "_gpl", "");
KSYMTAB_FUNC(kvm_write_guest_virt_system, "_gpl", "");
KSYMTAB_FUNC(handle_ud, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_wbinvd, "_gpl", "");
KSYMTAB_FUNC(kvm_inject_realmode_interrupt, "_gpl", "");
KSYMTAB_FUNC(__kvm_prepare_emulation_failure_exit, "_gpl", "");
KSYMTAB_FUNC(kvm_prepare_emulation_failure_exit, "_gpl", "");
KSYMTAB_FUNC(kvm_skip_emulated_instruction, "_gpl", "");
KSYMTAB_FUNC(x86_decode_emulated_instruction, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_instruction, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_instruction_from_buffer, "_gpl", "");
KSYMTAB_FUNC(kvm_fast_pio, "_gpl", "");
KSYMTAB_FUNC(kvm_x86_vendor_init, "_gpl", "");
KSYMTAB_FUNC(kvm_x86_vendor_exit, "_gpl", "");
KSYMTAB_FUNC(kvm_apicv_activated, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_apicv_activated, "_gpl", "");
KSYMTAB_FUNC(__kvm_emulate_hypercall, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_hypercall, "_gpl", "");
KSYMTAB_FUNC(__kvm_vcpu_update_apicv, "_gpl", "");
KSYMTAB_FUNC(kvm_set_or_clear_apicv_inhibit, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_halt_noskip, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_halt, "_gpl", "");
KSYMTAB_FUNC(handle_fastpath_hlt, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_ap_reset_hold, "_gpl", "");
KSYMTAB_FUNC(kvm_task_switch, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_reset, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_deliver_sipi_vector, "_gpl", "");
KSYMTAB_FUNC(__x86_set_memory_region, "_gpl", "");
KSYMTAB_FUNC(kvm_get_linear_rip, "_gpl", "");
KSYMTAB_FUNC(kvm_is_linear_rip, "_gpl", "");
KSYMTAB_FUNC(kvm_get_rflags, "_gpl", "");
KSYMTAB_FUNC(kvm_set_rflags, "_gpl", "");
KSYMTAB_FUNC(kvm_arch_start_assignment, "_gpl", "");
KSYMTAB_FUNC(kvm_arch_end_assignment, "_gpl", "");
KSYMTAB_FUNC(kvm_arch_has_assigned_device, "_gpl", "");
KSYMTAB_FUNC(kvm_arch_register_noncoherent_dma, "_gpl", "");
KSYMTAB_FUNC(kvm_arch_unregister_noncoherent_dma, "_gpl", "");
KSYMTAB_FUNC(kvm_arch_has_noncoherent_dma, "_gpl", "");
KSYMTAB_FUNC(kvm_arch_no_poll, "_gpl", "");
KSYMTAB_FUNC(kvm_spec_ctrl_test_value, "_gpl", "");
KSYMTAB_FUNC(kvm_fixup_and_inject_pf_error, "_gpl", "");
KSYMTAB_FUNC(kvm_handle_memory_failure, "_gpl", "");
KSYMTAB_FUNC(kvm_handle_invpcid, "_gpl", "");
KSYMTAB_FUNC(kvm_sev_es_mmio_write, "_gpl", "");
KSYMTAB_FUNC(kvm_sev_es_mmio_read, "_gpl", "");
KSYMTAB_FUNC(kvm_sev_es_string_io, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_entry, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_entry, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_entry, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_entry, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_exit, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_exit, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_exit, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_exit, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_fast_mmio, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_fast_mmio, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_fast_mmio, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_fast_mmio, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_inj_virq, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_inj_virq, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_inj_virq, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_inj_virq, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_page_fault, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_page_fault, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_page_fault, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_page_fault, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_msr, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_msr, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_msr, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_msr, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_cr, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_cr, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_cr, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_cr, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_nested_vmenter, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_nested_vmenter, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_nested_vmenter, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_nested_vmenter, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_nested_vmexit, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_nested_vmexit, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_nested_vmexit, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_nested_vmexit, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_nested_vmexit_inject, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_nested_vmexit_inject, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_nested_vmexit_inject, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_nested_vmexit_inject, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_nested_intr_vmexit, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_nested_intr_vmexit, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_nested_intr_vmexit, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_nested_intr_vmexit, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_nested_vmenter_failed, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_nested_vmenter_failed, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_nested_vmenter_failed, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_nested_vmenter_failed, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_invlpga, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_invlpga, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_invlpga, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_invlpga, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_skinit, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_skinit, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_skinit, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_skinit, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_nested_intercepts, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_nested_intercepts, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_nested_intercepts, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_nested_intercepts, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_write_tsc_offset, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_write_tsc_offset, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_write_tsc_offset, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_write_tsc_offset, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_ple_window_update, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_ple_window_update, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_ple_window_update, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_ple_window_update, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_pml_full, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_pml_full, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_pml_full, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_pml_full, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_pi_irte_update, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_pi_irte_update, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_pi_irte_update, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_pi_irte_update, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_avic_unaccelerated_access, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_avic_unaccelerated_access, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_avic_unaccelerated_access, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_avic_unaccelerated_access, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_avic_incomplete_ipi, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_avic_incomplete_ipi, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_avic_incomplete_ipi, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_avic_incomplete_ipi, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_avic_ga_log, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_avic_ga_log, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_avic_ga_log, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_avic_ga_log, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_avic_kick_vcpu_slowpath, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_avic_kick_vcpu_slowpath, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_avic_kick_vcpu_slowpath, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_avic_kick_vcpu_slowpath, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_avic_doorbell, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_avic_doorbell, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_avic_doorbell, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_avic_doorbell, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_apicv_accept_irq, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_apicv_accept_irq, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_apicv_accept_irq, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_apicv_accept_irq, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_vmgexit_enter, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_vmgexit_enter, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_vmgexit_enter, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_vmgexit_enter, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_vmgexit_exit, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_vmgexit_exit, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_vmgexit_exit, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_vmgexit_exit, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_vmgexit_msr_protocol_enter, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_vmgexit_msr_protocol_enter, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_vmgexit_msr_protocol_enter, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_vmgexit_msr_protocol_enter, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_vmgexit_msr_protocol_exit, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_vmgexit_msr_protocol_exit, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_vmgexit_msr_protocol_exit, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_vmgexit_msr_protocol_exit, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_rmp_fault, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_rmp_fault, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_rmp_fault, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_rmp_fault, "_gpl", "");
KSYMTAB_FUNC(kvm_cpu_has_injectable_intr, "_gpl", "");
KSYMTAB_FUNC(kvm_cpu_has_interrupt, "_gpl", "");
KSYMTAB_FUNC(kvm_cpu_get_extint, "_gpl", "");
KSYMTAB_DATA(kvm_has_noapic_vcpu, "_gpl", "");
KSYMTAB_FUNC(__kvm_apic_update_irr, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_update_irr, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_clear_irr, "_gpl", "");
KSYMTAB_FUNC(kvm_lapic_find_highest_irr, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_update_ppr, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_match_dest, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_set_eoi_accelerated, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_send_ipi, "_gpl", "");
KSYMTAB_FUNC(kvm_lapic_readable_reg_mask, "_gpl", "");
KSYMTAB_FUNC(kvm_wait_lapic_expire, "_gpl", "");
KSYMTAB_FUNC(kvm_lapic_expired_hv_timer, "_gpl", "");
KSYMTAB_FUNC(kvm_lapic_set_eoi, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_write_nodecode, "_gpl", "");
KSYMTAB_FUNC(kvm_alloc_apic_access_page, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_has_interrupt, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_ack_interrupt, "_gpl", "");
KSYMTAB_FUNC(kvm_set_msi_irq, "_gpl", "");
KSYMTAB_FUNC(kvm_intr_is_single_vcpu, "_gpl", "");
KSYMTAB_DATA(kvm_cpu_caps, "_gpl", "");
KSYMTAB_FUNC(kvm_update_cpuid_runtime, "_gpl", "");
KSYMTAB_FUNC(kvm_set_cpu_caps, "_gpl", "");
KSYMTAB_FUNC(kvm_find_cpuid_entry_index, "_gpl", "");
KSYMTAB_FUNC(kvm_find_cpuid_entry, "_gpl", "");
KSYMTAB_FUNC(kvm_cpuid, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_cpuid, "_gpl", "");
KSYMTAB_DATA(kvm_pmu_cap, "_gpl", "");
KSYMTAB_DATA(kvm_pmu_eventsel, "_gpl", "");
KSYMTAB_FUNC(pmc_write_counter, "_gpl", "");
KSYMTAB_FUNC(kvm_pmu_trigger_event, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_free_roots, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_free_guest_mode_roots, "_gpl", "");
KSYMTAB_FUNC(kvm_handle_page_fault, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_new_pgd, "_gpl", "");
KSYMTAB_FUNC(kvm_init_shadow_npt_mmu, "_gpl", "");
KSYMTAB_FUNC(kvm_init_shadow_ept_mmu, "_gpl", "");
KSYMTAB_FUNC(kvm_init_mmu, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_reset_context, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_page_fault, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_print_sptes, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_invalidate_addr, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_invlpg, "_gpl", "");
KSYMTAB_FUNC(kvm_configure_mmu, "_gpl", "");
KSYMTAB_FUNC(kvm_zap_gfn_range, "_gpl", "");
KSYMTAB_DATA(enable_mmio_caching, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_set_mmio_spte_mask, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_set_me_spte_mask, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_set_ept_masks, "_gpl", "");
KSYMTAB_FUNC(kvm_hv_assist_page_enabled, "_gpl", "");
KSYMTAB_FUNC(kvm_hv_get_assist_page, "_gpl", "");
KSYMTAB_FUNC(hv_flush_remote_tlbs_range, "_gpl", "");
KSYMTAB_FUNC(hv_flush_remote_tlbs, "_gpl", "");
KSYMTAB_FUNC(hv_track_root_tdp, "_gpl", "");

SYMBOL_CRC(halt_poll_ns, 0x59e640c0, "_gpl");
SYMBOL_CRC(halt_poll_ns_grow, 0x7afe324e, "_gpl");
SYMBOL_CRC(halt_poll_ns_grow_start, 0x5fb8848b, "_gpl");
SYMBOL_CRC(halt_poll_ns_shrink, 0x39fd83db, "_gpl");
SYMBOL_CRC(vcpu_load, 0xe17dfa62, "_gpl");
SYMBOL_CRC(vcpu_put, 0x970f0386, "_gpl");
SYMBOL_CRC(kvm_make_all_cpus_request, 0xf559ebe0, "_gpl");
SYMBOL_CRC(kvm_flush_remote_tlbs, 0x6566205d, "_gpl");
SYMBOL_CRC(kvm_destroy_vcpus, 0x8eb49a8c, "_gpl");
SYMBOL_CRC(kvm_get_kvm, 0xd9c461a7, "_gpl");
SYMBOL_CRC(kvm_get_kvm_safe, 0xa1ca3f4b, "_gpl");
SYMBOL_CRC(kvm_put_kvm, 0x27bcb695, "_gpl");
SYMBOL_CRC(kvm_put_kvm_no_destroy, 0xd854d512, "_gpl");
SYMBOL_CRC(__kvm_set_memory_region, 0x0f2c695d, "_gpl");
SYMBOL_CRC(kvm_set_memory_region, 0xf49dec04, "_gpl");
SYMBOL_CRC(gfn_to_memslot, 0x98bd2e9c, "_gpl");
SYMBOL_CRC(kvm_is_visible_gfn, 0xfe99d5ce, "_gpl");
SYMBOL_CRC(kvm_vcpu_is_visible_gfn, 0x4b9b3f4f, "_gpl");
SYMBOL_CRC(gfn_to_hva_memslot, 0x981e3866, "_gpl");
SYMBOL_CRC(gfn_to_hva, 0xa1ed716c, "_gpl");
SYMBOL_CRC(kvm_vcpu_gfn_to_hva, 0xa3cf50f3, "_gpl");
SYMBOL_CRC(__gfn_to_pfn_memslot, 0x34af4f9d, "_gpl");
SYMBOL_CRC(gfn_to_pfn_prot, 0x3db0a27c, "_gpl");
SYMBOL_CRC(gfn_to_pfn_memslot, 0x4c78ca7b, "_gpl");
SYMBOL_CRC(gfn_to_pfn_memslot_atomic, 0xc13494bc, "_gpl");
SYMBOL_CRC(gfn_to_pfn, 0xf3a9fd7c, "_gpl");
SYMBOL_CRC(gfn_to_page_many_atomic, 0x9be85c7f, "_gpl");
SYMBOL_CRC(gfn_to_page, 0x97abaab6, "_gpl");
SYMBOL_CRC(kvm_vcpu_map, 0xb4b82a6a, "_gpl");
SYMBOL_CRC(kvm_vcpu_unmap, 0x30e1c4fa, "_gpl");
SYMBOL_CRC(kvm_release_page_clean, 0xa08c927f, "_gpl");
SYMBOL_CRC(kvm_release_pfn_clean, 0x4e3fd1b4, "_gpl");
SYMBOL_CRC(kvm_release_page_dirty, 0x4e8f2f10, "_gpl");
SYMBOL_CRC(kvm_release_pfn_dirty, 0x7c94c99a, "_gpl");
SYMBOL_CRC(kvm_set_pfn_dirty, 0xa1c4231f, "_gpl");
SYMBOL_CRC(kvm_set_pfn_accessed, 0x6892e3c3, "_gpl");
SYMBOL_CRC(kvm_read_guest_page, 0x393e07cb, "_gpl");
SYMBOL_CRC(kvm_vcpu_read_guest_page, 0x5cef1dee, "_gpl");
SYMBOL_CRC(kvm_read_guest, 0xfb75fc72, "_gpl");
SYMBOL_CRC(kvm_vcpu_read_guest, 0x05eaa0f4, "_gpl");
SYMBOL_CRC(kvm_vcpu_read_guest_atomic, 0x7d85d445, "_gpl");
SYMBOL_CRC(kvm_write_guest_page, 0xb8907859, "_gpl");
SYMBOL_CRC(kvm_vcpu_write_guest_page, 0xddf65613, "_gpl");
SYMBOL_CRC(kvm_write_guest, 0x87dead8f, "_gpl");
SYMBOL_CRC(kvm_vcpu_write_guest, 0x9c1e8c9a, "_gpl");
SYMBOL_CRC(kvm_gfn_to_hva_cache_init, 0x89952a9f, "_gpl");
SYMBOL_CRC(kvm_write_guest_offset_cached, 0xf4ea7678, "_gpl");
SYMBOL_CRC(kvm_write_guest_cached, 0xe9e46d5f, "_gpl");
SYMBOL_CRC(kvm_read_guest_offset_cached, 0xe7c81c4e, "_gpl");
SYMBOL_CRC(kvm_read_guest_cached, 0x609da4e9, "_gpl");
SYMBOL_CRC(kvm_clear_guest, 0xac3e1ed5, "_gpl");
SYMBOL_CRC(mark_page_dirty_in_slot, 0x03214112, "_gpl");
SYMBOL_CRC(mark_page_dirty, 0x7ba53b2b, "_gpl");
SYMBOL_CRC(kvm_vcpu_mark_page_dirty, 0xfbdb084b, "_gpl");
SYMBOL_CRC(kvm_vcpu_halt, 0xded55a13, "_gpl");
SYMBOL_CRC(kvm_vcpu_wake_up, 0xb7217383, "_gpl");
SYMBOL_CRC(kvm_vcpu_kick, 0xf2fc7881, "_gpl");
SYMBOL_CRC(kvm_vcpu_yield_to, 0x87c43fa6, "_gpl");
SYMBOL_CRC(kvm_vcpu_on_spin, 0x4b2d052b, "_gpl");
SYMBOL_CRC(kvm_are_all_memslots_empty, 0x94a7a3d8, "_gpl");
SYMBOL_CRC(file_is_kvm, 0x1369df05, "_gpl");
SYMBOL_CRC(kvm_rebooting, 0x485cd7f6, "_gpl");
SYMBOL_CRC(kvm_io_bus_write, 0x3f2c33d0, "_gpl");
SYMBOL_CRC(kvm_io_bus_get_dev, 0xee5976c6, "_gpl");
SYMBOL_CRC(kvm_get_running_vcpu, 0x4c42ad7a, "_gpl");
SYMBOL_CRC(kvm_init, 0xde272e49, "_gpl");
SYMBOL_CRC(kvm_exit, 0x27046576, "_gpl");
SYMBOL_CRC(kvm_irq_has_notifier, 0x86bff78a, "_gpl");
SYMBOL_CRC(kvm_caps, 0xcf509080, "_gpl");
SYMBOL_CRC(kvm_host, 0xb8bdeb6e, "_gpl");
SYMBOL_CRC(__SCK__kvm_x86_get_cs_db_l_bits, 0xc43e20ed, "_gpl");
SYMBOL_CRC(__SCT__kvm_x86_get_cs_db_l_bits, 0x53d9f927, "_gpl");
SYMBOL_CRC(__SCK__kvm_x86_cache_reg, 0x6508a9b9, "_gpl");
SYMBOL_CRC(__SCT__kvm_x86_cache_reg, 0x59387ba3, "_gpl");
SYMBOL_CRC(report_ignored_msrs, 0xc96d35f4, "_gpl");
SYMBOL_CRC(enable_vmware_backdoor, 0x1db1c372, "_gpl");
SYMBOL_CRC(enable_pmu, 0xb82c0987, "_gpl");
SYMBOL_CRC(kvm_nr_uret_msrs, 0x0b58a11d, "_gpl");
SYMBOL_CRC(allow_smaller_maxphyaddr, 0x9cf59e7a, "_gpl");
SYMBOL_CRC(enable_apicv, 0xce576a13, "_gpl");
SYMBOL_CRC(kvm_add_user_return_msr, 0x7fe19488, "_gpl");
SYMBOL_CRC(kvm_find_user_return_msr, 0x3ab2794c, "_gpl");
SYMBOL_CRC(kvm_set_user_return_msr, 0x053614ec, "_gpl");
SYMBOL_CRC(kvm_get_apic_mode, 0x83598345, "_gpl");
SYMBOL_CRC(kvm_spurious_fault, 0x709cd8cb, "_gpl");
SYMBOL_CRC(kvm_deliver_exception_payload, 0x8c82ead4, "_gpl");
SYMBOL_CRC(kvm_queue_exception, 0x2e14d515, "_gpl");
SYMBOL_CRC(kvm_requeue_exception, 0x4f33aa8d, "_gpl");
SYMBOL_CRC(kvm_queue_exception_p, 0x93fc8e7f, "_gpl");
SYMBOL_CRC(kvm_complete_insn_gp, 0xa71e1bb8, "_gpl");
SYMBOL_CRC(kvm_inject_emulated_page_fault, 0xf5f1687e, "_gpl");
SYMBOL_CRC(kvm_queue_exception_e, 0x3ee4d0ec, "_gpl");
SYMBOL_CRC(kvm_requeue_exception_e, 0x665ab419, "_gpl");
SYMBOL_CRC(kvm_require_dr, 0x659bda3e, "_gpl");
SYMBOL_CRC(load_pdptrs, 0x340728d5, "_gpl");
SYMBOL_CRC(kvm_post_set_cr0, 0x96ce571d, "_gpl");
SYMBOL_CRC(kvm_set_cr0, 0x9bd9b28b, "_gpl");
SYMBOL_CRC(kvm_lmsw, 0x9310c0d5, "_gpl");
SYMBOL_CRC(kvm_load_guest_xsave_state, 0x9ded6b28, "_gpl");
SYMBOL_CRC(kvm_load_host_xsave_state, 0x8180702d, "_gpl");
SYMBOL_CRC(kvm_emulate_xsetbv, 0xe9313472, "_gpl");
SYMBOL_CRC(__kvm_is_valid_cr4, 0x828abb29, "_gpl");
SYMBOL_CRC(kvm_post_set_cr4, 0xc2d0a9d4, "_gpl");
SYMBOL_CRC(kvm_set_cr4, 0x05751a3e, "_gpl");
SYMBOL_CRC(kvm_set_cr3, 0x68400e4c, "_gpl");
SYMBOL_CRC(kvm_set_cr8, 0x7df1e5a0, "_gpl");
SYMBOL_CRC(kvm_get_cr8, 0x4220c31c, "_gpl");
SYMBOL_CRC(kvm_update_dr7, 0x5fe35c27, "_gpl");
SYMBOL_CRC(kvm_set_dr, 0x5e5d3ff1, "_gpl");
SYMBOL_CRC(kvm_get_dr, 0x4fc11cfc, "_gpl");
SYMBOL_CRC(kvm_emulate_rdpmc, 0xefb3efb8, "_gpl");
SYMBOL_CRC(kvm_valid_efer, 0x51fdecaf, "_gpl");
SYMBOL_CRC(kvm_enable_efer_bits, 0x1d013832, "_gpl");
SYMBOL_CRC(kvm_msr_allowed, 0x1b7aee8e, "_gpl");
SYMBOL_CRC(kvm_get_msr_with_filter, 0x678fcdba, "_gpl");
SYMBOL_CRC(kvm_set_msr_with_filter, 0xfce78ab5, "_gpl");
SYMBOL_CRC(kvm_get_msr, 0x613d46d8, "_gpl");
SYMBOL_CRC(kvm_set_msr, 0xd830bb56, "_gpl");
SYMBOL_CRC(kvm_emulate_rdmsr, 0xcda7704a, "_gpl");
SYMBOL_CRC(kvm_emulate_wrmsr, 0xa9e3e330, "_gpl");
SYMBOL_CRC(kvm_emulate_invd, 0x4248ef36, "_gpl");
SYMBOL_CRC(kvm_handle_invalid_op, 0xc54e4a08, "_gpl");
SYMBOL_CRC(kvm_emulate_mwait, 0x23f23b66, "_gpl");
SYMBOL_CRC(kvm_emulate_monitor, 0x65a333ca, "_gpl");
SYMBOL_CRC(handle_fastpath_set_msr_irqoff, 0xf7341410, "_gpl");
SYMBOL_CRC(kvm_read_l1_tsc, 0x30428200, "_gpl");
SYMBOL_CRC(kvm_calc_nested_tsc_offset, 0x6303c089, "_gpl");
SYMBOL_CRC(kvm_calc_nested_tsc_multiplier, 0xef14fd98, "_gpl");
SYMBOL_CRC(kvm_service_local_tlb_flush_requests, 0x90ee8a34, "_gpl");
SYMBOL_CRC(kvm_set_msr_common, 0xb67f174b, "_gpl");
SYMBOL_CRC(kvm_get_msr_common, 0x59b2776f, "_gpl");
SYMBOL_CRC(kvm_mmu_gva_to_gpa_read, 0x0f4d6ca9, "_gpl");
SYMBOL_CRC(kvm_mmu_gva_to_gpa_write, 0xd8101dea, "_gpl");
SYMBOL_CRC(kvm_read_guest_virt, 0x1c71353b, "_gpl");
SYMBOL_CRC(kvm_write_guest_virt_system, 0x8ab2fcf2, "_gpl");
SYMBOL_CRC(handle_ud, 0x1b9cc6aa, "_gpl");
SYMBOL_CRC(kvm_emulate_wbinvd, 0x73c135b3, "_gpl");
SYMBOL_CRC(kvm_inject_realmode_interrupt, 0x7eba9ffb, "_gpl");
SYMBOL_CRC(__kvm_prepare_emulation_failure_exit, 0x62a8643c, "_gpl");
SYMBOL_CRC(kvm_prepare_emulation_failure_exit, 0xba75c362, "_gpl");
SYMBOL_CRC(kvm_skip_emulated_instruction, 0xcacbd05f, "_gpl");
SYMBOL_CRC(x86_decode_emulated_instruction, 0xc5adeaa0, "_gpl");
SYMBOL_CRC(kvm_emulate_instruction, 0x3d0447c7, "_gpl");
SYMBOL_CRC(kvm_emulate_instruction_from_buffer, 0xf181032f, "_gpl");
SYMBOL_CRC(kvm_fast_pio, 0x34f889f4, "_gpl");
SYMBOL_CRC(kvm_x86_vendor_init, 0x5b7b830c, "_gpl");
SYMBOL_CRC(kvm_x86_vendor_exit, 0x687b78fc, "_gpl");
SYMBOL_CRC(kvm_apicv_activated, 0x8290e7ad, "_gpl");
SYMBOL_CRC(kvm_vcpu_apicv_activated, 0x7ef089f7, "_gpl");
SYMBOL_CRC(__kvm_emulate_hypercall, 0x148471d1, "_gpl");
SYMBOL_CRC(kvm_emulate_hypercall, 0x3cadedd0, "_gpl");
SYMBOL_CRC(__kvm_vcpu_update_apicv, 0x08d7e766, "_gpl");
SYMBOL_CRC(kvm_set_or_clear_apicv_inhibit, 0xbbec792b, "_gpl");
SYMBOL_CRC(kvm_emulate_halt_noskip, 0xf447173f, "_gpl");
SYMBOL_CRC(kvm_emulate_halt, 0xf352ee80, "_gpl");
SYMBOL_CRC(handle_fastpath_hlt, 0x3dff86a5, "_gpl");
SYMBOL_CRC(kvm_emulate_ap_reset_hold, 0x386da025, "_gpl");
SYMBOL_CRC(kvm_task_switch, 0xd8683867, "_gpl");
SYMBOL_CRC(kvm_vcpu_reset, 0xb6d3b473, "_gpl");
SYMBOL_CRC(kvm_vcpu_deliver_sipi_vector, 0x65b83531, "_gpl");
SYMBOL_CRC(__x86_set_memory_region, 0x98070117, "_gpl");
SYMBOL_CRC(kvm_get_linear_rip, 0xffc6bf70, "_gpl");
SYMBOL_CRC(kvm_is_linear_rip, 0x03382622, "_gpl");
SYMBOL_CRC(kvm_get_rflags, 0x06d39af5, "_gpl");
SYMBOL_CRC(kvm_set_rflags, 0x4152da86, "_gpl");
SYMBOL_CRC(kvm_arch_start_assignment, 0x6b448fb4, "_gpl");
SYMBOL_CRC(kvm_arch_end_assignment, 0x886e9c8b, "_gpl");
SYMBOL_CRC(kvm_arch_has_assigned_device, 0xd3752d75, "_gpl");
SYMBOL_CRC(kvm_arch_register_noncoherent_dma, 0xdeebf915, "_gpl");
SYMBOL_CRC(kvm_arch_unregister_noncoherent_dma, 0xc1b2ed22, "_gpl");
SYMBOL_CRC(kvm_arch_has_noncoherent_dma, 0x14561c18, "_gpl");
SYMBOL_CRC(kvm_arch_no_poll, 0x9459963a, "_gpl");
SYMBOL_CRC(kvm_spec_ctrl_test_value, 0x2d82cc24, "_gpl");
SYMBOL_CRC(kvm_fixup_and_inject_pf_error, 0x7c300588, "_gpl");
SYMBOL_CRC(kvm_handle_memory_failure, 0x4115ab1a, "_gpl");
SYMBOL_CRC(kvm_handle_invpcid, 0x52f215da, "_gpl");
SYMBOL_CRC(kvm_sev_es_mmio_write, 0xca7c8d2e, "_gpl");
SYMBOL_CRC(kvm_sev_es_mmio_read, 0x1bac3bb8, "_gpl");
SYMBOL_CRC(kvm_sev_es_string_io, 0x1b45171c, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_entry, 0xbfab50f6, "_gpl");
SYMBOL_CRC(__traceiter_kvm_entry, 0x6b0f7263, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_entry, 0xbbfa2776, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_entry, 0xc071e99f, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_exit, 0x513ae683, "_gpl");
SYMBOL_CRC(__traceiter_kvm_exit, 0x9c85a2ea, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_exit, 0xdb6b7305, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_exit, 0x616e6c95, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_fast_mmio, 0x8394c91b, "_gpl");
SYMBOL_CRC(__traceiter_kvm_fast_mmio, 0x752c2b00, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_fast_mmio, 0x9bbea9f9, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_fast_mmio, 0xea5cda33, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_inj_virq, 0xe123a7b3, "_gpl");
SYMBOL_CRC(__traceiter_kvm_inj_virq, 0x7f51547e, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_inj_virq, 0x7c043264, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_inj_virq, 0x6becaded, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_page_fault, 0x0d9d6dcc, "_gpl");
SYMBOL_CRC(__traceiter_kvm_page_fault, 0x675146b4, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_page_fault, 0x4381c4f8, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_page_fault, 0x7ff2a104, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_msr, 0xe75d504e, "_gpl");
SYMBOL_CRC(__traceiter_kvm_msr, 0xdc7369fe, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_msr, 0xd3013a55, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_msr, 0xf084b57d, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_cr, 0x7cf7159b, "_gpl");
SYMBOL_CRC(__traceiter_kvm_cr, 0x17f9cfe3, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_cr, 0x4e44f2f2, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_cr, 0x778e30b9, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_nested_vmenter, 0x1764dddd, "_gpl");
SYMBOL_CRC(__traceiter_kvm_nested_vmenter, 0x74910627, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_nested_vmenter, 0xc997e50e, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_nested_vmenter, 0x6d2c9437, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_nested_vmexit, 0x6b39c530, "_gpl");
SYMBOL_CRC(__traceiter_kvm_nested_vmexit, 0x3ebbf6a9, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_nested_vmexit, 0x239fd3dd, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_nested_vmexit, 0x2510fc6d, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_nested_vmexit_inject, 0x884a3a60, "_gpl");
SYMBOL_CRC(__traceiter_kvm_nested_vmexit_inject, 0x114eb824, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_nested_vmexit_inject, 0x9e7506d5, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_nested_vmexit_inject, 0x8b618aa6, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_nested_intr_vmexit, 0x9e9607a2, "_gpl");
SYMBOL_CRC(__traceiter_kvm_nested_intr_vmexit, 0x912a9286, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_nested_intr_vmexit, 0xdef5e850, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_nested_intr_vmexit, 0xd09da48b, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_nested_vmenter_failed, 0x972bf09a, "_gpl");
SYMBOL_CRC(__traceiter_kvm_nested_vmenter_failed, 0x23263c0a, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_nested_vmenter_failed, 0x2c3688a5, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_nested_vmenter_failed, 0xe93dfc8c, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_invlpga, 0xe2b689dd, "_gpl");
SYMBOL_CRC(__traceiter_kvm_invlpga, 0x54c1e24a, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_invlpga, 0x1754f158, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_invlpga, 0x4a1c261b, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_skinit, 0xa9808b4f, "_gpl");
SYMBOL_CRC(__traceiter_kvm_skinit, 0xb96e9aa1, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_skinit, 0x443c5918, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_skinit, 0xe0e786a7, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_nested_intercepts, 0xf471f879, "_gpl");
SYMBOL_CRC(__traceiter_kvm_nested_intercepts, 0xa6a50230, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_nested_intercepts, 0x48956c93, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_nested_intercepts, 0xa588ef67, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_write_tsc_offset, 0x28808ac8, "_gpl");
SYMBOL_CRC(__traceiter_kvm_write_tsc_offset, 0x5c11e105, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_write_tsc_offset, 0xaa977a79, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_write_tsc_offset, 0xa84a2e73, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_ple_window_update, 0x8edca894, "_gpl");
SYMBOL_CRC(__traceiter_kvm_ple_window_update, 0x1412f042, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_ple_window_update, 0x32383c7e, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_ple_window_update, 0x93a3e40e, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_pml_full, 0x9fe4fc83, "_gpl");
SYMBOL_CRC(__traceiter_kvm_pml_full, 0xc60d7d0c, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_pml_full, 0x02c36954, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_pml_full, 0xf2df48f3, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_pi_irte_update, 0xe08c051b, "_gpl");
SYMBOL_CRC(__traceiter_kvm_pi_irte_update, 0x45e80fdf, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_pi_irte_update, 0x3e7f3dc8, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_pi_irte_update, 0x388e0e10, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_avic_unaccelerated_access, 0x1de36db2, "_gpl");
SYMBOL_CRC(__traceiter_kvm_avic_unaccelerated_access, 0x9f68faa3, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_avic_unaccelerated_access, 0x4c96bab5, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_avic_unaccelerated_access, 0xf32dff97, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_avic_incomplete_ipi, 0xeb11bed8, "_gpl");
SYMBOL_CRC(__traceiter_kvm_avic_incomplete_ipi, 0x9e20b2bc, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_avic_incomplete_ipi, 0xb8e24e07, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_avic_incomplete_ipi, 0x4942be67, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_avic_ga_log, 0x845d4c13, "_gpl");
SYMBOL_CRC(__traceiter_kvm_avic_ga_log, 0xa7022320, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_avic_ga_log, 0xa5a7a40f, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_avic_ga_log, 0x1d1b139a, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_avic_kick_vcpu_slowpath, 0x43edb2c5, "_gpl");
SYMBOL_CRC(__traceiter_kvm_avic_kick_vcpu_slowpath, 0x4733bf8c, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_avic_kick_vcpu_slowpath, 0x45eddaea, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_avic_kick_vcpu_slowpath, 0x5f911332, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_avic_doorbell, 0x3bdb4e38, "_gpl");
SYMBOL_CRC(__traceiter_kvm_avic_doorbell, 0xc7fe55ac, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_avic_doorbell, 0x737d58d5, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_avic_doorbell, 0x1f8e9483, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_apicv_accept_irq, 0xd1f618b9, "_gpl");
SYMBOL_CRC(__traceiter_kvm_apicv_accept_irq, 0x3d93fb92, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_apicv_accept_irq, 0x53e1e808, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_apicv_accept_irq, 0x5c7e9f84, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_vmgexit_enter, 0x578444e9, "_gpl");
SYMBOL_CRC(__traceiter_kvm_vmgexit_enter, 0x8f3a890e, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_vmgexit_enter, 0x1f225204, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_vmgexit_enter, 0x8a7fe54a, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_vmgexit_exit, 0x54ab97da, "_gpl");
SYMBOL_CRC(__traceiter_kvm_vmgexit_exit, 0x7510a39a, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_vmgexit_exit, 0x408b317d, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_vmgexit_exit, 0x48644036, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_vmgexit_msr_protocol_enter, 0x4515c45b, "_gpl");
SYMBOL_CRC(__traceiter_kvm_vmgexit_msr_protocol_enter, 0x0ca8df68, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_vmgexit_msr_protocol_enter, 0xdb20242f, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_vmgexit_msr_protocol_enter, 0xf54e2886, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_vmgexit_msr_protocol_exit, 0x72c27583, "_gpl");
SYMBOL_CRC(__traceiter_kvm_vmgexit_msr_protocol_exit, 0x25c07225, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_vmgexit_msr_protocol_exit, 0x23b7a284, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_vmgexit_msr_protocol_exit, 0x0cff45f4, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_rmp_fault, 0xd405bc7d, "_gpl");
SYMBOL_CRC(__traceiter_kvm_rmp_fault, 0x286c1b81, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_rmp_fault, 0xcc2fdc9f, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_rmp_fault, 0xad9b683b, "_gpl");
SYMBOL_CRC(kvm_cpu_has_injectable_intr, 0xce421974, "_gpl");
SYMBOL_CRC(kvm_cpu_has_interrupt, 0xcc6267b2, "_gpl");
SYMBOL_CRC(kvm_cpu_get_extint, 0x4be3109d, "_gpl");
SYMBOL_CRC(kvm_has_noapic_vcpu, 0x3f510ff5, "_gpl");
SYMBOL_CRC(__kvm_apic_update_irr, 0x6243ac82, "_gpl");
SYMBOL_CRC(kvm_apic_update_irr, 0xab55cd08, "_gpl");
SYMBOL_CRC(kvm_apic_clear_irr, 0x61f31aab, "_gpl");
SYMBOL_CRC(kvm_lapic_find_highest_irr, 0xc5fd3374, "_gpl");
SYMBOL_CRC(kvm_apic_update_ppr, 0x050938a9, "_gpl");
SYMBOL_CRC(kvm_apic_match_dest, 0xc1c6a335, "_gpl");
SYMBOL_CRC(kvm_apic_set_eoi_accelerated, 0xad8f283a, "_gpl");
SYMBOL_CRC(kvm_apic_send_ipi, 0x768f6c40, "_gpl");
SYMBOL_CRC(kvm_lapic_readable_reg_mask, 0xdde129a9, "_gpl");
SYMBOL_CRC(kvm_wait_lapic_expire, 0x2de5035b, "_gpl");
SYMBOL_CRC(kvm_lapic_expired_hv_timer, 0x0b349a53, "_gpl");
SYMBOL_CRC(kvm_lapic_set_eoi, 0x02964e50, "_gpl");
SYMBOL_CRC(kvm_apic_write_nodecode, 0x251159a7, "_gpl");
SYMBOL_CRC(kvm_alloc_apic_access_page, 0x38741409, "_gpl");
SYMBOL_CRC(kvm_apic_has_interrupt, 0xbfb24cf0, "_gpl");
SYMBOL_CRC(kvm_apic_ack_interrupt, 0xb582a0c0, "_gpl");
SYMBOL_CRC(kvm_set_msi_irq, 0x657bb33b, "_gpl");
SYMBOL_CRC(kvm_intr_is_single_vcpu, 0xd00d59e5, "_gpl");
SYMBOL_CRC(kvm_cpu_caps, 0xbff653a2, "_gpl");
SYMBOL_CRC(kvm_update_cpuid_runtime, 0x25315395, "_gpl");
SYMBOL_CRC(kvm_set_cpu_caps, 0x5d996b31, "_gpl");
SYMBOL_CRC(kvm_find_cpuid_entry_index, 0xf6b2c392, "_gpl");
SYMBOL_CRC(kvm_find_cpuid_entry, 0xa15b4b3a, "_gpl");
SYMBOL_CRC(kvm_cpuid, 0x825ce358, "_gpl");
SYMBOL_CRC(kvm_emulate_cpuid, 0x02bb46f6, "_gpl");
SYMBOL_CRC(kvm_pmu_cap, 0xd475c188, "_gpl");
SYMBOL_CRC(kvm_pmu_eventsel, 0xfcc16c54, "_gpl");
SYMBOL_CRC(pmc_write_counter, 0xb341b44d, "_gpl");
SYMBOL_CRC(kvm_pmu_trigger_event, 0x5dcd5cf5, "_gpl");
SYMBOL_CRC(kvm_mmu_free_roots, 0x2db19a93, "_gpl");
SYMBOL_CRC(kvm_mmu_free_guest_mode_roots, 0xbf7494bf, "_gpl");
SYMBOL_CRC(kvm_handle_page_fault, 0x81430f4b, "_gpl");
SYMBOL_CRC(kvm_mmu_new_pgd, 0x84e62e9a, "_gpl");
SYMBOL_CRC(kvm_init_shadow_npt_mmu, 0x5d6e293a, "_gpl");
SYMBOL_CRC(kvm_init_shadow_ept_mmu, 0x793edc23, "_gpl");
SYMBOL_CRC(kvm_init_mmu, 0x4936f604, "_gpl");
SYMBOL_CRC(kvm_mmu_reset_context, 0x9490f105, "_gpl");
SYMBOL_CRC(kvm_mmu_page_fault, 0x54a97be8, "_gpl");
SYMBOL_CRC(kvm_mmu_print_sptes, 0x78b60b51, "_gpl");
SYMBOL_CRC(kvm_mmu_invalidate_addr, 0x17553418, "_gpl");
SYMBOL_CRC(kvm_mmu_invlpg, 0x7cf883e7, "_gpl");
SYMBOL_CRC(kvm_configure_mmu, 0x06cdc8d1, "_gpl");
SYMBOL_CRC(kvm_zap_gfn_range, 0x22be69d9, "_gpl");
SYMBOL_CRC(enable_mmio_caching, 0xfab33e4c, "_gpl");
SYMBOL_CRC(kvm_mmu_set_mmio_spte_mask, 0x6ada8f59, "_gpl");
SYMBOL_CRC(kvm_mmu_set_me_spte_mask, 0xbd9d6dfc, "_gpl");
SYMBOL_CRC(kvm_mmu_set_ept_masks, 0x5bf7cde0, "_gpl");
SYMBOL_CRC(kvm_hv_assist_page_enabled, 0x5eb31058, "_gpl");
SYMBOL_CRC(kvm_hv_get_assist_page, 0x7494db76, "_gpl");
SYMBOL_CRC(hv_flush_remote_tlbs_range, 0xd133603e, "_gpl");
SYMBOL_CRC(hv_flush_remote_tlbs, 0xc69498f8, "_gpl");
SYMBOL_CRC(hv_track_root_tdp, 0xcf42fbb8, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x3828946, "fixup_user_fault" },
	{ 0x8656f320, "debugfs_remove" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xb580d848, "preempt_notifier_register" },
	{ 0x29a75587, "finish_rcuwait" },
	{ 0x5b3f81e6, "__SCK__tp_func_ipi_send_cpu" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xf60300c0, "fpu_free_guest_fpstate" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa495614a, "mmu_notifier_unregister" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x995d1071, "prof_on" },
	{ 0xbebcb589, "xfer_to_guest_mode_handle_work" },
	{ 0xf90f01e7, "cleanup_srcu_struct" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb5f4750d, "__put_devmap_managed_folio_refs" },
	{ 0x585258e2, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x29c7fa7d, "__vcalloc_noprof" },
	{ 0x77f24400, "perf_register_guest_info_callbacks" },
	{ 0xeee667d3, "fpregs_assert_state_consistent" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1475d603, "xstate_get_guest_group_perm" },
	{ 0x95a052b1, "bpf_trace_run1" },
	{ 0x38ea9765, "intel_pt_validate_hw_cap" },
	{ 0x4d609079, "bpf_trace_run9" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x7b64d81, "hyperv_stop_tsc_emulation" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3fe35aea, "irq_bypass_unregister_consumer" },
	{ 0xfb578fc5, "memset" },
	{ 0x41ed3cec, "eventfd_ctx_remove_wait_queue" },
	{ 0xc95ccf37, "synchronize_srcu_expedited" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x2c4f2e35, "__vmalloc_noprof" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xea43f98d, "misc_register" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4248ae3c, "single_task_running" },
	{ 0x6214aef2, "cpufreq_unregister_notifier" },
	{ 0x59d91a0, "fpu_swap_kvm_fpstate" },
	{ 0x56398615, "mark_tsc_unstable" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x32dd09d, "simple_attr_read" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x6d16c104, "mutex_lock_killable" },
	{ 0x668b19a1, "down_read" },
	{ 0x24a900a6, "__mmdrop" },
	{ 0xa0ebc08, "__xa_cmpxchg" },
	{ 0xe31fdd06, "fpu_copy_uabi_to_guest_fpstate" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x7c46233a, "cpufreq_quick_get" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbb13595e, "smp_call_function_many" },
	{ 0x68a12ab8, "rep_movs_alternative" },
	{ 0xc03f042e, "kthread_create_on_node" },
	{ 0x601392fa, "__lruvec_stat_mod_folio" },
	{ 0xaa6a50f9, "__static_key_deferred_flush" },
	{ 0x745a981, "xa_erase" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd8bb697, "bpf_trace_run3" },
	{ 0x22224085, "__mmap_lock_do_trace_start_locking" },
	{ 0x5c4440b5, "seq_read" },
	{ 0xb4b97c90, "pvclock_gtod_register_notifier" },
	{ 0xb30b2bda, "preempt_model_full" },
	{ 0x94c62eb0, "trace_print_flags_seq" },
	{ 0x2fc43ea7, "perf_event_enable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x29ad8e33, "x86_hyper_type" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x249880fb, "irq_work_sync" },
	{ 0x44aaf30f, "tsc_khz" },
	{ 0x51cd0202, "debugfs_create_file" },
	{ 0x7230beea, "fdget" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x999e8297, "vfree" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x6b163536, "mmput" },
	{ 0xc683da81, "set_memory_decrypted" },
	{ 0x4c076063, "kthread_destroy_worker" },
	{ 0x57861a5c, "gds_ucode_mitigated" },
	{ 0x3a099605, "__get_user_nocheck_4" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0xb89e69b1, "jump_label_update_timeout" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x265b6e29, "hyperv_flush_guest_mapping_range" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xa6729c43, "cpu_info" },
	{ 0x4560b235, "get_user_pages_fast_only" },
	{ 0xe0e6ef02, "perf_get_x86_pmu_capability" },
	{ 0x7d3f3617, "fpu_enable_guest_xfd_features" },
	{ 0xb5090815, "get_user_pages_unlocked" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x456d9a6, "__tracepoint_mmap_lock_start_locking" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0x94c1bfc3, "__folio_put" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x65d9e877, "cpufreq_register_notifier" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x50b03f5d, "l1tf_vmx_mitigation" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x377214d3, "seq_printf" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0x6b0f51a2, "__mmap_lock_do_trace_released" },
	{ 0x7c9adcc2, "dput" },
	{ 0x5b3e282f, "xa_store" },
	{ 0x550ce709, "pat_enabled" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x858798ad, "__hrtimer_get_remaining" },
	{ 0x8d6aff89, "__put_user_nocheck_4" },
	{ 0x7452adff, "user_return_notifier_register" },
	{ 0x755abc1, "__srcu_read_unlock" },
	{ 0x32bc0fcf, "preempt_notifier_dec" },
	{ 0xdb1b4545, "mmu_notifier_register" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x5f2da8c4, "check_tsc_unstable" },
	{ 0xe9dc51c5, "cpu_emergency_register_virt_callback" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0x888c5be5, "irq_bypass_register_consumer" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x5cfaa3b8, "rcuwait_wake_up" },
	{ 0xd4f9fdc4, "single_release" },
	{ 0xdab5a1eb, "interval_tree_insert" },
	{ 0xdadc1c1a, "pid_vnr" },
	{ 0xbd27230f, "cpufreq_cpu_get" },
	{ 0x576aa7bc, "preempt_notifier_unregister" },
	{ 0x947b40c6, "cpu_smt_possible" },
	{ 0x25f87992, "fpu_alloc_guest_fpstate" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x88073b95, "follow_pfnmap_end" },
	{ 0x69ad6ac1, "cpu_emergency_unregister_virt_callback" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0xd6df01f7, "perf_get_hw_event_config" },
	{ 0xef8fc95f, "kvm_async_pf_task_wait_schedule" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x4d3f91cf, "perf_event_release_kernel" },
	{ 0x754d539c, "strlen" },
	{ 0x1b0be24d, "bpf_trace_run7" },
	{ 0x1d549db, "get_task_pid" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe77e38c8, "fpstate_clear_xstate_component" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x50472d9a, "single_open" },
	{ 0xe83eba32, "itlb_multihit_kvm_mitigation" },
	{ 0xe911df29, "eventfd_ctx_do_read" },
	{ 0x5bc8a689, "__static_call_update" },
	{ 0x8b0ac9d7, "debugfs_create_dir" },
	{ 0x3e0f9d5b, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x5f18a6, "add_wait_queue_priority" },
	{ 0xc10e997, "eventfd_signal_mask" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x53b954a2, "up_read" },
	{ 0xfa11a0ac, "put_pid" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0xaab744b7, "__cpuhp_remove_state" },
	{ 0x9b53e14, "interval_tree_remove" },
	{ 0x3466ce63, "x86_msi_msg_get_destid" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x8730bb0b, "eventfd_ctx_fileget" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4e8f828, "mtree_load" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0xfb29dedc, "vma_kernel_pagesize" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x4e719d8c, "yield_to" },
	{ 0x6a5fa363, "sigprocmask" },
	{ 0x196614ce, "hw_breakpoint_restore" },
	{ 0x48112d76, "_raw_read_lock_irq" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xd5f3bb7b, "set_memory_encrypted" },
	{ 0x8cfdcc81, "shrinker_alloc" },
	{ 0x113a717d, "simple_attr_write" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0xe53b1916, "anon_inode_getfile" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3b7a7163, "__static_call_return0" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x950e7aae, "kthread_create_worker" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xc76f9d9a, "simple_attr_open" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xde387d18, "kthread_flush_work" },
	{ 0x6988d0ca, "cpu_dr7" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0xb6671de9, "bpf_trace_run4" },
	{ 0x20978fb9, "idr_find" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x67955ce6, "profile_hits" },
	{ 0x916aefbe, "__percpu_counter_init_many" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2c834418, "static_key_slow_inc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x9241b358, "__static_key_slow_dec_deferred" },
	{ 0x63f835ba, "on_each_cpu_cond_mask" },
	{ 0x4ec8d88, "vmalloc_to_page" },
	{ 0xb0e602eb, "memmove" },
	{ 0xfe13a601, "trace_seq_printf" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0x4d4141b, "perf_event_create_kernel_counter" },
	{ 0xa58af0a6, "_raw_read_unlock_irq" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xb3ba3a47, "cgroup_attach_task_all" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xaf2cecc6, "param_get_bool" },
	{ 0xf8cd6528, "bpf_trace_run6" },
	{ 0xca9360b5, "rb_next" },
	{ 0x5b56860c, "vm_munmap" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0xee752a35, "get_pid_task" },
	{ 0x4e50eb3e, "fpu_copy_guest_fpstate_to_uabi" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xf7370f56, "system_state" },
	{ 0x35505819, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x466c14a7, "__delay" },
	{ 0x1057a279, "bsearch" },
	{ 0x61e1334, "fget" },
	{ 0xaa3e7736, "__put_task_struct" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x23c0b550, "set_user_nice" },
	{ 0x46a6c9ef, "hv_get_tsc_page" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x3ba01b47, "get_compat_sigset" },
	{ 0xcd81a945, "switch_fpu_return" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0x301304c2, "__get_user_nocheck_8" },
	{ 0x5c6f7af7, "irq_work_queue" },
	{ 0xe1aa2d62, "set_hv_tscchange_cb" },
	{ 0xdb2e4f7d, "percpu_counter_destroy_many" },
	{ 0x4e16163e, "param_set_uint" },
	{ 0x7a729fb1, "fd_install" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x90576ec4, "vmemdup_user" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfa1eb910, "unregister_syscore_ops" },
	{ 0xbf2e2e71, "housekeeping_enabled" },
	{ 0xd4106022, "smp_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x75b116ca, "perf_event_pause" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0x492590f2, "perf_event_period" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xc520b851, "seq_lseek" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0xe99d0ec2, "vm_mmap" },
	{ 0x738f69b0, "send_sig_mceerr" },
	{ 0x26cda94f, "e820__mapped_raw_any" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x950d388, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0xd5a61a34, "synchronize_srcu" },
	{ 0x1cbd92b0, "cpu_mitigations_off" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xeceea9e1, "bpf_trace_run8" },
	{ 0x4d924f20, "memremap" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb76fee64, "kthread_park" },
	{ 0x273e1002, "fpu_sync_guest_vmexit_xfd_state" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xb74e3071, "__tracepoint_mmap_lock_released" },
	{ 0x5e651d9f, "trace_print_hex_seq" },
	{ 0x8b7dfb3a, "cpufreq_cpu_put" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x41358b0d, "perf_event_read_value" },
	{ 0xa44a1307, "interval_tree_iter_first" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x864e2a5a, "get_user_pages_remote" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0x16d30c75, "wake_up_process" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0xacb0f234, "shrinker_free" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0xc575719, "__cond_resched_rwlock_write" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x5de7d5b5, "anon_inode_getfd" },
	{ 0x311637c4, "param_get_uint" },
	{ 0x6bbd8324, "perf_unregister_guest_info_callbacks" },
	{ 0x7a1ebb2b, "follow_pfnmap_start" },
	{ 0xc0c73312, "get_user_pages" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x793ac193, "__SCT__tp_func_ipi_send_cpu" },
	{ 0x2c3368b2, "shrinker_register" },
	{ 0xa0bc1031, "kthread_queue_work" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x47d8d301, "__cond_resched_rwlock_read" },
	{ 0x618911fc, "numa_node" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0x85efc7e0, "zero_pfn" },
	{ 0x8a2c214, "__tracepoint_ipi_send_cpu" },
	{ 0xc6cbbc89, "capable" },
	{ 0x47850c19, "find_vma" },
	{ 0xda1f78ee, "clear_hv_tscchange_cb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8f14d45b, "get_zeroed_page_noprof" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0xaa664c3c, "kthread_unpark" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xcfe59cb, "hyperv_fill_flush_guest_mapping_list" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x84ab3994, "param_ops_bint" },
	{ 0xc99d6017, "debugfs_lookup" },
	{ 0x7140a682, "mark_page_accessed" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf818ae8e, "kobject_uevent_env" },
	{ 0x2e2df7f4, "irq_remapping_cap" },
	{ 0xb74c43f6, "fpu_update_guest_xfd" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x8fca0669, "init_srcu_struct" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x4688d7ec, "pvclock_gtod_unregister_notifier" },
	{ 0x37712435, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe7232e0f, "user_return_notifier_unregister" },
	{ 0xce807a25, "up_write" },
	{ 0xb7c0f443, "sort" },
	{ 0xb66eb73f, "__cpuhp_setup_state" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x1d19f77b, "physical_mask" },
	{ 0x402cbbf, "preempt_notifier_inc" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x42499514, "simple_attr_release" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0xc9a4b416, "copy_to_user_nofault" },
	{ 0xfcadfcea, "__srcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xaa0a38e2, "dentry_path_raw" },
	{ 0x8eb58a, "task_cputime_adjusted" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x2a71977a, "noop_llseek" },
	{ 0xd96babb4, "interval_tree_iter_next" },
	{ 0xf8fe3986, "pat_pfn_immune_to_uc_mtrr" },
	{ 0x2ee80b5f, "bpf_trace_run5" },
	{ 0x98f4d306, "hyperv_flush_guest_mapping" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x3199fbeb, "mem_section" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

