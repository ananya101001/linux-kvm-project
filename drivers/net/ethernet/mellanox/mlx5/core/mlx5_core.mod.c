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

KSYMTAB_FUNC(mlx5_core_uplink_netdev_event_replay, "", "");
KSYMTAB_FUNC(mlx5_core_mp_event_replay, "", "");
KSYMTAB_FUNC(mlx5_is_roce_on, "", "");
KSYMTAB_FUNC(mlx5_vf_get_core_dev, "", "");
KSYMTAB_FUNC(mlx5_vf_put_core_dev, "", "");
KSYMTAB_FUNC(mlx5_cmd_out_err, "", "");
KSYMTAB_FUNC(mlx5_cmd_check, "", "");
KSYMTAB_FUNC(mlx5_cmd_do, "", "");
KSYMTAB_FUNC(mlx5_cmd_exec, "", "");
KSYMTAB_FUNC(mlx5_cmd_exec_polling, "", "");
KSYMTAB_FUNC(mlx5_cmd_init_async_ctx, "", "");
KSYMTAB_FUNC(mlx5_cmd_cleanup_async_ctx, "", "");
KSYMTAB_FUNC(mlx5_cmd_exec_cb, "", "");
KSYMTAB_DATA(mlx5_debugfs_root, "", "");
KSYMTAB_FUNC(mlx5_debugfs_get_dev_root, "", "");
KSYMTAB_FUNC(mlx5_qp_debugfs_init, "", "");
KSYMTAB_FUNC(mlx5_qp_debugfs_cleanup, "", "");
KSYMTAB_FUNC(mlx5_debug_qp_add, "", "");
KSYMTAB_FUNC(mlx5_debug_qp_remove, "", "");
KSYMTAB_FUNC(mlx5_core_query_vendor_id, "", "");
KSYMTAB_FUNC(mlx5_eq_enable, "", "");
KSYMTAB_FUNC(mlx5_eq_disable, "", "");
KSYMTAB_FUNC(mlx5_eq_create_generic, "", "");
KSYMTAB_FUNC(mlx5_eq_destroy_generic, "", "");
KSYMTAB_FUNC(mlx5_eq_get_eqe, "", "");
KSYMTAB_FUNC(mlx5_eq_update_ci, "", "");
KSYMTAB_FUNC(mlx5_comp_eqn_get, "", "");
KSYMTAB_FUNC(mlx5_comp_vectors_max, "", "");
KSYMTAB_FUNC(mlx5_comp_vector_get_cpu, "", "");
KSYMTAB_FUNC(mlx5_eq_notifier_register, "", "");
KSYMTAB_FUNC(mlx5_eq_notifier_unregister, "", "");
KSYMTAB_FUNC(mlx5_get_uars_page, "", "");
KSYMTAB_FUNC(mlx5_put_uars_page, "", "");
KSYMTAB_FUNC(mlx5_alloc_bfreg, "", "");
KSYMTAB_FUNC(mlx5_free_bfreg, "", "");
KSYMTAB_FUNC(mlx5_core_attach_mcg, "", "");
KSYMTAB_FUNC(mlx5_core_detach_mcg, "", "");
KSYMTAB_FUNC(mlx5_create_cq, "", "");
KSYMTAB_FUNC(mlx5_core_create_cq, "", "");
KSYMTAB_FUNC(mlx5_core_destroy_cq, "", "");
KSYMTAB_FUNC(mlx5_core_query_cq, "", "");
KSYMTAB_FUNC(mlx5_core_modify_cq, "", "");
KSYMTAB_FUNC(mlx5_core_modify_cq_moderation, "", "");
KSYMTAB_FUNC(mlx5_frag_buf_alloc_node, "_gpl", "");
KSYMTAB_FUNC(mlx5_frag_buf_free, "_gpl", "");
KSYMTAB_FUNC(mlx5_db_alloc_node, "_gpl", "");
KSYMTAB_FUNC(mlx5_db_free, "_gpl", "");
KSYMTAB_FUNC(mlx5_fill_page_frag_array_perm, "_gpl", "");
KSYMTAB_FUNC(mlx5_fill_page_frag_array, "_gpl", "");
KSYMTAB_FUNC(mlx5_access_reg, "_gpl", "");
KSYMTAB_FUNC(mlx5_core_access_reg, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_caps, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_ptys, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_ib_port_oper, "", "");
KSYMTAB_FUNC(mlx5_toggle_port_link, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_admin_status, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_admin_status, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_mtu, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_max_mtu, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_oper_mtu, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_module_eeprom, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_module_eeprom_by_page, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_vl_hw_cap, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_pause, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_pause, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_pfc, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_pfc, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_prio_tc, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_prio_tc, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_tc_group, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_tc_group, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_tc_bw_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_tc_bw_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx5_modify_port_ets_rate_limit, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_ets_rate_limit, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_wol, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_wol, "_gpl", "");
KSYMTAB_FUNC(mlx5_core_create_mkey, "", "");
KSYMTAB_FUNC(mlx5_core_destroy_mkey, "", "");
KSYMTAB_FUNC(mlx5_core_query_mkey, "", "");
KSYMTAB_FUNC(mlx5_core_create_psv, "", "");
KSYMTAB_FUNC(mlx5_core_destroy_psv, "", "");
KSYMTAB_FUNC(mlx5_core_get_terminate_scatter_list_mkey, "", "");
KSYMTAB_FUNC(mlx5_core_alloc_pd, "", "");
KSYMTAB_FUNC(mlx5_core_dealloc_pd, "", "");
KSYMTAB_FUNC(mlx5_core_alloc_transport_domain, "", "");
KSYMTAB_FUNC(mlx5_core_dealloc_transport_domain, "", "");
KSYMTAB_FUNC(mlx5_core_create_rq, "", "");
KSYMTAB_FUNC(mlx5_core_modify_rq, "", "");
KSYMTAB_FUNC(mlx5_core_destroy_rq, "", "");
KSYMTAB_FUNC(mlx5_core_query_rq, "", "");
KSYMTAB_FUNC(mlx5_core_modify_sq, "", "");
KSYMTAB_FUNC(mlx5_core_query_sq, "", "");
KSYMTAB_FUNC(mlx5_core_query_sq_state, "_gpl", "");
KSYMTAB_FUNC(mlx5_core_create_tir, "", "");
KSYMTAB_FUNC(mlx5_core_destroy_tir, "", "");
KSYMTAB_FUNC(mlx5_core_create_tis, "", "");
KSYMTAB_FUNC(mlx5_core_modify_tis, "", "");
KSYMTAB_FUNC(mlx5_core_destroy_tis, "", "");
KSYMTAB_FUNC(mlx5_core_create_rqt, "", "");
KSYMTAB_FUNC(mlx5_core_destroy_rqt, "", "");
KSYMTAB_FUNC(mlx5_query_nic_vport_min_inline, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_min_inline, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_nic_vport_mac_address, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_mac_address, "_gpl", "");
KSYMTAB_FUNC(mlx5_modify_nic_vport_mac_address, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_nic_vport_mtu, "_gpl", "");
KSYMTAB_FUNC(mlx5_modify_nic_vport_mtu, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_nic_vport_mac_list, "_gpl", "");
KSYMTAB_FUNC(mlx5_modify_nic_vport_mac_list, "_gpl", "");
KSYMTAB_FUNC(mlx5_modify_nic_vport_vlans, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_nic_vport_system_image_guid, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_nic_vport_node_guid, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_nic_vport_qkey_viol_cntr, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_hca_vport_gid, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_hca_vport_pkey, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_hca_vport_context, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_hca_vport_system_image_guid, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_hca_vport_node_guid, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_nic_vport_promisc, "_gpl", "");
KSYMTAB_FUNC(mlx5_modify_nic_vport_promisc, "_gpl", "");
KSYMTAB_FUNC(mlx5_nic_vport_update_local_lb, "_gpl", "");
KSYMTAB_FUNC(mlx5_nic_vport_query_local_lb, "_gpl", "");
KSYMTAB_FUNC(mlx5_nic_vport_enable_roce, "_gpl", "");
KSYMTAB_FUNC(mlx5_nic_vport_disable_roce, "", "");
KSYMTAB_FUNC(mlx5_core_query_vport_counter, "_gpl", "");
KSYMTAB_FUNC(mlx5_core_modify_hca_vport_context, "_gpl", "");
KSYMTAB_FUNC(mlx5_nic_vport_affiliate_multiport, "_gpl", "");
KSYMTAB_FUNC(mlx5_nic_vport_unaffiliate_multiport, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_nic_system_image_guid, "_gpl", "");
KSYMTAB_FUNC(mlx5_vport_get_other_func_cap, "_gpl", "");
KSYMTAB_FUNC(mlx5_sriov_blocking_notifier_unregister, "", "");
KSYMTAB_FUNC(mlx5_sriov_blocking_notifier_register, "", "");
KSYMTAB_FUNC(mlx5_create_flow_table, "", "");
KSYMTAB_FUNC(mlx5_flow_table_id, "", "");
KSYMTAB_FUNC(mlx5_create_lag_demux_flow_table, "", "");
KSYMTAB_FUNC(mlx5_create_auto_grouped_flow_table, "", "");
KSYMTAB_FUNC(mlx5_create_flow_group, "", "");
KSYMTAB_FUNC(mlx5_add_flow_rules, "", "");
KSYMTAB_FUNC(mlx5_del_flow_rules, "", "");
KSYMTAB_FUNC(mlx5_destroy_flow_table, "", "");
KSYMTAB_FUNC(mlx5_destroy_flow_group, "", "");
KSYMTAB_FUNC(mlx5_get_fdb_sub_ns, "", "");
KSYMTAB_FUNC(mlx5_get_flow_namespace, "", "");
KSYMTAB_FUNC(mlx5_fs_add_rx_underlay_qpn, "", "");
KSYMTAB_FUNC(mlx5_fs_remove_rx_underlay_qpn, "", "");
KSYMTAB_FUNC(mlx5_modify_header_alloc, "", "");
KSYMTAB_FUNC(mlx5_modify_header_dealloc, "", "");
KSYMTAB_FUNC(mlx5_packet_reformat_alloc, "", "");
KSYMTAB_FUNC(mlx5_packet_reformat_dealloc, "", "");
KSYMTAB_FUNC(mlx5_fc_create, "", "");
KSYMTAB_FUNC(mlx5_fc_id, "", "");
KSYMTAB_FUNC(mlx5_fc_destroy, "", "");
KSYMTAB_FUNC(mlx5_fc_query, "", "");
KSYMTAB_FUNC(mlx5_rl_is_in_range, "", "");
KSYMTAB_FUNC(mlx5_rl_are_equal, "", "");
KSYMTAB_FUNC(mlx5_rl_add_rate_raw, "", "");
KSYMTAB_FUNC(mlx5_rl_remove_rate_raw, "", "");
KSYMTAB_FUNC(mlx5_rl_add_rate, "", "");
KSYMTAB_FUNC(mlx5_rl_remove_rate, "", "");
KSYMTAB_FUNC(mlx5_cmd_create_vport_lag, "", "");
KSYMTAB_FUNC(mlx5_cmd_destroy_vport_lag, "", "");
KSYMTAB_FUNC(mlx5_lag_is_roce, "", "");
KSYMTAB_FUNC(mlx5_lag_is_active, "", "");
KSYMTAB_FUNC(mlx5_lag_mode_is_hash, "", "");
KSYMTAB_FUNC(mlx5_lag_is_master, "", "");
KSYMTAB_FUNC(mlx5_lag_is_sriov, "", "");
KSYMTAB_FUNC(mlx5_lag_is_shared_fdb, "", "");
KSYMTAB_FUNC(mlx5_lag_get_slave_port, "", "");
KSYMTAB_FUNC(mlx5_lag_get_num_ports, "", "");
KSYMTAB_FUNC(mlx5_lag_get_next_peer_mdev, "", "");
KSYMTAB_FUNC(mlx5_lag_query_cong_counters, "", "");
KSYMTAB_FUNC(mlx5_notifier_register, "", "");
KSYMTAB_FUNC(mlx5_notifier_unregister, "", "");
KSYMTAB_FUNC(mlx5_blocking_notifier_register, "", "");
KSYMTAB_FUNC(mlx5_blocking_notifier_unregister, "", "");
KSYMTAB_FUNC(mlx5_core_reserved_gids_count, "_gpl", "");
KSYMTAB_FUNC(mlx5_core_roce_gid_set, "", "");
KSYMTAB_FUNC(mlx5_dm_sw_icm_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx5_dm_sw_icm_dealloc, "_gpl", "");
KSYMTAB_DATA(__tracepoint_mlx5_fs_add_ft, "", "");
KSYMTAB_FUNC(__traceiter_mlx5_fs_add_ft, "", "");
KSYMTAB_DATA(__SCK__tp_func_mlx5_fs_add_ft, "", "");
KSYMTAB_FUNC(__SCT__tp_func_mlx5_fs_add_ft, "", "");
KSYMTAB_DATA(__tracepoint_mlx5_fs_del_ft, "", "");
KSYMTAB_FUNC(__traceiter_mlx5_fs_del_ft, "", "");
KSYMTAB_DATA(__SCK__tp_func_mlx5_fs_del_ft, "", "");
KSYMTAB_FUNC(__SCT__tp_func_mlx5_fs_del_ft, "", "");
KSYMTAB_DATA(__tracepoint_mlx5_fs_add_fg, "", "");
KSYMTAB_FUNC(__traceiter_mlx5_fs_add_fg, "", "");
KSYMTAB_DATA(__SCK__tp_func_mlx5_fs_add_fg, "", "");
KSYMTAB_FUNC(__SCT__tp_func_mlx5_fs_add_fg, "", "");
KSYMTAB_DATA(__tracepoint_mlx5_fs_del_fg, "", "");
KSYMTAB_FUNC(__traceiter_mlx5_fs_del_fg, "", "");
KSYMTAB_DATA(__SCK__tp_func_mlx5_fs_del_fg, "", "");
KSYMTAB_FUNC(__SCT__tp_func_mlx5_fs_del_fg, "", "");
KSYMTAB_DATA(__tracepoint_mlx5_fs_set_fte, "", "");
KSYMTAB_FUNC(__traceiter_mlx5_fs_set_fte, "", "");
KSYMTAB_DATA(__SCK__tp_func_mlx5_fs_set_fte, "", "");
KSYMTAB_FUNC(__SCT__tp_func_mlx5_fs_set_fte, "", "");
KSYMTAB_DATA(__tracepoint_mlx5_fs_del_fte, "", "");
KSYMTAB_FUNC(__traceiter_mlx5_fs_del_fte, "", "");
KSYMTAB_DATA(__SCK__tp_func_mlx5_fs_del_fte, "", "");
KSYMTAB_FUNC(__SCT__tp_func_mlx5_fs_del_fte, "", "");
KSYMTAB_DATA(__tracepoint_mlx5_fs_add_rule, "", "");
KSYMTAB_FUNC(__traceiter_mlx5_fs_add_rule, "", "");
KSYMTAB_DATA(__SCK__tp_func_mlx5_fs_add_rule, "", "");
KSYMTAB_FUNC(__SCT__tp_func_mlx5_fs_add_rule, "", "");
KSYMTAB_DATA(__tracepoint_mlx5_fs_del_rule, "", "");
KSYMTAB_FUNC(__traceiter_mlx5_fs_del_rule, "", "");
KSYMTAB_DATA(__SCK__tp_func_mlx5_fs_del_rule, "", "");
KSYMTAB_FUNC(__SCT__tp_func_mlx5_fs_del_rule, "", "");
KSYMTAB_DATA(__tracepoint_mlx5_fw, "", "");
KSYMTAB_FUNC(__traceiter_mlx5_fw, "", "");
KSYMTAB_DATA(__SCK__tp_func_mlx5_fw, "", "");
KSYMTAB_FUNC(__SCT__tp_func_mlx5_fw, "", "");
KSYMTAB_FUNC(mlx5_rsc_dump_cmd_create, "", "");
KSYMTAB_FUNC(mlx5_rsc_dump_cmd_destroy, "", "");
KSYMTAB_FUNC(mlx5_rsc_dump_next, "", "");
KSYMTAB_FUNC(mlx5_wc_support_get, "", "");
KSYMTAB_FUNC(mlx5_mpfs_add_mac, "", "");
KSYMTAB_FUNC(mlx5_mpfs_del_mac, "", "");
KSYMTAB_FUNC(mlx5_rdma_rn_get_params, "", "");
KSYMTAB_FUNC(mlx5_fpga_sbu_conn_create, "", "");
KSYMTAB_FUNC(mlx5_fpga_sbu_conn_destroy, "", "");
KSYMTAB_FUNC(mlx5_fpga_sbu_conn_sendmsg, "", "");
KSYMTAB_FUNC(mlx5_fpga_mem_read, "", "");
KSYMTAB_FUNC(mlx5_fpga_mem_write, "", "");
KSYMTAB_FUNC(mlx5_fpga_get_sbu_caps, "", "");

SYMBOL_CRC(mlx5_core_uplink_netdev_event_replay, 0x067dc7a0, "");
SYMBOL_CRC(mlx5_core_mp_event_replay, 0x59ab993b, "");
SYMBOL_CRC(mlx5_is_roce_on, 0x80daf329, "");
SYMBOL_CRC(mlx5_vf_get_core_dev, 0xd7c74f54, "");
SYMBOL_CRC(mlx5_vf_put_core_dev, 0x6dd201f9, "");
SYMBOL_CRC(mlx5_cmd_out_err, 0x5191c1f8, "");
SYMBOL_CRC(mlx5_cmd_check, 0xa34983e4, "");
SYMBOL_CRC(mlx5_cmd_do, 0x853000f6, "");
SYMBOL_CRC(mlx5_cmd_exec, 0xe505db6f, "");
SYMBOL_CRC(mlx5_cmd_exec_polling, 0x22966d02, "");
SYMBOL_CRC(mlx5_cmd_init_async_ctx, 0xfc99d18d, "");
SYMBOL_CRC(mlx5_cmd_cleanup_async_ctx, 0xb14a205e, "");
SYMBOL_CRC(mlx5_cmd_exec_cb, 0x0e1e3f66, "");
SYMBOL_CRC(mlx5_debugfs_root, 0x80a02db8, "");
SYMBOL_CRC(mlx5_debugfs_get_dev_root, 0x2ef0f19a, "");
SYMBOL_CRC(mlx5_qp_debugfs_init, 0x0381fbf2, "");
SYMBOL_CRC(mlx5_qp_debugfs_cleanup, 0xabcff824, "");
SYMBOL_CRC(mlx5_debug_qp_add, 0xef046b96, "");
SYMBOL_CRC(mlx5_debug_qp_remove, 0x0ad61680, "");
SYMBOL_CRC(mlx5_core_query_vendor_id, 0x96d41370, "");
SYMBOL_CRC(mlx5_eq_enable, 0x35cae879, "");
SYMBOL_CRC(mlx5_eq_disable, 0x1e6f6e8d, "");
SYMBOL_CRC(mlx5_eq_create_generic, 0xc13a517f, "");
SYMBOL_CRC(mlx5_eq_destroy_generic, 0x10d989fc, "");
SYMBOL_CRC(mlx5_eq_get_eqe, 0x8a56dd83, "");
SYMBOL_CRC(mlx5_eq_update_ci, 0x85867413, "");
SYMBOL_CRC(mlx5_comp_eqn_get, 0xc09447a7, "");
SYMBOL_CRC(mlx5_comp_vectors_max, 0x02b0fb40, "");
SYMBOL_CRC(mlx5_comp_vector_get_cpu, 0x5b981969, "");
SYMBOL_CRC(mlx5_eq_notifier_register, 0x8130a376, "");
SYMBOL_CRC(mlx5_eq_notifier_unregister, 0xb3113fdf, "");
SYMBOL_CRC(mlx5_get_uars_page, 0x9973a71e, "");
SYMBOL_CRC(mlx5_put_uars_page, 0x444a45d8, "");
SYMBOL_CRC(mlx5_alloc_bfreg, 0x58d282f3, "");
SYMBOL_CRC(mlx5_free_bfreg, 0xb3fb40fd, "");
SYMBOL_CRC(mlx5_core_attach_mcg, 0x2a07d832, "");
SYMBOL_CRC(mlx5_core_detach_mcg, 0xf61001de, "");
SYMBOL_CRC(mlx5_create_cq, 0x07e64b9f, "");
SYMBOL_CRC(mlx5_core_create_cq, 0x841125f9, "");
SYMBOL_CRC(mlx5_core_destroy_cq, 0xc7b3b7da, "");
SYMBOL_CRC(mlx5_core_query_cq, 0x2d8a6313, "");
SYMBOL_CRC(mlx5_core_modify_cq, 0xf64f7c91, "");
SYMBOL_CRC(mlx5_core_modify_cq_moderation, 0x38df117d, "");
SYMBOL_CRC(mlx5_frag_buf_alloc_node, 0x1a688ae5, "_gpl");
SYMBOL_CRC(mlx5_frag_buf_free, 0x228ef31c, "_gpl");
SYMBOL_CRC(mlx5_db_alloc_node, 0x6a500fe9, "_gpl");
SYMBOL_CRC(mlx5_db_free, 0xea273989, "_gpl");
SYMBOL_CRC(mlx5_fill_page_frag_array_perm, 0x81aadc6a, "_gpl");
SYMBOL_CRC(mlx5_fill_page_frag_array, 0x072460c4, "_gpl");
SYMBOL_CRC(mlx5_access_reg, 0x5fb0c11b, "_gpl");
SYMBOL_CRC(mlx5_core_access_reg, 0x25723073, "_gpl");
SYMBOL_CRC(mlx5_set_port_caps, 0xb0420ef2, "_gpl");
SYMBOL_CRC(mlx5_query_port_ptys, 0x75a710d2, "_gpl");
SYMBOL_CRC(mlx5_query_ib_port_oper, 0x13a7d149, "");
SYMBOL_CRC(mlx5_toggle_port_link, 0x678272ae, "_gpl");
SYMBOL_CRC(mlx5_set_port_admin_status, 0x5336da20, "_gpl");
SYMBOL_CRC(mlx5_query_port_admin_status, 0xcbbb714b, "_gpl");
SYMBOL_CRC(mlx5_set_port_mtu, 0xd85050a6, "_gpl");
SYMBOL_CRC(mlx5_query_port_max_mtu, 0x32530e19, "_gpl");
SYMBOL_CRC(mlx5_query_port_oper_mtu, 0x23ff825f, "_gpl");
SYMBOL_CRC(mlx5_query_module_eeprom, 0xbbc2a3ef, "_gpl");
SYMBOL_CRC(mlx5_query_module_eeprom_by_page, 0xc6eee450, "_gpl");
SYMBOL_CRC(mlx5_query_port_vl_hw_cap, 0x9027cc87, "_gpl");
SYMBOL_CRC(mlx5_set_port_pause, 0x85e2b811, "_gpl");
SYMBOL_CRC(mlx5_query_port_pause, 0x35784ef6, "_gpl");
SYMBOL_CRC(mlx5_set_port_pfc, 0xc5f83971, "_gpl");
SYMBOL_CRC(mlx5_query_port_pfc, 0xab1ada55, "_gpl");
SYMBOL_CRC(mlx5_set_port_prio_tc, 0xf19b903c, "_gpl");
SYMBOL_CRC(mlx5_query_port_prio_tc, 0xa681a4f0, "_gpl");
SYMBOL_CRC(mlx5_set_port_tc_group, 0x30075aee, "_gpl");
SYMBOL_CRC(mlx5_query_port_tc_group, 0x69cd8024, "_gpl");
SYMBOL_CRC(mlx5_set_port_tc_bw_alloc, 0xb5f14666, "_gpl");
SYMBOL_CRC(mlx5_query_port_tc_bw_alloc, 0x0609d563, "_gpl");
SYMBOL_CRC(mlx5_modify_port_ets_rate_limit, 0x85ffdbe1, "_gpl");
SYMBOL_CRC(mlx5_query_port_ets_rate_limit, 0x3971fd54, "_gpl");
SYMBOL_CRC(mlx5_set_port_wol, 0xcc20f405, "_gpl");
SYMBOL_CRC(mlx5_query_port_wol, 0x10e6938a, "_gpl");
SYMBOL_CRC(mlx5_core_create_mkey, 0x2d493179, "");
SYMBOL_CRC(mlx5_core_destroy_mkey, 0x457feb47, "");
SYMBOL_CRC(mlx5_core_query_mkey, 0x337ec2b5, "");
SYMBOL_CRC(mlx5_core_create_psv, 0x4ad1bdfe, "");
SYMBOL_CRC(mlx5_core_destroy_psv, 0x223cf5dd, "");
SYMBOL_CRC(mlx5_core_get_terminate_scatter_list_mkey, 0x9786b004, "");
SYMBOL_CRC(mlx5_core_alloc_pd, 0x71c5b3a6, "");
SYMBOL_CRC(mlx5_core_dealloc_pd, 0xa6c4463a, "");
SYMBOL_CRC(mlx5_core_alloc_transport_domain, 0x7cce1639, "");
SYMBOL_CRC(mlx5_core_dealloc_transport_domain, 0xfbde482a, "");
SYMBOL_CRC(mlx5_core_create_rq, 0xc90ed4d1, "");
SYMBOL_CRC(mlx5_core_modify_rq, 0xd3dd41eb, "");
SYMBOL_CRC(mlx5_core_destroy_rq, 0x8c4aa54b, "");
SYMBOL_CRC(mlx5_core_query_rq, 0xf2115cf8, "");
SYMBOL_CRC(mlx5_core_modify_sq, 0x715caf83, "");
SYMBOL_CRC(mlx5_core_query_sq, 0x5090b290, "");
SYMBOL_CRC(mlx5_core_query_sq_state, 0x353c4829, "_gpl");
SYMBOL_CRC(mlx5_core_create_tir, 0x1e746bf9, "");
SYMBOL_CRC(mlx5_core_destroy_tir, 0xaa4a6106, "");
SYMBOL_CRC(mlx5_core_create_tis, 0x5dbf037d, "");
SYMBOL_CRC(mlx5_core_modify_tis, 0x2285688c, "");
SYMBOL_CRC(mlx5_core_destroy_tis, 0x06fe2332, "");
SYMBOL_CRC(mlx5_core_create_rqt, 0x7ef16c87, "");
SYMBOL_CRC(mlx5_core_destroy_rqt, 0x90a4e574, "");
SYMBOL_CRC(mlx5_query_nic_vport_min_inline, 0x826a6e77, "_gpl");
SYMBOL_CRC(mlx5_query_min_inline, 0x30362aee, "_gpl");
SYMBOL_CRC(mlx5_query_nic_vport_mac_address, 0x9695adea, "_gpl");
SYMBOL_CRC(mlx5_query_mac_address, 0x20da34e5, "_gpl");
SYMBOL_CRC(mlx5_modify_nic_vport_mac_address, 0x8386d11a, "_gpl");
SYMBOL_CRC(mlx5_query_nic_vport_mtu, 0xfb7dfa39, "_gpl");
SYMBOL_CRC(mlx5_modify_nic_vport_mtu, 0x3a327335, "_gpl");
SYMBOL_CRC(mlx5_query_nic_vport_mac_list, 0xf193331f, "_gpl");
SYMBOL_CRC(mlx5_modify_nic_vport_mac_list, 0xa4542503, "_gpl");
SYMBOL_CRC(mlx5_modify_nic_vport_vlans, 0x7fc3e743, "_gpl");
SYMBOL_CRC(mlx5_query_nic_vport_system_image_guid, 0xf7234dee, "_gpl");
SYMBOL_CRC(mlx5_query_nic_vport_node_guid, 0xffecece1, "_gpl");
SYMBOL_CRC(mlx5_query_nic_vport_qkey_viol_cntr, 0xa9c9e2f5, "_gpl");
SYMBOL_CRC(mlx5_query_hca_vport_gid, 0xba39585b, "_gpl");
SYMBOL_CRC(mlx5_query_hca_vport_pkey, 0x086e9eec, "_gpl");
SYMBOL_CRC(mlx5_query_hca_vport_context, 0xb27103ab, "_gpl");
SYMBOL_CRC(mlx5_query_hca_vport_system_image_guid, 0x83a58ce3, "_gpl");
SYMBOL_CRC(mlx5_query_hca_vport_node_guid, 0x5c00953a, "_gpl");
SYMBOL_CRC(mlx5_query_nic_vport_promisc, 0xf6740a22, "_gpl");
SYMBOL_CRC(mlx5_modify_nic_vport_promisc, 0xae645160, "_gpl");
SYMBOL_CRC(mlx5_nic_vport_update_local_lb, 0x8a22d2c9, "_gpl");
SYMBOL_CRC(mlx5_nic_vport_query_local_lb, 0x3a196aff, "_gpl");
SYMBOL_CRC(mlx5_nic_vport_enable_roce, 0xec1c5f40, "_gpl");
SYMBOL_CRC(mlx5_nic_vport_disable_roce, 0x1183a024, "");
SYMBOL_CRC(mlx5_core_query_vport_counter, 0xae16467c, "_gpl");
SYMBOL_CRC(mlx5_core_modify_hca_vport_context, 0x97c3361b, "_gpl");
SYMBOL_CRC(mlx5_nic_vport_affiliate_multiport, 0x2c7b6295, "_gpl");
SYMBOL_CRC(mlx5_nic_vport_unaffiliate_multiport, 0xa4eafc26, "_gpl");
SYMBOL_CRC(mlx5_query_nic_system_image_guid, 0x87168657, "_gpl");
SYMBOL_CRC(mlx5_vport_get_other_func_cap, 0x1a98ca6d, "_gpl");
SYMBOL_CRC(mlx5_sriov_blocking_notifier_unregister, 0xaa68deb0, "");
SYMBOL_CRC(mlx5_sriov_blocking_notifier_register, 0x3d797362, "");
SYMBOL_CRC(mlx5_create_flow_table, 0x2f2ba5e6, "");
SYMBOL_CRC(mlx5_flow_table_id, 0xdcdf4a4d, "");
SYMBOL_CRC(mlx5_create_lag_demux_flow_table, 0xcef6752b, "");
SYMBOL_CRC(mlx5_create_auto_grouped_flow_table, 0xcabf4e04, "");
SYMBOL_CRC(mlx5_create_flow_group, 0x4e56174d, "");
SYMBOL_CRC(mlx5_add_flow_rules, 0x967c53fa, "");
SYMBOL_CRC(mlx5_del_flow_rules, 0x2cfba6f8, "");
SYMBOL_CRC(mlx5_destroy_flow_table, 0xeb99c100, "");
SYMBOL_CRC(mlx5_destroy_flow_group, 0xb28dbbe8, "");
SYMBOL_CRC(mlx5_get_fdb_sub_ns, 0x6f970d94, "");
SYMBOL_CRC(mlx5_get_flow_namespace, 0x60d09821, "");
SYMBOL_CRC(mlx5_fs_add_rx_underlay_qpn, 0x7e89699f, "");
SYMBOL_CRC(mlx5_fs_remove_rx_underlay_qpn, 0x90bb675c, "");
SYMBOL_CRC(mlx5_modify_header_alloc, 0x8deb2269, "");
SYMBOL_CRC(mlx5_modify_header_dealloc, 0xca74e042, "");
SYMBOL_CRC(mlx5_packet_reformat_alloc, 0x939d8aab, "");
SYMBOL_CRC(mlx5_packet_reformat_dealloc, 0x7340595b, "");
SYMBOL_CRC(mlx5_fc_create, 0x0fd1fea8, "");
SYMBOL_CRC(mlx5_fc_id, 0x96eb2c99, "");
SYMBOL_CRC(mlx5_fc_destroy, 0xf028f171, "");
SYMBOL_CRC(mlx5_fc_query, 0x70f1f70e, "");
SYMBOL_CRC(mlx5_rl_is_in_range, 0xc78e984d, "");
SYMBOL_CRC(mlx5_rl_are_equal, 0x61492bb7, "");
SYMBOL_CRC(mlx5_rl_add_rate_raw, 0x5ca9f813, "");
SYMBOL_CRC(mlx5_rl_remove_rate_raw, 0xdcc37cbd, "");
SYMBOL_CRC(mlx5_rl_add_rate, 0x32d5b6f3, "");
SYMBOL_CRC(mlx5_rl_remove_rate, 0x4d13cdec, "");
SYMBOL_CRC(mlx5_cmd_create_vport_lag, 0x7069f297, "");
SYMBOL_CRC(mlx5_cmd_destroy_vport_lag, 0xdf3a181a, "");
SYMBOL_CRC(mlx5_lag_is_roce, 0x6a2d64c2, "");
SYMBOL_CRC(mlx5_lag_is_active, 0xf2d1ccd2, "");
SYMBOL_CRC(mlx5_lag_mode_is_hash, 0x7f93c5ca, "");
SYMBOL_CRC(mlx5_lag_is_master, 0x25a82956, "");
SYMBOL_CRC(mlx5_lag_is_sriov, 0x9d21fb62, "");
SYMBOL_CRC(mlx5_lag_is_shared_fdb, 0x74c65d8f, "");
SYMBOL_CRC(mlx5_lag_get_slave_port, 0xbdb44671, "");
SYMBOL_CRC(mlx5_lag_get_num_ports, 0xa121d47e, "");
SYMBOL_CRC(mlx5_lag_get_next_peer_mdev, 0xfe4061b7, "");
SYMBOL_CRC(mlx5_lag_query_cong_counters, 0x115f762c, "");
SYMBOL_CRC(mlx5_notifier_register, 0x737d16a1, "");
SYMBOL_CRC(mlx5_notifier_unregister, 0x0a863947, "");
SYMBOL_CRC(mlx5_blocking_notifier_register, 0x68a34df7, "");
SYMBOL_CRC(mlx5_blocking_notifier_unregister, 0x1ade5037, "");
SYMBOL_CRC(mlx5_core_reserved_gids_count, 0xe3f8d60c, "_gpl");
SYMBOL_CRC(mlx5_core_roce_gid_set, 0x3479d6d2, "");
SYMBOL_CRC(mlx5_dm_sw_icm_alloc, 0x5354b978, "_gpl");
SYMBOL_CRC(mlx5_dm_sw_icm_dealloc, 0x84777180, "_gpl");
SYMBOL_CRC(__tracepoint_mlx5_fs_add_ft, 0x7707cbc6, "");
SYMBOL_CRC(__traceiter_mlx5_fs_add_ft, 0x5f88b0df, "");
SYMBOL_CRC(__SCK__tp_func_mlx5_fs_add_ft, 0xfb003563, "");
SYMBOL_CRC(__SCT__tp_func_mlx5_fs_add_ft, 0xb4e976bb, "");
SYMBOL_CRC(__tracepoint_mlx5_fs_del_ft, 0xde137c05, "");
SYMBOL_CRC(__traceiter_mlx5_fs_del_ft, 0xf05c04fe, "");
SYMBOL_CRC(__SCK__tp_func_mlx5_fs_del_ft, 0x521482a0, "");
SYMBOL_CRC(__SCT__tp_func_mlx5_fs_del_ft, 0xe30fb2a8, "");
SYMBOL_CRC(__tracepoint_mlx5_fs_add_fg, 0x16e88a54, "");
SYMBOL_CRC(__traceiter_mlx5_fs_add_fg, 0x1c57c524, "");
SYMBOL_CRC(__SCK__tp_func_mlx5_fs_add_fg, 0x9aef74f1, "");
SYMBOL_CRC(__SCT__tp_func_mlx5_fs_add_fg, 0x9d36ddd0, "");
SYMBOL_CRC(__tracepoint_mlx5_fs_del_fg, 0xbffc3d97, "");
SYMBOL_CRC(__traceiter_mlx5_fs_del_fg, 0xba5c2f4f, "");
SYMBOL_CRC(__SCK__tp_func_mlx5_fs_del_fg, 0x33fbc332, "");
SYMBOL_CRC(__SCT__tp_func_mlx5_fs_del_fg, 0xcad019c3, "");
SYMBOL_CRC(__tracepoint_mlx5_fs_set_fte, 0x8d2d2b32, "");
SYMBOL_CRC(__traceiter_mlx5_fs_set_fte, 0xd61f9939, "");
SYMBOL_CRC(__SCK__tp_func_mlx5_fs_set_fte, 0x2b1d7bab, "");
SYMBOL_CRC(__SCT__tp_func_mlx5_fs_set_fte, 0xb06c0bfd, "");
SYMBOL_CRC(__tracepoint_mlx5_fs_del_fte, 0x14d693f6, "");
SYMBOL_CRC(__traceiter_mlx5_fs_del_fte, 0xdc2cc088, "");
SYMBOL_CRC(__SCK__tp_func_mlx5_fs_del_fte, 0xb2e6c36f, "");
SYMBOL_CRC(__SCT__tp_func_mlx5_fs_del_fte, 0xacfe8a18, "");
SYMBOL_CRC(__tracepoint_mlx5_fs_add_rule, 0xa77793a1, "");
SYMBOL_CRC(__traceiter_mlx5_fs_add_rule, 0xe0b31577, "");
SYMBOL_CRC(__SCK__tp_func_mlx5_fs_add_rule, 0x2e028811, "");
SYMBOL_CRC(__SCT__tp_func_mlx5_fs_add_rule, 0xdb622108, "");
SYMBOL_CRC(__tracepoint_mlx5_fs_del_rule, 0x12a59817, "");
SYMBOL_CRC(__traceiter_mlx5_fs_del_rule, 0x2247af55, "");
SYMBOL_CRC(__SCK__tp_func_mlx5_fs_del_rule, 0x9bd083a7, "");
SYMBOL_CRC(__SCT__tp_func_mlx5_fs_del_rule, 0x62dc190a, "");
SYMBOL_CRC(__tracepoint_mlx5_fw, 0xa3f6f204, "");
SYMBOL_CRC(__traceiter_mlx5_fw, 0x7e967a25, "");
SYMBOL_CRC(__SCK__tp_func_mlx5_fw, 0x579d65b2, "");
SYMBOL_CRC(__SCT__tp_func_mlx5_fw, 0xdfbc08aa, "");
SYMBOL_CRC(mlx5_rsc_dump_cmd_create, 0x1cb5d24d, "");
SYMBOL_CRC(mlx5_rsc_dump_cmd_destroy, 0xad6815cd, "");
SYMBOL_CRC(mlx5_rsc_dump_next, 0x1b0ecea6, "");
SYMBOL_CRC(mlx5_wc_support_get, 0xb37dbf17, "");
SYMBOL_CRC(mlx5_mpfs_add_mac, 0x6c522deb, "");
SYMBOL_CRC(mlx5_mpfs_del_mac, 0x02daf44e, "");
SYMBOL_CRC(mlx5_rdma_rn_get_params, 0x4f8431ef, "");
SYMBOL_CRC(mlx5_fpga_sbu_conn_create, 0xc2b5934d, "");
SYMBOL_CRC(mlx5_fpga_sbu_conn_destroy, 0x8bc4be2a, "");
SYMBOL_CRC(mlx5_fpga_sbu_conn_sendmsg, 0xde9d8c09, "");
SYMBOL_CRC(mlx5_fpga_mem_read, 0x8f925df1, "");
SYMBOL_CRC(mlx5_fpga_mem_write, 0x07ece847, "");
SYMBOL_CRC(mlx5_fpga_get_sbu_caps, 0x1bf77fce, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2ee80b5f, "bpf_trace_run5" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x954f099c, "idr_preload" },
	{ 0xc4d702d9, "mlxfw_firmware_flash" },
	{ 0x929e4028, "devlink_fmsg_u32_put" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x75b968ff, "pcie_capability_clear_and_set_word_locked" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6775c90f, "skb_push" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x25d9a822, "dma_alloc_attrs" },
	{ 0x8656f320, "debugfs_remove" },
	{ 0x797e5068, "pci_read_config_word" },
	{ 0x15371bb2, "napi_enable" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xb69ab327, "xsk_clear_rx_need_wakeup" },
	{ 0xa75e0de6, "unregister_netdevice_notifier_net" },
	{ 0xcd976358, "xsk_uses_need_wakeup" },
	{ 0x2ec2bf40, "register_netdev" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x1af267f8, "int_pow" },
	{ 0x5cede0a7, "xdp_flush_frame_bulk" },
	{ 0xbdc0c3a9, "debugfs_create_u64" },
	{ 0xffb7c514, "ida_free" },
	{ 0x56d691a8, "free_netdev" },
	{ 0x221394ae, "hyperv_reg_block_invalidate" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x882585a1, "devl_params_register" },
	{ 0x1f7155cb, "dql_completed" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xde80cd09, "ioremap" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x4d4db744, "page_pool_put_unrefed_netmem" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb1518e15, "cancel_work" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1464bd86, "ethtool_op_get_link" },
	{ 0x3b659343, "netif_set_xps_queue" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x35c6d5f2, "__SCK__tp_func_xdp_exception" },
	{ 0x49dbb0b9, "devlink_fmsg_binary_pair_nest_end" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xeff39aad, "flow_keys_dissector" },
	{ 0x4e64974, "pci_restore_state" },
	{ 0x95a052b1, "bpf_trace_run1" },
	{ 0x1ba6c3be, "netif_tx_wake_queue" },
	{ 0x48d27375, "__bitmap_intersects" },
	{ 0xc04e9955, "device_del" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xb19b445, "ioread8" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x7f6cee89, "rhashtable_free_and_destroy" },
	{ 0xe8465998, "page_pool_create" },
	{ 0x9591300f, "skb_checksum" },
	{ 0xd39aa6e6, "devl_param_driverinit_value_set" },
	{ 0x5338184f, "ethtool_sprintf" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xa6832797, "devlink_fmsg_binary_pair_nest_start" },
	{ 0xd9e6ec72, "__kmalloc_cache_node_noprof" },
	{ 0x9bb4e317, "ioread32be" },
	{ 0x6f41a639, "irq_cpu_rmap_remove" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x6e1b0a64, "ptp_clock_event" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x8123a23e, "netif_schedule_queue" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xb4863b72, "devlink_fmsg_u64_pair_put" },
	{ 0xb72e7d4e, "pci_set_master" },
	{ 0x14ebc92a, "devl_trap_groups_register" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb35da0cc, "debugfs_create_u32" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8901b2b8, "netdev_set_tc_queue" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xaa7e2ba5, "devl_params_unregister" },
	{ 0x905d0ff9, "ptp_clock_unregister" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x6422e85d, "xp_dma_unmap" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xece784c2, "rb_first" },
	{ 0xbcad99e6, "__netdev_alloc_skb" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x4b03afcf, "devlink_trap_report" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0xa0994320, "devlink_fmsg_obj_nest_start" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0xcbc8f40, "dev_printk_emit" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x34f48c83, "devl_traps_register" },
	{ 0xa9fd0f95, "devl_unlock" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x5664c757, "__dynamic_netdev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dce513f, "dma_set_coherent_mask" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x745a981, "xa_erase" },
	{ 0xe37056dc, "pv_ops" },
	{ 0x5c4440b5, "seq_read" },
	{ 0x94c62eb0, "trace_print_flags_seq" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0xe5f73406, "hyperv_write_cfg_blk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x146cc88f, "bpf_master_redirect_enabled_key" },
	{ 0x83823fac, "ipv6_find_hdr" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x60c69018, "net_dim_get_rx_moderation" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x51cd0202, "debugfs_create_file" },
	{ 0xa75f8baf, "rps_may_expire_flow" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0xab6af852, "xsk_set_tx_need_wakeup" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0x3ed78732, "netdev_reset_tc" },
	{ 0x54c15cee, "dma_free_attrs" },
	{ 0x8d2f7c81, "rhltable_init_noprof" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x28839c12, "rhashtable_init_noprof" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0xce411868, "pci_reset_bus" },
	{ 0x850bb6db, "devlink_health_reporter_destroy" },
	{ 0x396a880e, "debugfs_create_x32" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdfcc992c, "current_work" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xfb5f9b3c, "xdp_return_frame_bulk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdfaa93c9, "pci_release_regions" },
	{ 0x9f83f856, "netif_queue_set_napi" },
	{ 0x5dcfb0c6, "__dma_sync_single_for_device" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xbfabbd55, "bpf_prog_add" },
	{ 0x9005f3a2, "net_dim_get_def_tx_moderation" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x79fef026, "devl_assert_locked" },
	{ 0x541afd15, "pcie_print_link_status" },
	{ 0x4b8cafce, "xp_set_rxq_info" },
	{ 0xbea15a02, "xdp_rxq_info_unreg" },
	{ 0xd0acc47f, "page_pool_alloc_pages" },
	{ 0x82c1f6fb, "devl_param_driverinit_value_get" },
	{ 0x73bea260, "napi_build_skb" },
	{ 0xc0d5aef2, "netdev_master_upper_dev_get_rcu" },
	{ 0xd8e64cc0, "__xdp_rxq_info_reg" },
	{ 0x1fa22004, "xdp_set_features_flag" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc8c392ae, "bpf_prog_inc" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x301a199f, "netif_carrier_event" },
	{ 0x56470118, "__warn_printk" },
	{ 0x973881cc, "netif_carrier_off" },
	{ 0x377214d3, "seq_printf" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0x5b3e282f, "xa_store" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x22318879, "devlink_priv" },
	{ 0x6826a041, "pci_enable_ptm" },
	{ 0x638e0b39, "devlink_port_register_with_ops" },
	{ 0x1651d3ce, "pci_disable_sriov" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd08685ce, "netif_carrier_on" },
	{ 0xd0474a95, "netdev_set_num_tc" },
	{ 0x373b0d5, "dql_reset" },
	{ 0x3b814ca, "bpf_dispatcher_xdp_func" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xc32874e4, "ktime_get_snapshot" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x544253f5, "pci_disable_device" },
	{ 0x6638f664, "net_dim_get_def_rx_moderation" },
	{ 0xdc9fcddf, "net_dim_get_tx_moderation" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xc9e9ef62, "xp_free" },
	{ 0x53c1b7c3, "page_pool_update_nid" },
	{ 0xd4f9fdc4, "single_release" },
	{ 0x6137b6cd, "devlink_fmsg_string_pair_put" },
	{ 0xe1779b47, "dma_set_mask" },
	{ 0xa4e14fd1, "__auxiliary_driver_register" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc68c5134, "netif_set_tso_max_size" },
	{ 0xf35293b1, "__skb_flow_dissect" },
	{ 0x1f13ee2, "pci_msix_alloc_irq_at" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x2b4509dd, "devlink_health_reporter_state_update" },
	{ 0x191f18e8, "skb_add_rx_frag_netmem" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x9946a65e, "xdp_master_redirect" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x772ab830, "skb_coalesce_rx_frag" },
	{ 0x9439882c, "xp_raw_get_data" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xca8948f, "napi_schedule_prep" },
	{ 0x5ad11a13, "qdisc_reset" },
	{ 0x1554f5d, "napi_consume_skb" },
	{ 0xa924297d, "devlink_fmsg_pair_nest_end" },
	{ 0xa97e4b16, "xp_alloc_batch" },
	{ 0x754d539c, "strlen" },
	{ 0x3a91a6c4, "napi_disable" },
	{ 0x1c8d9b8e, "dev_kfree_skb_any_reason" },
	{ 0x3d4c1e1e, "dcb_ieee_delapp" },
	{ 0x1b0be24d, "bpf_trace_run7" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x23722d80, "debugfs_create_u8" },
	{ 0x50472d9a, "single_open" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x53ce86cb, "devl_register" },
	{ 0x349cba85, "strchr" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x8b0ac9d7, "debugfs_create_dir" },
	{ 0xcc1b882a, "idr_get_next_ul" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x1e9f8ab8, "pcie_bandwidth_available" },
	{ 0x4f9c66e8, "pci_free_irq_vectors" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0xbd268111, "pci_enable_sriov" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x53b954a2, "up_read" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x679b9eba, "dcb_ieee_setapp" },
	{ 0xca2a229c, "devl_trap_groups_unregister" },
	{ 0x862258db, "timecounter_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x5d43f2cb, "xsk_tx_release" },
	{ 0x43fb9956, "devl_traps_unregister" },
	{ 0xc981f133, "pci_iov_get_pf_drvdata" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x3d647afc, "pci_write_config_dword" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xbd9af465, "netdev_info" },
	{ 0x9858f364, "get_random_u8" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x47ba710b, "page_pool_put_unrefed_page" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb9681621, "xdp_do_flush" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x604d3749, "__tracepoint_xdp_exception" },
	{ 0xf35d553d, "xsk_tx_completed" },
	{ 0x7ba062ee, "napi_alloc_skb" },
	{ 0x8bdb8263, "alloc_etherdev_mqs" },
	{ 0xf635e4fa, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xcb7f87e6, "xp_alloc" },
	{ 0x8fa9d9e8, "__SCT__tp_func_xdp_exception" },
	{ 0xe30fb850, "pcie_capability_read_word" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7344c77c, "devl_unregister" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x744bb6af, "bpf_prog_put" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xe5279558, "pci_cfg_access_unlock" },
	{ 0x27139398, "xp_dma_map" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x4accb517, "devlink_unregister" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x5dfd4352, "dma_pool_create" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6437313c, "pci_msix_vec_count" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xaad21b46, "pci_enable_device" },
	{ 0xd6625cfb, "skb_put" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x8f17ae37, "skb_tstamp_tx" },
	{ 0x6a76e187, "devlink_fmsg_binary_pair_put" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa4894a1b, "auxiliary_device_init" },
	{ 0x390d57cf, "netdev_update_features" },
	{ 0xbb7195a5, "xdp_warn" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xfe13a601, "trace_seq_printf" },
	{ 0x7547b4a, "pci_alloc_irq_vectors" },
	{ 0x35364a30, "netif_napi_add_weight" },
	{ 0x73e388dd, "pci_enable_atomic_ops_to_root" },
	{ 0x3cab8e4a, "dev_add_pack" },
	{ 0x31435ec4, "ethtool_puts" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x9d43a157, "devlink_fmsg_u32_pair_put" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0x8e50f0bc, "devlink_fmsg_arr_pair_nest_end" },
	{ 0x8a71be6f, "xsk_clear_tx_need_wakeup" },
	{ 0x16f98a5a, "udp4_hwcsum" },
	{ 0x165ac2d4, "devl_lock" },
	{ 0x73c2554f, "__iowrite64_copy" },
	{ 0x9a67becf, "bpf_warn_invalid_xdp_action" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xe4937ea3, "unregister_netdev" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x607c4683, "devlink_info_version_fixed_put" },
	{ 0xd114c514, "xdp_convert_zc_to_xdp_frame" },
	{ 0x52d54fce, "devlink_info_version_stored_put" },
	{ 0xca9360b5, "rb_next" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xd7c9f34b, "__kmalloc_node_noprof" },
	{ 0xf8d07858, "bitmap_from_arr32" },
	{ 0x204033c7, "dma_unmap_page_attrs" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x825be683, "trace_event_printf" },
	{ 0xa85992c3, "devlink_health_reporter_create" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0xcf2a6966, "up" },
	{ 0xc9c55522, "xdp_rxq_info_unused" },
	{ 0xa71d2e2c, "ioread16be" },
	{ 0xedc03953, "iounmap" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x64bfcca9, "pci_num_vf" },
	{ 0x83e2aa37, "pci_disable_ptm" },
	{ 0xaf2aa4f7, "get_device_system_crosststamp" },
	{ 0xe8622b5d, "devlink_port_attrs_set" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x63cc4a90, "ptp_clock_index" },
	{ 0xb2cacf1e, "pci_request_regions" },
	{ 0x93edef07, "devlink_health_report" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd4e9d7f9, "xp_can_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4cc271fb, "devlink_alloc_ns" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0x843dc69c, "pci_sriov_get_totalvfs" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc12705e, "devlink_register" },
	{ 0x7e79c307, "devlink_remote_reload_actions_performed" },
	{ 0xf8c3f39f, "devlink_fmsg_obj_nest_end" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xc520b851, "seq_lseek" },
	{ 0x505f83b, "page_pool_destroy" },
	{ 0x683a0d02, "xdp_do_redirect" },
	{ 0x560227d9, "devlink_free" },
	{ 0x81c51d19, "irq_cpu_rmap_add" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0x651fd1a4, "netdev_warn" },
	{ 0xb2ef9429, "udp_tunnel_nic_ops" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8bc25944, "pci_irq_vector" },
	{ 0x2cc12be5, "__netif_napi_del" },
	{ 0x1281003, "devlink_fmsg_binary_put" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x113ed675, "netdev_err" },
	{ 0x733450c0, "pci_cfg_access_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf34e4d00, "register_netdevice_notifier_net" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x9ae47436, "_find_last_bit" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xee99c7ef, "dev_driver_string" },
	{ 0x6d11488, "__bitmap_equal" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0x777137ac, "dev_addr_mod" },
	{ 0x263b5ff2, "xdp_rxq_info_reg_mem_model" },
	{ 0xb1647fc2, "devlink_info_version_running_put" },
	{ 0x84a0ca4d, "bitmap_zalloc_node" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x83a0f58d, "ptp_find_pin" },
	{ 0x1f415566, "eth_type_trans" },
	{ 0x3be2ccd0, "pci_read_config_dword" },
	{ 0xafb14d1d, "request_firmware_direct" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbd3089a0, "auxiliary_driver_unregister" },
	{ 0x28beaeee, "dma_map_page_attrs" },
	{ 0x5566284a, "trace_seq_putc" },
	{ 0xfc72f922, "napi_complete_done" },
	{ 0x4945db69, "__alloc_pages_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xe8552174, "priv_to_devlink" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0xf390f6f1, "__bitmap_andnot" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe40bb23e, "devlink_health_reporter_priv" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xca844bc7, "put_device" },
	{ 0x7f52071a, "net_dim" },
	{ 0x914d4147, "__napi_schedule" },
	{ 0xf8c4e8f8, "devlink_port_health_reporter_create" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xc59688, "pcie_relaxed_ordering_enabled" },
	{ 0x9781f51a, "xsk_set_rx_need_wakeup" },
	{ 0xa916b694, "strnlen" },
	{ 0x54fe87af, "netif_device_detach" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x618911fc, "numa_node" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x5a549f7, "_dev_info" },
	{ 0xad69bd80, "napi_gro_receive" },
	{ 0xfa7979d6, "netif_device_attach" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0x370f296d, "netdev_pick_tx" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x4bbdca3b, "xp_raw_get_dma" },
	{ 0xadfbd0c4, "eth_get_headlen" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8f14d45b, "get_zeroed_page_noprof" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0xb11b230a, "xdp_rxq_info_is_reg" },
	{ 0xc2c5802, "work_busy" },
	{ 0xf8ff8ee7, "devlink_net" },
	{ 0x7fcc1f2e, "devlink_fmsg_bool_pair_put" },
	{ 0x1591b2c6, "hyperv_read_cfg_blk" },
	{ 0xeedcc596, "devl_health_reporter_create" },
	{ 0x34f161d7, "flow_block_cb_setup_simple" },
	{ 0x62c5f6d5, "pci_msix_can_alloc_dyn" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7188fd5f, "pci_find_capability" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xcaa6e63e, "pci_iov_vf_id" },
	{ 0x4b27d977, "devlink_fmsg_arr_pair_nest_start" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xd4afea5d, "free_irq_cpu_rmap" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x7f67ab4, "__dma_sync_single_for_cpu" },
	{ 0xd49e6d7b, "pci_msix_free_irq" },
	{ 0xc8a91f5b, "cpumask_local_spread" },
	{ 0x7919b383, "alloc_cpu_rmap" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x461dfab1, "devlink_fmsg_pair_nest_start" },
	{ 0x199c4833, "__irq_apply_affinity_hint" },
	{ 0xf18d0b2b, "devlink_port_unregister" },
	{ 0x57bc19d2, "down_write" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xe5590ebd, "init_net" },
	{ 0xce807a25, "up_write" },
	{ 0x3e47caf6, "softnet_data" },
	{ 0x86de2938, "simple_open" },
	{ 0x87400f82, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7dd8502e, "xdp_return_frame" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbbff2fb6, "ptp_clock_register" },
	{ 0x3d00a78f, "devl_nested_devlink_set" },
	{ 0x844a859b, "xsk_tx_peek_desc" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xd4080450, "netif_set_real_num_tx_queues" },
	{ 0x8ec9aec2, "devlink_fmsg_u8_pair_put" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xb0f9c261, "__auxiliary_device_add" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x9172f297, "irq_get_irq_data" },
	{ 0xb64d2547, "dev_remove_pack" },
	{ 0xf79f74ab, "netif_set_real_num_rx_queues" },
	{ 0x6626afca, "down" },
	{ 0x19e2cc40, "dev_get_by_index" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "mlxfw,pci-hyperv-intf,ptp");

MODULE_ALIAS("pci:v000015B3d00001011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000101Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000101Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000101Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000101Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000101Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000101Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001025sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000A2D2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000A2D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000A2D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000A2DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000A2DFsv*sd*bc*sc*i*");
MODULE_ALIAS("auxiliary:mlx5_core.eth");
