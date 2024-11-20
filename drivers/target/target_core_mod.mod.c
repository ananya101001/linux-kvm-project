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

KSYMTAB_FUNC(target_depend_item, "", "");
KSYMTAB_FUNC(target_undepend_item, "", "");
KSYMTAB_FUNC(target_register_template, "", "");
KSYMTAB_FUNC(target_unregister_template, "", "");
KSYMTAB_DATA(sbc_attrib_attrs, "", "");
KSYMTAB_DATA(passthrough_attrib_attrs, "", "");
KSYMTAB_DATA(passthrough_pr_attrib_attrs, "", "");
KSYMTAB_FUNC(transport_lookup_cmd_lun, "", "");
KSYMTAB_FUNC(transport_lookup_tmr_lun, "", "");
KSYMTAB_FUNC(target_lun_is_rdonly, "", "");
KSYMTAB_FUNC(target_nacl_find_deve, "", "");
KSYMTAB_FUNC(target_configure_unmap_from_queue, "", "");
KSYMTAB_FUNC(target_to_linux_sector, "", "");
KSYMTAB_FUNC(passthrough_parse_cdb, "", "");
KSYMTAB_FUNC(transport_backend_register, "", "");
KSYMTAB_FUNC(target_backend_unregister, "", "");
KSYMTAB_FUNC(core_tmr_alloc_req, "", "");
KSYMTAB_FUNC(core_tpg_get_initiator_node_acl, "", "");
KSYMTAB_FUNC(core_allocate_nexus_loss_ua, "", "");
KSYMTAB_FUNC(target_tpg_has_node_acl, "", "");
KSYMTAB_FUNC(core_tpg_check_initiator_node_acl, "", "");
KSYMTAB_FUNC(core_tpg_set_initiator_node_queue_depth, "", "");
KSYMTAB_FUNC(core_tpg_set_initiator_node_tag, "", "");
KSYMTAB_FUNC(core_tpg_register, "", "");
KSYMTAB_FUNC(core_tpg_deregister, "", "");
KSYMTAB_FUNC(target_alloc_cmd_counter, "_gpl", "");
KSYMTAB_FUNC(target_free_cmd_counter, "_gpl", "");
KSYMTAB_FUNC(transport_init_session, "", "");
KSYMTAB_FUNC(transport_alloc_session, "", "");
KSYMTAB_FUNC(transport_alloc_session_tags, "", "");
KSYMTAB_FUNC(__transport_register_session, "", "");
KSYMTAB_FUNC(transport_register_session, "", "");
KSYMTAB_FUNC(target_setup_session, "", "");
KSYMTAB_FUNC(target_show_dynamic_sessions, "", "");
KSYMTAB_FUNC(target_put_nacl, "", "");
KSYMTAB_FUNC(transport_deregister_session_configfs, "", "");
KSYMTAB_FUNC(transport_free_session, "", "");
KSYMTAB_FUNC(transport_deregister_session, "", "");
KSYMTAB_FUNC(target_remove_session, "", "");
KSYMTAB_FUNC(transport_copy_sense_to_cmd, "", "");
KSYMTAB_FUNC(target_complete_cmd_with_sense, "", "");
KSYMTAB_FUNC(target_complete_cmd, "", "");
KSYMTAB_FUNC(target_set_cmd_data_length, "", "");
KSYMTAB_FUNC(target_complete_cmd_with_length, "", "");
KSYMTAB_FUNC(transport_set_vpd_proto_id, "", "");
KSYMTAB_FUNC(transport_set_vpd_assoc, "", "");
KSYMTAB_FUNC(transport_set_vpd_ident_type, "", "");
KSYMTAB_FUNC(transport_set_vpd_ident, "", "");
KSYMTAB_FUNC(__target_init_cmd, "", "");
KSYMTAB_FUNC(target_cmd_init_cdb, "", "");
KSYMTAB_FUNC(target_cmd_parse_cdb, "", "");
KSYMTAB_FUNC(target_init_cmd, "_gpl", "");
KSYMTAB_FUNC(target_submit_prep, "_gpl", "");
KSYMTAB_FUNC(target_submit_cmd, "", "");
KSYMTAB_FUNC(target_submit, "_gpl", "");
KSYMTAB_FUNC(target_submit_tmr, "", "");
KSYMTAB_FUNC(transport_generic_request_failure, "", "");
KSYMTAB_FUNC(target_execute_cmd, "", "");
KSYMTAB_FUNC(target_free_sgl, "", "");
KSYMTAB_FUNC(transport_kmap_data_sg, "", "");
KSYMTAB_FUNC(transport_kunmap_data_sg, "", "");
KSYMTAB_FUNC(target_alloc_sgl, "", "");
KSYMTAB_FUNC(transport_generic_new_cmd, "", "");
KSYMTAB_FUNC(transport_generic_free_cmd, "", "");
KSYMTAB_FUNC(target_get_sess_cmd, "", "");
KSYMTAB_FUNC(target_put_sess_cmd, "", "");
KSYMTAB_FUNC(target_show_cmd, "", "");
KSYMTAB_FUNC(target_stop_cmd_counter, "_gpl", "");
KSYMTAB_FUNC(target_stop_session, "", "");
KSYMTAB_FUNC(target_wait_for_cmds, "_gpl", "");
KSYMTAB_FUNC(target_wait_for_sess_cmds, "", "");
KSYMTAB_FUNC(transport_wait_for_tasks, "", "");
KSYMTAB_FUNC(transport_send_check_condition_and_sense, "", "");
KSYMTAB_FUNC(target_send_busy, "", "");
KSYMTAB_FUNC(transport_generic_handle_tmr, "", "");
KSYMTAB_FUNC(sbc_get_write_same_sectors, "", "");
KSYMTAB_FUNC(sbc_parse_cdb, "", "");
KSYMTAB_FUNC(sbc_get_device_type, "", "");
KSYMTAB_FUNC(sbc_dif_copy_prot, "", "");
KSYMTAB_FUNC(sbc_dif_verify, "", "");
KSYMTAB_FUNC(spc_emulate_inquiry_std, "", "");
KSYMTAB_FUNC(spc_emulate_evpd_83, "", "");
KSYMTAB_FUNC(spc_emulate_report_luns, "", "");
KSYMTAB_FUNC(spc_parse_cdb, "", "");

SYMBOL_CRC(target_depend_item, 0x36646de3, "");
SYMBOL_CRC(target_undepend_item, 0x6e5ebc4d, "");
SYMBOL_CRC(target_register_template, 0xaf4438db, "");
SYMBOL_CRC(target_unregister_template, 0xa39a5fbf, "");
SYMBOL_CRC(sbc_attrib_attrs, 0x9c5e5a83, "");
SYMBOL_CRC(passthrough_attrib_attrs, 0xf2f1724f, "");
SYMBOL_CRC(passthrough_pr_attrib_attrs, 0x58021ef5, "");
SYMBOL_CRC(transport_lookup_cmd_lun, 0x6841b081, "");
SYMBOL_CRC(transport_lookup_tmr_lun, 0xcc97c826, "");
SYMBOL_CRC(target_lun_is_rdonly, 0x000ad355, "");
SYMBOL_CRC(target_nacl_find_deve, 0x30bdaf4e, "");
SYMBOL_CRC(target_configure_unmap_from_queue, 0xf929e027, "");
SYMBOL_CRC(target_to_linux_sector, 0xc81997ec, "");
SYMBOL_CRC(passthrough_parse_cdb, 0x1fa2c0d5, "");
SYMBOL_CRC(transport_backend_register, 0xc58b717e, "");
SYMBOL_CRC(target_backend_unregister, 0xe987b605, "");
SYMBOL_CRC(core_tmr_alloc_req, 0x66e7a0f1, "");
SYMBOL_CRC(core_tpg_get_initiator_node_acl, 0x144d5979, "");
SYMBOL_CRC(core_allocate_nexus_loss_ua, 0xfa21f077, "");
SYMBOL_CRC(target_tpg_has_node_acl, 0x97ca392f, "");
SYMBOL_CRC(core_tpg_check_initiator_node_acl, 0x73cac43f, "");
SYMBOL_CRC(core_tpg_set_initiator_node_queue_depth, 0x082f4059, "");
SYMBOL_CRC(core_tpg_set_initiator_node_tag, 0xb116070d, "");
SYMBOL_CRC(core_tpg_register, 0x7c1142df, "");
SYMBOL_CRC(core_tpg_deregister, 0xc6f557c4, "");
SYMBOL_CRC(target_alloc_cmd_counter, 0xc65e34a6, "_gpl");
SYMBOL_CRC(target_free_cmd_counter, 0x5d24150b, "_gpl");
SYMBOL_CRC(transport_init_session, 0xb28d0e37, "");
SYMBOL_CRC(transport_alloc_session, 0x775b28bd, "");
SYMBOL_CRC(transport_alloc_session_tags, 0xc3e55310, "");
SYMBOL_CRC(__transport_register_session, 0xfc700bf4, "");
SYMBOL_CRC(transport_register_session, 0x1ab420e8, "");
SYMBOL_CRC(target_setup_session, 0x4688b975, "");
SYMBOL_CRC(target_show_dynamic_sessions, 0xe6568929, "");
SYMBOL_CRC(target_put_nacl, 0x78a5d54a, "");
SYMBOL_CRC(transport_deregister_session_configfs, 0x87b6bbaa, "");
SYMBOL_CRC(transport_free_session, 0xb307af80, "");
SYMBOL_CRC(transport_deregister_session, 0xc6c71a55, "");
SYMBOL_CRC(target_remove_session, 0xb7631ab6, "");
SYMBOL_CRC(transport_copy_sense_to_cmd, 0xaffb7795, "");
SYMBOL_CRC(target_complete_cmd_with_sense, 0xb3332d63, "");
SYMBOL_CRC(target_complete_cmd, 0x1caa1b56, "");
SYMBOL_CRC(target_set_cmd_data_length, 0xb3e39688, "");
SYMBOL_CRC(target_complete_cmd_with_length, 0xd58f835a, "");
SYMBOL_CRC(transport_set_vpd_proto_id, 0xf3c2dfe0, "");
SYMBOL_CRC(transport_set_vpd_assoc, 0x142072c0, "");
SYMBOL_CRC(transport_set_vpd_ident_type, 0x3a20a9d7, "");
SYMBOL_CRC(transport_set_vpd_ident, 0x0871ffd6, "");
SYMBOL_CRC(__target_init_cmd, 0xb09b00ae, "");
SYMBOL_CRC(target_cmd_init_cdb, 0x88af39b2, "");
SYMBOL_CRC(target_cmd_parse_cdb, 0xa77892fc, "");
SYMBOL_CRC(target_init_cmd, 0x42dde25a, "_gpl");
SYMBOL_CRC(target_submit_prep, 0xdde2d203, "_gpl");
SYMBOL_CRC(target_submit_cmd, 0xd4af5e94, "");
SYMBOL_CRC(target_submit, 0xbe870214, "_gpl");
SYMBOL_CRC(target_submit_tmr, 0x1f65cf87, "");
SYMBOL_CRC(transport_generic_request_failure, 0xc88e85b2, "");
SYMBOL_CRC(target_execute_cmd, 0x918373b5, "");
SYMBOL_CRC(target_free_sgl, 0x5bdb610a, "");
SYMBOL_CRC(transport_kmap_data_sg, 0xeac44600, "");
SYMBOL_CRC(transport_kunmap_data_sg, 0x3701cb02, "");
SYMBOL_CRC(target_alloc_sgl, 0xaefbcacd, "");
SYMBOL_CRC(transport_generic_new_cmd, 0xcaaff00e, "");
SYMBOL_CRC(transport_generic_free_cmd, 0x12429fcd, "");
SYMBOL_CRC(target_get_sess_cmd, 0x5271c8c6, "");
SYMBOL_CRC(target_put_sess_cmd, 0x89e6c49b, "");
SYMBOL_CRC(target_show_cmd, 0x3b1ef85a, "");
SYMBOL_CRC(target_stop_cmd_counter, 0x2b9b3376, "_gpl");
SYMBOL_CRC(target_stop_session, 0x95cdd2af, "");
SYMBOL_CRC(target_wait_for_cmds, 0xb4489234, "_gpl");
SYMBOL_CRC(target_wait_for_sess_cmds, 0xabb385c6, "");
SYMBOL_CRC(transport_wait_for_tasks, 0xe5418327, "");
SYMBOL_CRC(transport_send_check_condition_and_sense, 0x84a9a089, "");
SYMBOL_CRC(target_send_busy, 0xbf5b533f, "");
SYMBOL_CRC(transport_generic_handle_tmr, 0x9b8cb826, "");
SYMBOL_CRC(sbc_get_write_same_sectors, 0x77d3df95, "");
SYMBOL_CRC(sbc_parse_cdb, 0x676094b3, "");
SYMBOL_CRC(sbc_get_device_type, 0xf22577f0, "");
SYMBOL_CRC(sbc_dif_copy_prot, 0x28b6a2eb, "");
SYMBOL_CRC(sbc_dif_verify, 0xcf713f69, "");
SYMBOL_CRC(spc_emulate_inquiry_std, 0xce063661, "");
SYMBOL_CRC(spc_emulate_evpd_83, 0x06773556, "");
SYMBOL_CRC(spc_emulate_report_luns, 0x04c723af, "");
SYMBOL_CRC(spc_parse_cdb, 0xdf19b4f2, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x51e0bbe1, "filp_open" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0xc91fdf58, "percpu_ref_is_zero" },
	{ 0x2322dfd4, "revert_creds" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa2323c6d, "config_group_init" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x77bc13a0, "strim" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5bcea5f1, "sgl_free_n_order" },
	{ 0x81a7f541, "percpu_ref_init" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0xc666a132, "crc_t10dif" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x998d9992, "config_item_get" },
	{ 0xcf2a6966, "up" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5e651d9f, "trace_print_hex_seq" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1ed4d2eb, "percpu_ref_kill_and_confirm" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x288f427c, "sbitmap_queue_init_node" },
	{ 0xea5264a, "configfs_unregister_subsystem" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xdaff2388, "__put_cred" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x37bdef2e, "config_item_get_unless_zero" },
	{ 0xa916b694, "strnlen" },
	{ 0xddb1cd7, "llist_reverse_order" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x8da1cf7b, "init_task" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x27c73e00, "bdev_discard_alignment" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x37bf7be3, "percpu_ref_exit" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8988704a, "sg_miter_next" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x37712435, "fput" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x527b8d9d, "configfs_register_subsystem" },
	{ 0x4e3567f7, "match_int" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x16b89ecf, "configfs_remove_default_groups" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x30fd05df, "config_group_init_type_name" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x35b0ea3, "sg_miter_stop" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x9166fada, "strncpy" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x81547437, "vmap" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x97a57333, "crc_t10dif_update" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x4c3d8970, "sg_miter_start" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x11089ac7, "_ctype" },
	{ 0x95a052b1, "bpf_trace_run1" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5ad05666, "configfs_depend_item" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x745a981, "xa_erase" },
	{ 0x85075f40, "override_creds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x999e8297, "vfree" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x4f878c67, "filp_close" },
	{ 0x9b824744, "config_item_put" },
	{ 0x44e9a829, "match_token" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x3fce0373, "configfs_undepend_item" },
	{ 0xd74e5067, "prepare_kernel_cred" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x754d539c, "strlen" },
	{ 0xc2cb862e, "sgl_alloc_order" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x16f123e, "sg_copy_to_buffer" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x5ca34b15, "kernel_write" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "configfs,scsi_common");

