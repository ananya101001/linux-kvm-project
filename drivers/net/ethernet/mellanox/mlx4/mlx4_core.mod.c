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

KSYMTAB_FUNC(mlx4_buf_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_buf_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_db_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_db_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_alloc_hwq_res, "_gpl", "");
KSYMTAB_FUNC(mlx4_free_hwq_res, "_gpl", "");
KSYMTAB_FUNC(__mlx4_cmd, "_gpl", "");
KSYMTAB_FUNC(mlx4_alloc_cmd_mailbox, "_gpl", "");
KSYMTAB_FUNC(mlx4_free_cmd_mailbox, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_active_ports, "_gpl", "");
KSYMTAB_FUNC(mlx4_slave_convert_port, "_gpl", "");
KSYMTAB_FUNC(mlx4_phys_to_slave_port, "_gpl", "");
KSYMTAB_FUNC(mlx4_phys_to_slaves_pport, "_gpl", "");
KSYMTAB_FUNC(mlx4_phys_to_slaves_pport_actv, "_gpl", "");
KSYMTAB_FUNC(mlx4_set_vf_mac, "_gpl", "");
KSYMTAB_FUNC(mlx4_set_vf_vlan, "_gpl", "");
KSYMTAB_FUNC(mlx4_set_vf_rate, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_slave_default_vlan, "_gpl", "");
KSYMTAB_FUNC(mlx4_set_vf_spoofchk, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_vf_config, "_gpl", "");
KSYMTAB_FUNC(mlx4_set_vf_link_state, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_counter_stats, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_vf_stats, "_gpl", "");
KSYMTAB_FUNC(mlx4_vf_smi_enabled, "_gpl", "");
KSYMTAB_FUNC(mlx4_vf_get_enable_smi_admin, "_gpl", "");
KSYMTAB_FUNC(mlx4_vf_set_enable_smi_admin, "_gpl", "");
KSYMTAB_FUNC(mlx4_cq_modify, "_gpl", "");
KSYMTAB_FUNC(mlx4_cq_resize, "_gpl", "");
KSYMTAB_FUNC(mlx4_cq_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_cq_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_gen_pkey_eqe, "", "");
KSYMTAB_FUNC(mlx4_gen_guid_change_eqe, "", "");
KSYMTAB_FUNC(mlx4_gen_port_state_change_eqe, "", "");
KSYMTAB_FUNC(mlx4_get_slave_port_state, "", "");
KSYMTAB_FUNC(set_and_calc_slave_port_state, "", "");
KSYMTAB_FUNC(mlx4_gen_slaves_port_mgt_ev, "", "");
KSYMTAB_FUNC(mlx4_test_async, "", "");
KSYMTAB_FUNC(mlx4_test_interrupt, "", "");
KSYMTAB_FUNC(mlx4_is_eq_vector_valid, "", "");
KSYMTAB_FUNC(mlx4_get_eqs_per_port, "", "");
KSYMTAB_FUNC(mlx4_is_eq_shared, "", "");
KSYMTAB_FUNC(mlx4_get_cpu_rmap, "", "");
KSYMTAB_FUNC(mlx4_assign_eq, "", "");
KSYMTAB_FUNC(mlx4_eq_get_irq, "", "");
KSYMTAB_FUNC(mlx4_release_eq, "", "");
KSYMTAB_FUNC(mlx4_get_slave_pkey_gid_tbl_len, "", "");
KSYMTAB_FUNC(mlx4_INIT_PORT, "_gpl", "");
KSYMTAB_FUNC(mlx4_CLOSE_PORT, "_gpl", "");
KSYMTAB_FUNC(mlx4_config_dev_retrieval, "_gpl", "");
KSYMTAB_FUNC(mlx4_config_vxlan_port, "_gpl", "");
KSYMTAB_FUNC(mlx4_config_roce_v2_port, "_gpl", "");
KSYMTAB_FUNC(mlx4_query_diag_counters, "", "");
KSYMTAB_FUNC(mlx4_wol_read, "_gpl", "");
KSYMTAB_FUNC(mlx4_wol_write, "_gpl", "");
KSYMTAB_FUNC(mlx4_ACCESS_PTYS_REG, "_gpl", "");
KSYMTAB_FUNC(get_phv_bit, "", "");
KSYMTAB_FUNC(set_phv_bit, "", "");
KSYMTAB_FUNC(mlx4_get_is_vlan_offload_disabled, "", "");
KSYMTAB_FUNC(mlx4_replace_zero_macs, "_gpl", "");
KSYMTAB_FUNC(mlx4_SET_PORT_PRIO2TC, "", "");
KSYMTAB_FUNC(mlx4_SET_PORT_SCHEDULER, "", "");
KSYMTAB_FUNC(mlx4_ALLOCATE_VPP_get, "", "");
KSYMTAB_FUNC(mlx4_ALLOCATE_VPP_set, "", "");
KSYMTAB_FUNC(mlx4_SET_VPORT_QOS_get, "", "");
KSYMTAB_FUNC(mlx4_SET_VPORT_QOS_set, "", "");
KSYMTAB_FUNC(mlx4_register_auxiliary_driver, "_gpl", "");
KSYMTAB_FUNC(mlx4_unregister_auxiliary_driver, "_gpl", "");
KSYMTAB_FUNC(mlx4_register_event_notifier, "", "");
KSYMTAB_FUNC(mlx4_unregister_event_notifier, "", "");
KSYMTAB_FUNC(mlx4_get_devlink_port, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_parav_qkey, "", "");
KSYMTAB_FUNC(mlx4_sync_pkey_table, "", "");
KSYMTAB_FUNC(mlx4_put_slave_node_guid, "", "");
KSYMTAB_FUNC(mlx4_get_slave_node_guid, "", "");
KSYMTAB_FUNC(mlx4_is_slave_active, "", "");
KSYMTAB_FUNC(mlx4_handle_eth_header_mcast_prio, "", "");
KSYMTAB_FUNC(mlx4_queue_bond_work, "", "");
KSYMTAB_FUNC(mlx4_read_clock, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_internal_clock_params, "_gpl", "");
KSYMTAB_FUNC(mlx4_counter_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_counter_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_default_counter_index, "_gpl", "");
KSYMTAB_FUNC(mlx4_set_admin_guid, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_admin_guid, "_gpl", "");
KSYMTAB_FUNC(mlx4_map_sw_to_hw_steering_mode, "_gpl", "");
KSYMTAB_FUNC(mlx4_map_sw_to_hw_steering_id, "_gpl", "");
KSYMTAB_FUNC(mlx4_hw_rule_sz, "_gpl", "");
KSYMTAB_FUNC(mlx4_flow_attach, "_gpl", "");
KSYMTAB_FUNC(mlx4_flow_detach, "_gpl", "");
KSYMTAB_FUNC(mlx4_tunnel_steer_add, "", "");
KSYMTAB_FUNC(mlx4_FLOW_STEERING_IB_UC_QP_RANGE, "_gpl", "");
KSYMTAB_FUNC(mlx4_multicast_attach, "_gpl", "");
KSYMTAB_FUNC(mlx4_multicast_detach, "_gpl", "");
KSYMTAB_FUNC(mlx4_flow_steer_promisc_add, "_gpl", "");
KSYMTAB_FUNC(mlx4_flow_steer_promisc_remove, "_gpl", "");
KSYMTAB_FUNC(mlx4_unicast_attach, "_gpl", "");
KSYMTAB_FUNC(mlx4_unicast_detach, "_gpl", "");
KSYMTAB_FUNC(mlx4_multicast_promisc_add, "_gpl", "");
KSYMTAB_FUNC(mlx4_multicast_promisc_remove, "_gpl", "");
KSYMTAB_FUNC(mlx4_unicast_promisc_add, "_gpl", "");
KSYMTAB_FUNC(mlx4_unicast_promisc_remove, "_gpl", "");
KSYMTAB_FUNC(mlx4_mtt_init, "_gpl", "");
KSYMTAB_FUNC(mlx4_mtt_cleanup, "_gpl", "");
KSYMTAB_FUNC(mlx4_mtt_addr, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_hw_get_mpt, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_hw_write_mpt, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_hw_put_mpt, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_hw_change_pd, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_hw_change_access, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_rereg_mem_cleanup, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_rereg_mem_write, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_enable, "_gpl", "");
KSYMTAB_FUNC(mlx4_write_mtt, "_gpl", "");
KSYMTAB_FUNC(mlx4_buf_write_mtt, "_gpl", "");
KSYMTAB_FUNC(mlx4_mw_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_mw_enable, "_gpl", "");
KSYMTAB_FUNC(mlx4_mw_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_SYNC_TPT, "_gpl", "");
KSYMTAB_FUNC(mlx4_pd_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_pd_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_xrcd_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_xrcd_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_uar_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_uar_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_bf_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_bf_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_find_cached_mac, "_gpl", "");
KSYMTAB_FUNC(__mlx4_register_mac, "_gpl", "");
KSYMTAB_FUNC(mlx4_register_mac, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_base_qpn, "_gpl", "");
KSYMTAB_FUNC(__mlx4_unregister_mac, "_gpl", "");
KSYMTAB_FUNC(mlx4_unregister_mac, "_gpl", "");
KSYMTAB_FUNC(__mlx4_replace_mac, "_gpl", "");
KSYMTAB_FUNC(mlx4_find_cached_vlan, "_gpl", "");
KSYMTAB_FUNC(mlx4_register_vlan, "_gpl", "");
KSYMTAB_FUNC(mlx4_unregister_vlan, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_base_gid_ix, "_gpl", "");
KSYMTAB_FUNC(mlx4_SET_PORT_general, "", "");
KSYMTAB_FUNC(mlx4_SET_PORT_qpn_calc, "", "");
KSYMTAB_FUNC(mlx4_SET_PORT_user_mtu, "", "");
KSYMTAB_FUNC(mlx4_SET_PORT_user_mac, "", "");
KSYMTAB_FUNC(mlx4_SET_PORT_fcs_check, "", "");
KSYMTAB_FUNC(mlx4_SET_PORT_VXLAN, "", "");
KSYMTAB_FUNC(mlx4_SET_PORT_BEACON, "", "");
KSYMTAB_FUNC(mlx4_SET_MCAST_FLTR, "", "");
KSYMTAB_FUNC(mlx4_get_slave_from_roce_gid, "", "");
KSYMTAB_FUNC(mlx4_get_roce_gid_from_slave, "", "");
KSYMTAB_FUNC(mlx4_get_module_info, "", "");
KSYMTAB_FUNC(mlx4_max_tc, "", "");
KSYMTAB_FUNC(mlx4_put_qp, "_gpl", "");
KSYMTAB_FUNC(mlx4_qp_modify, "_gpl", "");
KSYMTAB_FUNC(mlx4_qp_reserve_range, "_gpl", "");
KSYMTAB_FUNC(mlx4_qp_release_range, "_gpl", "");
KSYMTAB_FUNC(mlx4_qp_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_update_qp, "_gpl", "");
KSYMTAB_FUNC(mlx4_qp_remove, "_gpl", "");
KSYMTAB_FUNC(mlx4_qp_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_qp_query, "_gpl", "");
KSYMTAB_FUNC(mlx4_qp_to_ready, "_gpl", "");
KSYMTAB_FUNC(mlx4_srq_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_srq_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_srq_arm, "_gpl", "");
KSYMTAB_FUNC(mlx4_srq_query, "_gpl", "");
KSYMTAB_FUNC(mlx4_srq_lookup, "_gpl", "");

SYMBOL_CRC(mlx4_buf_alloc, 0xdbda260e, "_gpl");
SYMBOL_CRC(mlx4_buf_free, 0x73363519, "_gpl");
SYMBOL_CRC(mlx4_db_alloc, 0xf3bbd3c7, "_gpl");
SYMBOL_CRC(mlx4_db_free, 0x6d96ca57, "_gpl");
SYMBOL_CRC(mlx4_alloc_hwq_res, 0x736175e5, "_gpl");
SYMBOL_CRC(mlx4_free_hwq_res, 0x94cb90c4, "_gpl");
SYMBOL_CRC(__mlx4_cmd, 0xea15632d, "_gpl");
SYMBOL_CRC(mlx4_alloc_cmd_mailbox, 0xd50b33e1, "_gpl");
SYMBOL_CRC(mlx4_free_cmd_mailbox, 0xca21123f, "_gpl");
SYMBOL_CRC(mlx4_get_active_ports, 0x41081ba1, "_gpl");
SYMBOL_CRC(mlx4_slave_convert_port, 0x842a2dae, "_gpl");
SYMBOL_CRC(mlx4_phys_to_slave_port, 0x89fcfc47, "_gpl");
SYMBOL_CRC(mlx4_phys_to_slaves_pport, 0xcf525f1a, "_gpl");
SYMBOL_CRC(mlx4_phys_to_slaves_pport_actv, 0xed4911aa, "_gpl");
SYMBOL_CRC(mlx4_set_vf_mac, 0xd1cc2e10, "_gpl");
SYMBOL_CRC(mlx4_set_vf_vlan, 0xc27b8f51, "_gpl");
SYMBOL_CRC(mlx4_set_vf_rate, 0xbf59a427, "_gpl");
SYMBOL_CRC(mlx4_get_slave_default_vlan, 0xa45b6c46, "_gpl");
SYMBOL_CRC(mlx4_set_vf_spoofchk, 0x65aea7a5, "_gpl");
SYMBOL_CRC(mlx4_get_vf_config, 0xf82ee6ed, "_gpl");
SYMBOL_CRC(mlx4_set_vf_link_state, 0x573c9208, "_gpl");
SYMBOL_CRC(mlx4_get_counter_stats, 0x59c6a297, "_gpl");
SYMBOL_CRC(mlx4_get_vf_stats, 0xebc4399f, "_gpl");
SYMBOL_CRC(mlx4_vf_smi_enabled, 0x6cedd0c1, "_gpl");
SYMBOL_CRC(mlx4_vf_get_enable_smi_admin, 0xae339058, "_gpl");
SYMBOL_CRC(mlx4_vf_set_enable_smi_admin, 0xf37e08fa, "_gpl");
SYMBOL_CRC(mlx4_cq_modify, 0x4156eb69, "_gpl");
SYMBOL_CRC(mlx4_cq_resize, 0x6a0bc879, "_gpl");
SYMBOL_CRC(mlx4_cq_alloc, 0x7568734f, "_gpl");
SYMBOL_CRC(mlx4_cq_free, 0x5a7e9aea, "_gpl");
SYMBOL_CRC(mlx4_gen_pkey_eqe, 0xbeb2c4af, "");
SYMBOL_CRC(mlx4_gen_guid_change_eqe, 0xe6dcf01b, "");
SYMBOL_CRC(mlx4_gen_port_state_change_eqe, 0xa15e9be8, "");
SYMBOL_CRC(mlx4_get_slave_port_state, 0x42b9cdc2, "");
SYMBOL_CRC(set_and_calc_slave_port_state, 0x6ee28a2f, "");
SYMBOL_CRC(mlx4_gen_slaves_port_mgt_ev, 0xe1df91ee, "");
SYMBOL_CRC(mlx4_test_async, 0x5be81788, "");
SYMBOL_CRC(mlx4_test_interrupt, 0xdedede66, "");
SYMBOL_CRC(mlx4_is_eq_vector_valid, 0x3e9f2e6f, "");
SYMBOL_CRC(mlx4_get_eqs_per_port, 0xdca894e9, "");
SYMBOL_CRC(mlx4_is_eq_shared, 0x2fe68fc9, "");
SYMBOL_CRC(mlx4_get_cpu_rmap, 0x0e7e4b61, "");
SYMBOL_CRC(mlx4_assign_eq, 0x0905a371, "");
SYMBOL_CRC(mlx4_eq_get_irq, 0x6e6bc04c, "");
SYMBOL_CRC(mlx4_release_eq, 0x7f198743, "");
SYMBOL_CRC(mlx4_get_slave_pkey_gid_tbl_len, 0xc8a9c9ef, "");
SYMBOL_CRC(mlx4_INIT_PORT, 0x68962420, "_gpl");
SYMBOL_CRC(mlx4_CLOSE_PORT, 0xf10acf6f, "_gpl");
SYMBOL_CRC(mlx4_config_dev_retrieval, 0xe3c2687a, "_gpl");
SYMBOL_CRC(mlx4_config_vxlan_port, 0x5c7080f8, "_gpl");
SYMBOL_CRC(mlx4_config_roce_v2_port, 0x47eea545, "_gpl");
SYMBOL_CRC(mlx4_query_diag_counters, 0x4dbc287c, "");
SYMBOL_CRC(mlx4_wol_read, 0x6eab624f, "_gpl");
SYMBOL_CRC(mlx4_wol_write, 0xc888a2d6, "_gpl");
SYMBOL_CRC(mlx4_ACCESS_PTYS_REG, 0xf5766a80, "_gpl");
SYMBOL_CRC(get_phv_bit, 0x23063db8, "");
SYMBOL_CRC(set_phv_bit, 0x8bbf8c81, "");
SYMBOL_CRC(mlx4_get_is_vlan_offload_disabled, 0xb1c194ee, "");
SYMBOL_CRC(mlx4_replace_zero_macs, 0xb5aee789, "_gpl");
SYMBOL_CRC(mlx4_SET_PORT_PRIO2TC, 0xf68f02e4, "");
SYMBOL_CRC(mlx4_SET_PORT_SCHEDULER, 0x64681d4a, "");
SYMBOL_CRC(mlx4_ALLOCATE_VPP_get, 0xd0a0f8ba, "");
SYMBOL_CRC(mlx4_ALLOCATE_VPP_set, 0xb0b98b04, "");
SYMBOL_CRC(mlx4_SET_VPORT_QOS_get, 0x7dd9cf3b, "");
SYMBOL_CRC(mlx4_SET_VPORT_QOS_set, 0xd5aae174, "");
SYMBOL_CRC(mlx4_register_auxiliary_driver, 0x5a4f314f, "_gpl");
SYMBOL_CRC(mlx4_unregister_auxiliary_driver, 0x55577780, "_gpl");
SYMBOL_CRC(mlx4_register_event_notifier, 0xed68aea4, "");
SYMBOL_CRC(mlx4_unregister_event_notifier, 0xb010cc48, "");
SYMBOL_CRC(mlx4_get_devlink_port, 0xc1b801e0, "_gpl");
SYMBOL_CRC(mlx4_get_parav_qkey, 0xb1c46caa, "");
SYMBOL_CRC(mlx4_sync_pkey_table, 0x917fa0a0, "");
SYMBOL_CRC(mlx4_put_slave_node_guid, 0x213b9307, "");
SYMBOL_CRC(mlx4_get_slave_node_guid, 0x1c307725, "");
SYMBOL_CRC(mlx4_is_slave_active, 0x5b214a00, "");
SYMBOL_CRC(mlx4_handle_eth_header_mcast_prio, 0x7fdde0b4, "");
SYMBOL_CRC(mlx4_queue_bond_work, 0xca01004a, "");
SYMBOL_CRC(mlx4_read_clock, 0x69f38ac3, "_gpl");
SYMBOL_CRC(mlx4_get_internal_clock_params, 0x9d828937, "_gpl");
SYMBOL_CRC(mlx4_counter_alloc, 0xb68e2c47, "_gpl");
SYMBOL_CRC(mlx4_counter_free, 0x9a1937cc, "_gpl");
SYMBOL_CRC(mlx4_get_default_counter_index, 0xc838c9ac, "_gpl");
SYMBOL_CRC(mlx4_set_admin_guid, 0xcc4e24c4, "_gpl");
SYMBOL_CRC(mlx4_get_admin_guid, 0x7aeac660, "_gpl");
SYMBOL_CRC(mlx4_map_sw_to_hw_steering_mode, 0x6fce7558, "_gpl");
SYMBOL_CRC(mlx4_map_sw_to_hw_steering_id, 0xbd89a5a3, "_gpl");
SYMBOL_CRC(mlx4_hw_rule_sz, 0xcfca7a9d, "_gpl");
SYMBOL_CRC(mlx4_flow_attach, 0xbe5c128a, "_gpl");
SYMBOL_CRC(mlx4_flow_detach, 0x55483929, "_gpl");
SYMBOL_CRC(mlx4_tunnel_steer_add, 0xd29812c0, "");
SYMBOL_CRC(mlx4_FLOW_STEERING_IB_UC_QP_RANGE, 0x2cedb26d, "_gpl");
SYMBOL_CRC(mlx4_multicast_attach, 0x29313aba, "_gpl");
SYMBOL_CRC(mlx4_multicast_detach, 0xd8c87fe2, "_gpl");
SYMBOL_CRC(mlx4_flow_steer_promisc_add, 0x6e417fe9, "_gpl");
SYMBOL_CRC(mlx4_flow_steer_promisc_remove, 0x16fa28ed, "_gpl");
SYMBOL_CRC(mlx4_unicast_attach, 0xa5204f55, "_gpl");
SYMBOL_CRC(mlx4_unicast_detach, 0x7c230177, "_gpl");
SYMBOL_CRC(mlx4_multicast_promisc_add, 0x427c2409, "_gpl");
SYMBOL_CRC(mlx4_multicast_promisc_remove, 0xb8c64781, "_gpl");
SYMBOL_CRC(mlx4_unicast_promisc_add, 0xbe99c83e, "_gpl");
SYMBOL_CRC(mlx4_unicast_promisc_remove, 0xbb491e7f, "_gpl");
SYMBOL_CRC(mlx4_mtt_init, 0xb78ff5d4, "_gpl");
SYMBOL_CRC(mlx4_mtt_cleanup, 0x07c3d36c, "_gpl");
SYMBOL_CRC(mlx4_mtt_addr, 0x8f274859, "_gpl");
SYMBOL_CRC(mlx4_mr_hw_get_mpt, 0x134db273, "_gpl");
SYMBOL_CRC(mlx4_mr_hw_write_mpt, 0x1111f77e, "_gpl");
SYMBOL_CRC(mlx4_mr_hw_put_mpt, 0xdb79cf75, "_gpl");
SYMBOL_CRC(mlx4_mr_hw_change_pd, 0x0afb833f, "_gpl");
SYMBOL_CRC(mlx4_mr_hw_change_access, 0x45c9cabf, "_gpl");
SYMBOL_CRC(mlx4_mr_alloc, 0xc2140081, "_gpl");
SYMBOL_CRC(mlx4_mr_free, 0xd3799ee2, "_gpl");
SYMBOL_CRC(mlx4_mr_rereg_mem_cleanup, 0xda35fa04, "_gpl");
SYMBOL_CRC(mlx4_mr_rereg_mem_write, 0xcafc5652, "_gpl");
SYMBOL_CRC(mlx4_mr_enable, 0xdb17d368, "_gpl");
SYMBOL_CRC(mlx4_write_mtt, 0xe0fc9220, "_gpl");
SYMBOL_CRC(mlx4_buf_write_mtt, 0xd27133b6, "_gpl");
SYMBOL_CRC(mlx4_mw_alloc, 0xf871b8d9, "_gpl");
SYMBOL_CRC(mlx4_mw_enable, 0x5632a542, "_gpl");
SYMBOL_CRC(mlx4_mw_free, 0x14d4eee6, "_gpl");
SYMBOL_CRC(mlx4_SYNC_TPT, 0x7bc839d1, "_gpl");
SYMBOL_CRC(mlx4_pd_alloc, 0xe3ffe89d, "_gpl");
SYMBOL_CRC(mlx4_pd_free, 0xa4b3c90b, "_gpl");
SYMBOL_CRC(mlx4_xrcd_alloc, 0x148e4b98, "_gpl");
SYMBOL_CRC(mlx4_xrcd_free, 0x3369d85a, "_gpl");
SYMBOL_CRC(mlx4_uar_alloc, 0x410f37e5, "_gpl");
SYMBOL_CRC(mlx4_uar_free, 0xc3549461, "_gpl");
SYMBOL_CRC(mlx4_bf_alloc, 0xeb61bcbf, "_gpl");
SYMBOL_CRC(mlx4_bf_free, 0x5b5ce9d6, "_gpl");
SYMBOL_CRC(mlx4_find_cached_mac, 0x8a692660, "_gpl");
SYMBOL_CRC(__mlx4_register_mac, 0x70014565, "_gpl");
SYMBOL_CRC(mlx4_register_mac, 0x2b602add, "_gpl");
SYMBOL_CRC(mlx4_get_base_qpn, 0x7c04d07b, "_gpl");
SYMBOL_CRC(__mlx4_unregister_mac, 0x60cb3bb8, "_gpl");
SYMBOL_CRC(mlx4_unregister_mac, 0x936652a1, "_gpl");
SYMBOL_CRC(__mlx4_replace_mac, 0xad99e9ca, "_gpl");
SYMBOL_CRC(mlx4_find_cached_vlan, 0xaac09e37, "_gpl");
SYMBOL_CRC(mlx4_register_vlan, 0x6af615e6, "_gpl");
SYMBOL_CRC(mlx4_unregister_vlan, 0x6cafbdcc, "_gpl");
SYMBOL_CRC(mlx4_get_base_gid_ix, 0xf8b149e0, "_gpl");
SYMBOL_CRC(mlx4_SET_PORT_general, 0xa3081b49, "");
SYMBOL_CRC(mlx4_SET_PORT_qpn_calc, 0xe315c7d7, "");
SYMBOL_CRC(mlx4_SET_PORT_user_mtu, 0x38bc2aa5, "");
SYMBOL_CRC(mlx4_SET_PORT_user_mac, 0x19bc9b53, "");
SYMBOL_CRC(mlx4_SET_PORT_fcs_check, 0x616ae8e9, "");
SYMBOL_CRC(mlx4_SET_PORT_VXLAN, 0x47054e99, "");
SYMBOL_CRC(mlx4_SET_PORT_BEACON, 0x1b7fc4df, "");
SYMBOL_CRC(mlx4_SET_MCAST_FLTR, 0x3c30301c, "");
SYMBOL_CRC(mlx4_get_slave_from_roce_gid, 0xd0b9f64f, "");
SYMBOL_CRC(mlx4_get_roce_gid_from_slave, 0xd55d178a, "");
SYMBOL_CRC(mlx4_get_module_info, 0x320da528, "");
SYMBOL_CRC(mlx4_max_tc, 0x88a8d4f0, "");
SYMBOL_CRC(mlx4_put_qp, 0xf4b0999f, "_gpl");
SYMBOL_CRC(mlx4_qp_modify, 0x0fd39d94, "_gpl");
SYMBOL_CRC(mlx4_qp_reserve_range, 0x17b4c97c, "_gpl");
SYMBOL_CRC(mlx4_qp_release_range, 0x8a0a8870, "_gpl");
SYMBOL_CRC(mlx4_qp_alloc, 0xc969f12a, "_gpl");
SYMBOL_CRC(mlx4_update_qp, 0xe2c07493, "_gpl");
SYMBOL_CRC(mlx4_qp_remove, 0xf1dae20c, "_gpl");
SYMBOL_CRC(mlx4_qp_free, 0x7280c706, "_gpl");
SYMBOL_CRC(mlx4_qp_query, 0x1455b7bd, "_gpl");
SYMBOL_CRC(mlx4_qp_to_ready, 0x7b488ae1, "_gpl");
SYMBOL_CRC(mlx4_srq_alloc, 0x0d488900, "_gpl");
SYMBOL_CRC(mlx4_srq_free, 0x6c3b129d, "_gpl");
SYMBOL_CRC(mlx4_srq_arm, 0x25d6687b, "_gpl");
SYMBOL_CRC(mlx4_srq_query, 0xb763ef1b, "_gpl");
SYMBOL_CRC(mlx4_srq_lookup, 0xf24e2d45, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3131271a, "get_device" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9493fc86, "node_states" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x6d11488, "__bitmap_equal" },
	{ 0x3be2ccd0, "pci_read_config_dword" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbd3089a0, "auxiliary_driver_unregister" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4945db69, "__alloc_pages_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x6f3e5cf7, "devlink_region_snapshot_id_put" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xe8552174, "priv_to_devlink" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xca844bc7, "put_device" },
	{ 0x915978ed, "pci_enable_msix_range" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xa916b694, "strnlen" },
	{ 0x618911fc, "numa_node" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x97187c10, "device_create_file" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xd4afea5d, "free_irq_cpu_rmap" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x6972e413, "__bitmap_weight_and" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x7f67ab4, "__dma_sync_single_for_cpu" },
	{ 0x7919b383, "alloc_cpu_rmap" },
	{ 0x199c4833, "__irq_apply_affinity_hint" },
	{ 0x57bc19d2, "down_write" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xe5590ebd, "init_net" },
	{ 0xce807a25, "up_write" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x949b5176, "devlink_region_snapshot_create" },
	{ 0xb0f9c261, "__auxiliary_device_add" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6626afca, "down" },
	{ 0xbbb1d9ec, "devl_port_register_with_ops" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x25d9a822, "dma_alloc_attrs" },
	{ 0x797e5068, "pci_read_config_word" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x7a3f16a2, "devl_region_destroy" },
	{ 0xffb7c514, "ida_free" },
	{ 0x882585a1, "devl_params_register" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xde80cd09, "ioremap" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4e64974, "pci_restore_state" },
	{ 0xc04e9955, "device_del" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xd39aa6e6, "devl_param_driverinit_value_set" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xd9e6ec72, "__kmalloc_cache_node_noprof" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0xb72e7d4e, "pci_set_master" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xaa7e2ba5, "devl_params_unregister" },
	{ 0xece784c2, "rb_first" },
	{ 0x668b19a1, "down_read" },
	{ 0xa9fd0f95, "devl_unlock" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dce513f, "dma_set_coherent_mask" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x54c15cee, "dma_free_attrs" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xdfaa93c9, "pci_release_regions" },
	{ 0x5dcfb0c6, "__dma_sync_single_for_device" },
	{ 0x79fef026, "devl_assert_locked" },
	{ 0x541afd15, "pcie_print_link_status" },
	{ 0x5338b7ec, "devl_port_unregister" },
	{ 0x82c1f6fb, "devl_param_driverinit_value_get" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x22318879, "devlink_priv" },
	{ 0x1651d3ce, "pci_disable_sriov" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xfbf6ec91, "pci_disable_msix" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x544253f5, "pci_disable_device" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xe1779b47, "dma_set_mask" },
	{ 0xa4e14fd1, "__auxiliary_driver_register" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x4836cf95, "dma_unmap_sg_attrs" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x754d539c, "strlen" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xe3a61ac6, "_dev_printk" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0xbd268111, "pci_enable_sriov" },
	{ 0x53b954a2, "up_read" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3d647afc, "pci_write_config_dword" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xeeea671c, "device_remove_file" },
	{ 0x909396f0, "dma_map_sg_attrs" },
	{ 0xe8a65208, "devl_param_value_changed" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf635e4fa, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x436b9380, "pcie_capability_write_word" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x9e87f93a, "devl_region_create" },
	{ 0x4accb517, "devlink_unregister" },
	{ 0x5dfd4352, "dma_pool_create" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xaad21b46, "pci_enable_device" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa4894a1b, "auxiliary_device_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcd6be295, "devlink_region_snapshot_id_get" },
	{ 0x165ac2d4, "devl_lock" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xca9360b5, "rb_next" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x96848186, "scnprintf" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0xcf2a6966, "up" },
	{ 0xedc03953, "iounmap" },
	{ 0x64bfcca9, "pci_num_vf" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x73108bd5, "param_array_ops" },
	{ 0xb2cacf1e, "pci_request_regions" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4cc271fb, "devlink_alloc_ns" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0x843dc69c, "pci_sriov_get_totalvfs" },
	{ 0xc12705e, "devlink_register" },
	{ 0xab22976e, "devlink_port_type_clear" },
	{ 0x560227d9, "devlink_free" },
	{ 0x81c51d19, "irq_cpu_rmap_add" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x96da6bbd, "param_ops_byte" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015B3d00006340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000634Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006354sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006732sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000673Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000675Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006764sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006746sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000676Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FD3B380A8BE9456BE066421");
