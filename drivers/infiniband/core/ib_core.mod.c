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

KSYMTAB_FUNC(ib_pack, "", "");
KSYMTAB_FUNC(ib_unpack, "", "");
KSYMTAB_FUNC(ib_ud_ip4_csum, "", "");
KSYMTAB_FUNC(ib_ud_header_init, "", "");
KSYMTAB_FUNC(ib_ud_header_pack, "", "");
KSYMTAB_FUNC(ib_ud_header_unpack, "", "");
KSYMTAB_FUNC(ib_event_msg, "", "");
KSYMTAB_FUNC(ib_wc_status_msg, "", "");
KSYMTAB_FUNC(ib_rate_to_mult, "", "");
KSYMTAB_FUNC(mult_to_ib_rate, "", "");
KSYMTAB_FUNC(ib_rate_to_mbps, "", "");
KSYMTAB_FUNC(rdma_node_get_transport, "", "");
KSYMTAB_FUNC(rdma_port_get_link_layer, "", "");
KSYMTAB_FUNC(__ib_alloc_pd, "", "");
KSYMTAB_FUNC(ib_dealloc_pd_user, "", "");
KSYMTAB_FUNC(rdma_copy_ah_attr, "", "");
KSYMTAB_FUNC(rdma_replace_ah_attr, "", "");
KSYMTAB_FUNC(rdma_move_ah_attr, "", "");
KSYMTAB_FUNC(rdma_create_ah, "", "");
KSYMTAB_FUNC(rdma_create_user_ah, "", "");
KSYMTAB_FUNC(ib_get_rdma_header_version, "", "");
KSYMTAB_FUNC(ib_get_gids_from_rdma_hdr, "", "");
KSYMTAB_FUNC(ib_init_ah_attr_from_wc, "", "");
KSYMTAB_FUNC(rdma_move_grh_sgid_attr, "", "");
KSYMTAB_FUNC(rdma_destroy_ah_attr, "", "");
KSYMTAB_FUNC(ib_create_ah_from_wc, "", "");
KSYMTAB_FUNC(rdma_modify_ah, "", "");
KSYMTAB_FUNC(rdma_query_ah, "", "");
KSYMTAB_FUNC(rdma_destroy_ah_user, "", "");
KSYMTAB_FUNC(ib_create_srq_user, "", "");
KSYMTAB_FUNC(ib_modify_srq, "", "");
KSYMTAB_FUNC(ib_query_srq, "", "");
KSYMTAB_FUNC(ib_destroy_srq_user, "", "");
KSYMTAB_FUNC(ib_open_qp, "", "");
KSYMTAB_FUNC(ib_create_qp_user, "", "");
KSYMTAB_FUNC(ib_qp_usecnt_inc, "", "");
KSYMTAB_FUNC(ib_qp_usecnt_dec, "", "");
KSYMTAB_FUNC(ib_create_qp_kernel, "", "");
KSYMTAB_FUNC(ib_modify_qp_is_ok, "", "");
KSYMTAB_FUNC(ib_modify_qp_with_udata, "", "");
KSYMTAB_FUNC(ib_get_eth_speed, "", "");
KSYMTAB_FUNC(ib_modify_qp, "", "");
KSYMTAB_FUNC(ib_query_qp, "", "");
KSYMTAB_FUNC(ib_close_qp, "", "");
KSYMTAB_FUNC(ib_destroy_qp_user, "", "");
KSYMTAB_FUNC(__ib_create_cq, "", "");
KSYMTAB_FUNC(rdma_set_cq_moderation, "", "");
KSYMTAB_FUNC(ib_destroy_cq_user, "", "");
KSYMTAB_FUNC(ib_resize_cq, "", "");
KSYMTAB_FUNC(ib_reg_user_mr, "", "");
KSYMTAB_FUNC(ib_advise_mr, "", "");
KSYMTAB_FUNC(ib_dereg_mr_user, "", "");
KSYMTAB_FUNC(ib_alloc_mr, "", "");
KSYMTAB_FUNC(ib_alloc_mr_integrity, "", "");
KSYMTAB_FUNC(ib_attach_mcast, "", "");
KSYMTAB_FUNC(ib_detach_mcast, "", "");
KSYMTAB_FUNC(ib_alloc_xrcd_user, "", "");
KSYMTAB_FUNC(ib_dealloc_xrcd_user, "", "");
KSYMTAB_FUNC(ib_create_wq, "", "");
KSYMTAB_FUNC(ib_destroy_wq_user, "", "");
KSYMTAB_FUNC(ib_check_mr_status, "", "");
KSYMTAB_FUNC(ib_set_vf_link_state, "", "");
KSYMTAB_FUNC(ib_get_vf_config, "", "");
KSYMTAB_FUNC(ib_get_vf_stats, "", "");
KSYMTAB_FUNC(ib_set_vf_guid, "", "");
KSYMTAB_FUNC(ib_get_vf_guid, "", "");
KSYMTAB_FUNC(ib_map_mr_sg_pi, "", "");
KSYMTAB_FUNC(ib_map_mr_sg, "", "");
KSYMTAB_FUNC(ib_sg_to_pages, "", "");
KSYMTAB_FUNC(ib_drain_sq, "", "");
KSYMTAB_FUNC(ib_drain_rq, "", "");
KSYMTAB_FUNC(ib_drain_qp, "", "");
KSYMTAB_FUNC(rdma_alloc_netdev, "", "");
KSYMTAB_FUNC(rdma_init_netdev, "", "");
KSYMTAB_FUNC(__rdma_block_iter_start, "", "");
KSYMTAB_FUNC(__rdma_block_iter_next, "", "");
KSYMTAB_FUNC(rdma_alloc_hw_stats_struct, "", "");
KSYMTAB_FUNC(rdma_free_hw_stats_struct, "", "");
KSYMTAB_FUNC(ib_process_cq_direct, "", "");
KSYMTAB_FUNC(__ib_alloc_cq, "", "");
KSYMTAB_FUNC(__ib_alloc_cq_any, "", "");
KSYMTAB_FUNC(ib_free_cq, "", "");
KSYMTAB_FUNC(ib_cq_pool_get, "", "");
KSYMTAB_FUNC(ib_cq_pool_put, "", "");
KSYMTAB_FUNC(rdma_rw_ctx_init, "", "");
KSYMTAB_FUNC(rdma_rw_ctx_signature_init, "", "");
KSYMTAB_FUNC(rdma_rw_ctx_wrs, "", "");
KSYMTAB_FUNC(rdma_rw_ctx_post, "", "");
KSYMTAB_FUNC(rdma_rw_ctx_destroy, "", "");
KSYMTAB_FUNC(rdma_rw_ctx_destroy_signature, "", "");
KSYMTAB_FUNC(rdma_rw_mr_factor, "", "");
KSYMTAB_FUNC(ib_port_sysfs_get_ibdev_kobj, "", "");
KSYMTAB_FUNC(ib_port_register_client_groups, "", "");
KSYMTAB_FUNC(ib_port_unregister_client_groups, "", "");
KSYMTAB_DATA(ib_wq, "_gpl", "");
KSYMTAB_FUNC(rdma_dev_access_netns, "", "");
KSYMTAB_FUNC(ibdev_printk, "", "");
KSYMTAB_FUNC(ibdev_emerg, "", "");
KSYMTAB_FUNC(ibdev_alert, "", "");
KSYMTAB_FUNC(ibdev_crit, "", "");
KSYMTAB_FUNC(ibdev_err, "", "");
KSYMTAB_FUNC(ibdev_warn, "", "");
KSYMTAB_FUNC(ibdev_notice, "", "");
KSYMTAB_FUNC(ibdev_info, "", "");
KSYMTAB_FUNC(ib_device_put, "", "");
KSYMTAB_FUNC(ib_device_get_by_name, "", "");
KSYMTAB_FUNC(_ib_alloc_device, "", "");
KSYMTAB_FUNC(ib_dealloc_device, "", "");
KSYMTAB_FUNC(ib_port_immutable_read, "", "");
KSYMTAB_FUNC(ib_get_device_fw_str, "", "");
KSYMTAB_FUNC(ib_register_device, "", "");
KSYMTAB_FUNC(ib_unregister_device, "", "");
KSYMTAB_FUNC(ib_unregister_device_and_put, "", "");
KSYMTAB_FUNC(ib_unregister_driver, "", "");
KSYMTAB_FUNC(ib_unregister_device_queued, "", "");
KSYMTAB_FUNC(ib_register_client, "", "");
KSYMTAB_FUNC(ib_unregister_client, "", "");
KSYMTAB_FUNC(ib_set_client_data, "", "");
KSYMTAB_FUNC(ib_register_event_handler, "", "");
KSYMTAB_FUNC(ib_unregister_event_handler, "", "");
KSYMTAB_FUNC(ib_query_port, "", "");
KSYMTAB_FUNC(ib_device_set_netdev, "", "");
KSYMTAB_FUNC(ib_device_get_netdev, "", "");
KSYMTAB_FUNC(ib_device_get_by_netdev, "", "");
KSYMTAB_FUNC(ib_query_pkey, "", "");
KSYMTAB_FUNC(ib_modify_device, "", "");
KSYMTAB_FUNC(ib_modify_port, "", "");
KSYMTAB_FUNC(ib_find_gid, "", "");
KSYMTAB_FUNC(ib_find_pkey, "", "");
KSYMTAB_FUNC(ib_get_net_dev_by_params, "", "");
KSYMTAB_FUNC(ib_set_device_ops, "", "");
KSYMTAB_FUNC(ib_add_sub_device, "", "");
KSYMTAB_FUNC(ib_del_sub_device_and_put, "", "");
KSYMTAB_FUNC(ib_dma_virt_map_sg, "", "");
KSYMTAB_DATA(zgid, "", "");
KSYMTAB_FUNC(ib_cache_gid_type_str, "", "");
KSYMTAB_FUNC(rdma_is_zero_gid, "", "");
KSYMTAB_FUNC(ib_cache_gid_parse_type_str, "", "");
KSYMTAB_FUNC(rdma_find_gid_by_port, "", "");
KSYMTAB_FUNC(rdma_query_gid, "", "");
KSYMTAB_FUNC(rdma_read_gid_hw_context, "", "");
KSYMTAB_FUNC(rdma_find_gid, "", "");
KSYMTAB_FUNC(ib_get_cached_pkey, "", "");
KSYMTAB_FUNC(ib_get_cached_subnet_prefix, "", "");
KSYMTAB_FUNC(ib_find_cached_pkey, "", "");
KSYMTAB_FUNC(ib_find_exact_cached_pkey, "", "");
KSYMTAB_FUNC(ib_get_cached_lmc, "", "");
KSYMTAB_FUNC(ib_get_cached_port_state, "", "");
KSYMTAB_FUNC(rdma_get_gid_attr, "", "");
KSYMTAB_FUNC(rdma_query_gid_table, "", "");
KSYMTAB_FUNC(rdma_put_gid_attr, "", "");
KSYMTAB_FUNC(rdma_hold_gid_attr, "", "");
KSYMTAB_FUNC(rdma_read_gid_attr_ndev_rcu, "", "");
KSYMTAB_FUNC(rdma_read_gid_l2_fields, "", "");
KSYMTAB_FUNC(ib_dispatch_event, "", "");
KSYMTAB_FUNC(rdma_nl_chk_listeners, "", "");
KSYMTAB_FUNC(rdma_nl_register, "", "");
KSYMTAB_FUNC(rdma_nl_unregister, "", "");
KSYMTAB_FUNC(ibnl_put_msg, "", "");
KSYMTAB_FUNC(ibnl_put_attr, "", "");
KSYMTAB_FUNC(rdma_nl_unicast, "", "");
KSYMTAB_FUNC(rdma_nl_unicast_wait, "", "");
KSYMTAB_FUNC(rdma_nl_multicast, "", "");
KSYMTAB_FUNC(roce_gid_type_mask_support, "", "");
KSYMTAB_FUNC(rdma_roce_rescan_device, "", "");
KSYMTAB_FUNC(ib_mr_pool_get, "", "");
KSYMTAB_FUNC(ib_mr_pool_put, "", "");
KSYMTAB_FUNC(ib_mr_pool_init, "", "");
KSYMTAB_FUNC(ib_mr_pool_destroy, "", "");
KSYMTAB_FUNC(rdma_addr_size, "", "");
KSYMTAB_FUNC(rdma_addr_size_in6, "", "");
KSYMTAB_FUNC(rdma_addr_size_kss, "", "");
KSYMTAB_FUNC(rdma_copy_src_l2_addr, "", "");
KSYMTAB_FUNC(rdma_translate_ip, "", "");
KSYMTAB_FUNC(rdma_resolve_ip, "", "");
KSYMTAB_FUNC(rdma_addr_cancel, "", "");
KSYMTAB_FUNC(ib_sa_register_client, "", "");
KSYMTAB_FUNC(ib_sa_unregister_client, "", "");
KSYMTAB_FUNC(ib_sa_cancel_query, "", "");
KSYMTAB_FUNC(ib_init_ah_attr_from_path, "", "");
KSYMTAB_FUNC(ib_sa_unpack_path, "", "");
KSYMTAB_FUNC(ib_sa_pack_path, "", "");
KSYMTAB_FUNC(ib_sa_path_rec_get, "", "");
KSYMTAB_FUNC(ib_sa_guid_info_rec_query, "", "");
KSYMTAB_FUNC(ib_sa_join_multicast, "", "");
KSYMTAB_FUNC(ib_sa_free_multicast, "", "");
KSYMTAB_FUNC(ib_sa_get_mcmember_rec, "", "");
KSYMTAB_FUNC(ib_init_ah_from_mcmember, "", "");
KSYMTAB_FUNC(ib_response_mad, "", "");
KSYMTAB_FUNC(ib_register_mad_agent, "", "");
KSYMTAB_FUNC(ib_unregister_mad_agent, "", "");
KSYMTAB_FUNC(ib_mad_kernel_rmpp_agent, "", "");
KSYMTAB_FUNC(ib_create_send_mad, "", "");
KSYMTAB_FUNC(ib_get_mad_data_offset, "", "");
KSYMTAB_FUNC(ib_is_mad_class_rmpp, "", "");
KSYMTAB_FUNC(ib_get_rmpp_segment, "", "");
KSYMTAB_FUNC(ib_free_send_mad, "", "");
KSYMTAB_FUNC(ib_post_send_mad, "", "");
KSYMTAB_FUNC(ib_free_recv_mad, "", "");
KSYMTAB_FUNC(ib_modify_mad, "", "");
KSYMTAB_FUNC(rdma_nl_put_driver_string, "", "");
KSYMTAB_FUNC(rdma_nl_put_driver_u32, "", "");
KSYMTAB_FUNC(rdma_nl_put_driver_u32_hex, "", "");
KSYMTAB_FUNC(rdma_nl_put_driver_u64, "", "");
KSYMTAB_FUNC(rdma_nl_put_driver_u64_hex, "", "");
KSYMTAB_FUNC(rdma_nl_get_privileged_qkey, "", "");
KSYMTAB_FUNC(rdma_nl_stat_hwcounter_entry, "", "");
KSYMTAB_FUNC(rdma_link_register, "", "");
KSYMTAB_FUNC(rdma_link_unregister, "", "");
KSYMTAB_FUNC(rdma_restrack_count, "", "");
KSYMTAB_FUNC(rdma_restrack_set_name, "", "");
KSYMTAB_FUNC(rdma_restrack_parent_name, "", "");
KSYMTAB_FUNC(rdma_restrack_new, "", "");
KSYMTAB_FUNC(rdma_restrack_add, "", "");
KSYMTAB_FUNC(rdma_restrack_get, "", "");
KSYMTAB_FUNC(rdma_restrack_get_byid, "", "");
KSYMTAB_FUNC(rdma_restrack_put, "", "");
KSYMTAB_FUNC(rdma_restrack_del, "", "");
KSYMTAB_FUNC(rdma_umap_priv_init, "", "");
KSYMTAB_FUNC(rdma_user_mmap_io, "", "");
KSYMTAB_FUNC(rdma_user_mmap_entry_get_pgoff, "", "");
KSYMTAB_FUNC(rdma_user_mmap_entry_get, "", "");
KSYMTAB_FUNC(rdma_user_mmap_entry_put, "", "");
KSYMTAB_FUNC(rdma_user_mmap_entry_remove, "", "");
KSYMTAB_FUNC(rdma_user_mmap_entry_insert_range, "", "");
KSYMTAB_FUNC(rdma_user_mmap_entry_insert, "", "");
KSYMTAB_FUNC(ib_create_qp_security, "", "");
KSYMTAB_FUNC(ib_rdmacg_try_charge, "", "");
KSYMTAB_FUNC(ib_rdmacg_uncharge, "", "");

SYMBOL_CRC(ib_pack, 0x22f3cf93, "");
SYMBOL_CRC(ib_unpack, 0xa432baf6, "");
SYMBOL_CRC(ib_ud_ip4_csum, 0x6b958320, "");
SYMBOL_CRC(ib_ud_header_init, 0xb7852a05, "");
SYMBOL_CRC(ib_ud_header_pack, 0xe9e799fc, "");
SYMBOL_CRC(ib_ud_header_unpack, 0x3fc2387c, "");
SYMBOL_CRC(ib_event_msg, 0xf6ed3334, "");
SYMBOL_CRC(ib_wc_status_msg, 0xe5840ec6, "");
SYMBOL_CRC(ib_rate_to_mult, 0x5987bc79, "");
SYMBOL_CRC(mult_to_ib_rate, 0x6644920a, "");
SYMBOL_CRC(ib_rate_to_mbps, 0x6c183078, "");
SYMBOL_CRC(rdma_node_get_transport, 0xf5dedb30, "");
SYMBOL_CRC(rdma_port_get_link_layer, 0xe27fab31, "");
SYMBOL_CRC(__ib_alloc_pd, 0xf892cbb1, "");
SYMBOL_CRC(ib_dealloc_pd_user, 0xd9406694, "");
SYMBOL_CRC(rdma_copy_ah_attr, 0xd8d04850, "");
SYMBOL_CRC(rdma_replace_ah_attr, 0xe50ffedd, "");
SYMBOL_CRC(rdma_move_ah_attr, 0x0f1b4f9d, "");
SYMBOL_CRC(rdma_create_ah, 0x1d1f0f6f, "");
SYMBOL_CRC(rdma_create_user_ah, 0x07a06013, "");
SYMBOL_CRC(ib_get_rdma_header_version, 0x00cd25ea, "");
SYMBOL_CRC(ib_get_gids_from_rdma_hdr, 0x58df5b94, "");
SYMBOL_CRC(ib_init_ah_attr_from_wc, 0xd2bc5c18, "");
SYMBOL_CRC(rdma_move_grh_sgid_attr, 0x56c4b006, "");
SYMBOL_CRC(rdma_destroy_ah_attr, 0x334284d1, "");
SYMBOL_CRC(ib_create_ah_from_wc, 0x1f44615b, "");
SYMBOL_CRC(rdma_modify_ah, 0xfb180227, "");
SYMBOL_CRC(rdma_query_ah, 0x89abb762, "");
SYMBOL_CRC(rdma_destroy_ah_user, 0x5571ca29, "");
SYMBOL_CRC(ib_create_srq_user, 0x3a88b739, "");
SYMBOL_CRC(ib_modify_srq, 0xd5c8162e, "");
SYMBOL_CRC(ib_query_srq, 0x1d314a2f, "");
SYMBOL_CRC(ib_destroy_srq_user, 0xd631ebe8, "");
SYMBOL_CRC(ib_open_qp, 0x55deb8e8, "");
SYMBOL_CRC(ib_create_qp_user, 0x657b4989, "");
SYMBOL_CRC(ib_qp_usecnt_inc, 0xca9f6ca7, "");
SYMBOL_CRC(ib_qp_usecnt_dec, 0x77b4236a, "");
SYMBOL_CRC(ib_create_qp_kernel, 0x9b73dbb7, "");
SYMBOL_CRC(ib_modify_qp_is_ok, 0xab62888d, "");
SYMBOL_CRC(ib_modify_qp_with_udata, 0xce484ec7, "");
SYMBOL_CRC(ib_get_eth_speed, 0xec5b12ed, "");
SYMBOL_CRC(ib_modify_qp, 0xb8334e12, "");
SYMBOL_CRC(ib_query_qp, 0x529874e1, "");
SYMBOL_CRC(ib_close_qp, 0xba8d2fe2, "");
SYMBOL_CRC(ib_destroy_qp_user, 0x56ee144a, "");
SYMBOL_CRC(__ib_create_cq, 0x883103e1, "");
SYMBOL_CRC(rdma_set_cq_moderation, 0x74e57c29, "");
SYMBOL_CRC(ib_destroy_cq_user, 0x4943cafb, "");
SYMBOL_CRC(ib_resize_cq, 0xc3dfa509, "");
SYMBOL_CRC(ib_reg_user_mr, 0x5950a27d, "");
SYMBOL_CRC(ib_advise_mr, 0xa7bfa29d, "");
SYMBOL_CRC(ib_dereg_mr_user, 0x6275ff33, "");
SYMBOL_CRC(ib_alloc_mr, 0xe5a19930, "");
SYMBOL_CRC(ib_alloc_mr_integrity, 0x27b1ee92, "");
SYMBOL_CRC(ib_attach_mcast, 0xcc67be38, "");
SYMBOL_CRC(ib_detach_mcast, 0x3c07d578, "");
SYMBOL_CRC(ib_alloc_xrcd_user, 0xf1df9340, "");
SYMBOL_CRC(ib_dealloc_xrcd_user, 0x9914b3f3, "");
SYMBOL_CRC(ib_create_wq, 0xd063abfa, "");
SYMBOL_CRC(ib_destroy_wq_user, 0xfdbdba2d, "");
SYMBOL_CRC(ib_check_mr_status, 0x18911e06, "");
SYMBOL_CRC(ib_set_vf_link_state, 0xe999d7a1, "");
SYMBOL_CRC(ib_get_vf_config, 0x49d9ef0a, "");
SYMBOL_CRC(ib_get_vf_stats, 0x72e15043, "");
SYMBOL_CRC(ib_set_vf_guid, 0x0de6a9b1, "");
SYMBOL_CRC(ib_get_vf_guid, 0xf1bf64b6, "");
SYMBOL_CRC(ib_map_mr_sg_pi, 0x16e8c227, "");
SYMBOL_CRC(ib_map_mr_sg, 0x1a6a321f, "");
SYMBOL_CRC(ib_sg_to_pages, 0x7c8448cf, "");
SYMBOL_CRC(ib_drain_sq, 0x492478f5, "");
SYMBOL_CRC(ib_drain_rq, 0xab5f9788, "");
SYMBOL_CRC(ib_drain_qp, 0x9537c987, "");
SYMBOL_CRC(rdma_alloc_netdev, 0xeb94a2ef, "");
SYMBOL_CRC(rdma_init_netdev, 0x7929634a, "");
SYMBOL_CRC(__rdma_block_iter_start, 0x680e3cfd, "");
SYMBOL_CRC(__rdma_block_iter_next, 0x61373fd2, "");
SYMBOL_CRC(rdma_alloc_hw_stats_struct, 0x0d3354a6, "");
SYMBOL_CRC(rdma_free_hw_stats_struct, 0xc8d38664, "");
SYMBOL_CRC(ib_process_cq_direct, 0xcfccf074, "");
SYMBOL_CRC(__ib_alloc_cq, 0xcba532e6, "");
SYMBOL_CRC(__ib_alloc_cq_any, 0x21fca057, "");
SYMBOL_CRC(ib_free_cq, 0xff3b4a1a, "");
SYMBOL_CRC(ib_cq_pool_get, 0x40561293, "");
SYMBOL_CRC(ib_cq_pool_put, 0x509a2fa6, "");
SYMBOL_CRC(rdma_rw_ctx_init, 0x570a4b2b, "");
SYMBOL_CRC(rdma_rw_ctx_signature_init, 0xb7622c7f, "");
SYMBOL_CRC(rdma_rw_ctx_wrs, 0x26c427f4, "");
SYMBOL_CRC(rdma_rw_ctx_post, 0xf27d67db, "");
SYMBOL_CRC(rdma_rw_ctx_destroy, 0x51be9eb0, "");
SYMBOL_CRC(rdma_rw_ctx_destroy_signature, 0x2fce567f, "");
SYMBOL_CRC(rdma_rw_mr_factor, 0xd4a20f17, "");
SYMBOL_CRC(ib_port_sysfs_get_ibdev_kobj, 0x270bf9dd, "");
SYMBOL_CRC(ib_port_register_client_groups, 0x24a6778c, "");
SYMBOL_CRC(ib_port_unregister_client_groups, 0xee45dd29, "");
SYMBOL_CRC(ib_wq, 0xdbd019c4, "_gpl");
SYMBOL_CRC(rdma_dev_access_netns, 0xd8ad6985, "");
SYMBOL_CRC(ibdev_printk, 0x09bf727a, "");
SYMBOL_CRC(ibdev_emerg, 0x9fa538d5, "");
SYMBOL_CRC(ibdev_alert, 0xc8736f20, "");
SYMBOL_CRC(ibdev_crit, 0x509062e0, "");
SYMBOL_CRC(ibdev_err, 0x41e9485b, "");
SYMBOL_CRC(ibdev_warn, 0x5bfd5c5d, "");
SYMBOL_CRC(ibdev_notice, 0xd3a358c1, "");
SYMBOL_CRC(ibdev_info, 0xc3b45f6c, "");
SYMBOL_CRC(ib_device_put, 0x90642f25, "");
SYMBOL_CRC(ib_device_get_by_name, 0xc3514725, "");
SYMBOL_CRC(_ib_alloc_device, 0x0a9cc1d0, "");
SYMBOL_CRC(ib_dealloc_device, 0xd05db368, "");
SYMBOL_CRC(ib_port_immutable_read, 0x5f5e6d59, "");
SYMBOL_CRC(ib_get_device_fw_str, 0xfb9ec1bc, "");
SYMBOL_CRC(ib_register_device, 0xd34a2e9e, "");
SYMBOL_CRC(ib_unregister_device, 0xe55c0791, "");
SYMBOL_CRC(ib_unregister_device_and_put, 0x98432b9e, "");
SYMBOL_CRC(ib_unregister_driver, 0xd0478dc4, "");
SYMBOL_CRC(ib_unregister_device_queued, 0x385f6aeb, "");
SYMBOL_CRC(ib_register_client, 0xe2045f4c, "");
SYMBOL_CRC(ib_unregister_client, 0xbdb50258, "");
SYMBOL_CRC(ib_set_client_data, 0x98731b78, "");
SYMBOL_CRC(ib_register_event_handler, 0x3e60f4f3, "");
SYMBOL_CRC(ib_unregister_event_handler, 0x04ef03a4, "");
SYMBOL_CRC(ib_query_port, 0xc7e7dd0c, "");
SYMBOL_CRC(ib_device_set_netdev, 0x9e72d33d, "");
SYMBOL_CRC(ib_device_get_netdev, 0xc99abe02, "");
SYMBOL_CRC(ib_device_get_by_netdev, 0x41aef50f, "");
SYMBOL_CRC(ib_query_pkey, 0xf050f9a3, "");
SYMBOL_CRC(ib_modify_device, 0xef60e527, "");
SYMBOL_CRC(ib_modify_port, 0xa1c49bf0, "");
SYMBOL_CRC(ib_find_gid, 0x5b7a1e4f, "");
SYMBOL_CRC(ib_find_pkey, 0xaf83bf83, "");
SYMBOL_CRC(ib_get_net_dev_by_params, 0x1e3aab6e, "");
SYMBOL_CRC(ib_set_device_ops, 0x7e51cf12, "");
SYMBOL_CRC(ib_add_sub_device, 0xef4315f2, "");
SYMBOL_CRC(ib_del_sub_device_and_put, 0x7c2c36a5, "");
SYMBOL_CRC(ib_dma_virt_map_sg, 0xd0918217, "");
SYMBOL_CRC(zgid, 0x434c5d10, "");
SYMBOL_CRC(ib_cache_gid_type_str, 0x55bb02f3, "");
SYMBOL_CRC(rdma_is_zero_gid, 0x6f3614b6, "");
SYMBOL_CRC(ib_cache_gid_parse_type_str, 0x90e807c7, "");
SYMBOL_CRC(rdma_find_gid_by_port, 0xae50e427, "");
SYMBOL_CRC(rdma_query_gid, 0x74b438bc, "");
SYMBOL_CRC(rdma_read_gid_hw_context, 0xdedef26a, "");
SYMBOL_CRC(rdma_find_gid, 0xb5a382e0, "");
SYMBOL_CRC(ib_get_cached_pkey, 0xcccadca0, "");
SYMBOL_CRC(ib_get_cached_subnet_prefix, 0x46c62883, "");
SYMBOL_CRC(ib_find_cached_pkey, 0x53fc0cb6, "");
SYMBOL_CRC(ib_find_exact_cached_pkey, 0x25092f60, "");
SYMBOL_CRC(ib_get_cached_lmc, 0x77ecdf34, "");
SYMBOL_CRC(ib_get_cached_port_state, 0xf1f0f711, "");
SYMBOL_CRC(rdma_get_gid_attr, 0xa7ba58fc, "");
SYMBOL_CRC(rdma_query_gid_table, 0x25880fc3, "");
SYMBOL_CRC(rdma_put_gid_attr, 0xddecfb20, "");
SYMBOL_CRC(rdma_hold_gid_attr, 0x7a6c38c2, "");
SYMBOL_CRC(rdma_read_gid_attr_ndev_rcu, 0x90be50c2, "");
SYMBOL_CRC(rdma_read_gid_l2_fields, 0xbfe4251d, "");
SYMBOL_CRC(ib_dispatch_event, 0xb6688d18, "");
SYMBOL_CRC(rdma_nl_chk_listeners, 0x45fb8985, "");
SYMBOL_CRC(rdma_nl_register, 0xe0b5c48c, "");
SYMBOL_CRC(rdma_nl_unregister, 0x75a729a0, "");
SYMBOL_CRC(ibnl_put_msg, 0xf2f6ddd5, "");
SYMBOL_CRC(ibnl_put_attr, 0xae7e1f5f, "");
SYMBOL_CRC(rdma_nl_unicast, 0xeee92169, "");
SYMBOL_CRC(rdma_nl_unicast_wait, 0x3d56bfb6, "");
SYMBOL_CRC(rdma_nl_multicast, 0x5eb4668b, "");
SYMBOL_CRC(roce_gid_type_mask_support, 0x2187371f, "");
SYMBOL_CRC(rdma_roce_rescan_device, 0x68c229c4, "");
SYMBOL_CRC(ib_mr_pool_get, 0x69a5838f, "");
SYMBOL_CRC(ib_mr_pool_put, 0xa4db3827, "");
SYMBOL_CRC(ib_mr_pool_init, 0x28dd36a7, "");
SYMBOL_CRC(ib_mr_pool_destroy, 0x883144b2, "");
SYMBOL_CRC(rdma_addr_size, 0x70807834, "");
SYMBOL_CRC(rdma_addr_size_in6, 0xd6636ca6, "");
SYMBOL_CRC(rdma_addr_size_kss, 0x305e5701, "");
SYMBOL_CRC(rdma_copy_src_l2_addr, 0xf2ed2e82, "");
SYMBOL_CRC(rdma_translate_ip, 0x2e654a37, "");
SYMBOL_CRC(rdma_resolve_ip, 0x56d2e766, "");
SYMBOL_CRC(rdma_addr_cancel, 0x93ea2eba, "");
SYMBOL_CRC(ib_sa_register_client, 0x0c86f5cb, "");
SYMBOL_CRC(ib_sa_unregister_client, 0x439ce33c, "");
SYMBOL_CRC(ib_sa_cancel_query, 0xda0d50ec, "");
SYMBOL_CRC(ib_init_ah_attr_from_path, 0xc69d5f4f, "");
SYMBOL_CRC(ib_sa_unpack_path, 0xd21bb37a, "");
SYMBOL_CRC(ib_sa_pack_path, 0xb4c40040, "");
SYMBOL_CRC(ib_sa_path_rec_get, 0xc69af332, "");
SYMBOL_CRC(ib_sa_guid_info_rec_query, 0x4b2c2f9f, "");
SYMBOL_CRC(ib_sa_join_multicast, 0x3b8aa29d, "");
SYMBOL_CRC(ib_sa_free_multicast, 0x4e90435c, "");
SYMBOL_CRC(ib_sa_get_mcmember_rec, 0x702638a5, "");
SYMBOL_CRC(ib_init_ah_from_mcmember, 0x07f8d7b0, "");
SYMBOL_CRC(ib_response_mad, 0x4e155af0, "");
SYMBOL_CRC(ib_register_mad_agent, 0xc82640e5, "");
SYMBOL_CRC(ib_unregister_mad_agent, 0xf45ef56b, "");
SYMBOL_CRC(ib_mad_kernel_rmpp_agent, 0x6ec0795e, "");
SYMBOL_CRC(ib_create_send_mad, 0xaef06f34, "");
SYMBOL_CRC(ib_get_mad_data_offset, 0x787ccc4c, "");
SYMBOL_CRC(ib_is_mad_class_rmpp, 0x613b1e2e, "");
SYMBOL_CRC(ib_get_rmpp_segment, 0xb56bcdec, "");
SYMBOL_CRC(ib_free_send_mad, 0xa8ac7686, "");
SYMBOL_CRC(ib_post_send_mad, 0x22b5f3da, "");
SYMBOL_CRC(ib_free_recv_mad, 0xc13e35bd, "");
SYMBOL_CRC(ib_modify_mad, 0x5f87786d, "");
SYMBOL_CRC(rdma_nl_put_driver_string, 0xd2c0b0e5, "");
SYMBOL_CRC(rdma_nl_put_driver_u32, 0x0d3af1b6, "");
SYMBOL_CRC(rdma_nl_put_driver_u32_hex, 0xd7533c03, "");
SYMBOL_CRC(rdma_nl_put_driver_u64, 0xf08e1206, "");
SYMBOL_CRC(rdma_nl_put_driver_u64_hex, 0x43536519, "");
SYMBOL_CRC(rdma_nl_get_privileged_qkey, 0x992de6f8, "");
SYMBOL_CRC(rdma_nl_stat_hwcounter_entry, 0xf2261b79, "");
SYMBOL_CRC(rdma_link_register, 0xea154c10, "");
SYMBOL_CRC(rdma_link_unregister, 0x9b061de3, "");
SYMBOL_CRC(rdma_restrack_count, 0xb57133e6, "");
SYMBOL_CRC(rdma_restrack_set_name, 0x98494b9a, "");
SYMBOL_CRC(rdma_restrack_parent_name, 0x1d5f8de8, "");
SYMBOL_CRC(rdma_restrack_new, 0x68da7dbb, "");
SYMBOL_CRC(rdma_restrack_add, 0x50723f3a, "");
SYMBOL_CRC(rdma_restrack_get, 0x9c4b36dc, "");
SYMBOL_CRC(rdma_restrack_get_byid, 0x814a1ef3, "");
SYMBOL_CRC(rdma_restrack_put, 0x5a6a5dc2, "");
SYMBOL_CRC(rdma_restrack_del, 0x233ac80a, "");
SYMBOL_CRC(rdma_umap_priv_init, 0xab16a20f, "");
SYMBOL_CRC(rdma_user_mmap_io, 0x8eec2eca, "");
SYMBOL_CRC(rdma_user_mmap_entry_get_pgoff, 0x23f075fe, "");
SYMBOL_CRC(rdma_user_mmap_entry_get, 0x2048e7d5, "");
SYMBOL_CRC(rdma_user_mmap_entry_put, 0x4a128507, "");
SYMBOL_CRC(rdma_user_mmap_entry_remove, 0x8863b011, "");
SYMBOL_CRC(rdma_user_mmap_entry_insert_range, 0xd6dc33ca, "");
SYMBOL_CRC(rdma_user_mmap_entry_insert, 0x2f79d88b, "");
SYMBOL_CRC(ib_create_qp_security, 0x6fd4a946, "");
SYMBOL_CRC(ib_rdmacg_try_charge, 0x63b61a80, "");
SYMBOL_CRC(ib_rdmacg_uncharge, 0x275ba0d2, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6775c90f, "skb_push" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x4fe1eddf, "unregister_netevent_notifier" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x203b9e03, "netlink_kernel_release" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x86512576, "unregister_pernet_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x70a09e5e, "__ethtool_get_link_ksettings" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x131a6146, "xa_clear_mark" },
	{ 0x95a052b1, "bpf_trace_run1" },
	{ 0xc04e9955, "device_del" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x990ad19e, "netdev_get_xmit_slave" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xece784c2, "rb_first" },
	{ 0xf2315624, "__neigh_event_send" },
	{ 0xcbc8f40, "dev_printk_emit" },
	{ 0x59f073a6, "kobject_create_and_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xf7e417c1, "netdev_has_upper_dev_all_rcu" },
	{ 0xa0ebc08, "__xa_cmpxchg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x745a981, "xa_erase" },
	{ 0x96ca2c9d, "netdev_walk_all_upper_dev_rcu" },
	{ 0xd8bb697, "bpf_trace_run3" },
	{ 0x92104429, "__put_net" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe726acf2, "_dev_notice" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x63db0b8c, "neigh_destroy" },
	{ 0xf24e5dec, "kobject_del" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x871ed204, "dma_map_sgtable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xc0d5aef2, "netdev_master_upper_dev_get_rcu" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x5b3e282f, "xa_store" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0x79cf879a, "dev_get_by_name" },
	{ 0xb0558395, "netlink_ns_capable" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf04a650c, "dst_release" },
	{ 0xaedb2a25, "kobject_uevent" },
	{ 0x74d5bad2, "rdmacg_uncharge" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x2f2e91b2, "security_ib_alloc_security" },
	{ 0x18888d00, "downgrade_write" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf738d1be, "register_blocking_lsm_notifier" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xecdc3e49, "vlan_dev_vlan_id" },
	{ 0x4836cf95, "dma_unmap_sg_attrs" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x55c28c9f, "ipv6_chk_addr" },
	{ 0x9da0ba4, "xa_set_mark" },
	{ 0x754d539c, "strlen" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x349cba85, "strchr" },
	{ 0x50be748d, "security_ib_free_security" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x99a033d8, "netlink_has_listeners" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x53b954a2, "up_read" },
	{ 0xa47c4028, "register_pernet_device" },
	{ 0xc57554b6, "get_net_ns_by_fd" },
	{ 0x4a958e37, "class_register" },
	{ 0xe1a8d7c9, "net_rwsem" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7ab30f45, "kobject_put" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x753e172b, "__netlink_dump_start" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x1757935, "rdmacg_register_device" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x561b68c, "rdmacg_try_charge" },
	{ 0x2deeab32, "netdev_walk_all_lower_dev_rcu" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xb6671de9, "bpf_trace_run4" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xd6625cfb, "skb_put" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x4761f17c, "register_netevent_notifier" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0x20f84273, "ip6_dst_hoplimit" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0x1b6865c, "xa_get_mark" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0xb32fdc18, "xas_find_marked" },
	{ 0xca9360b5, "rb_next" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0xd7c9f34b, "__kmalloc_node_noprof" },
	{ 0x204033c7, "dma_unmap_page_attrs" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x71c34976, "__ip_dev_find" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x11124797, "sysfs_remove_groups" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0xaa3e7736, "__put_task_struct" },
	{ 0x1b777357, "rdmacg_unregister_device" },
	{ 0x23967b1, "xas_find" },
	{ 0x7be0f43, "kobject_init" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0xf46501ad, "__dynamic_ibdev_dbg" },
	{ 0x855b9b10, "sysfs_create_groups" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x805bc397, "remap_pfn_range" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x122c56b0, "in6_dev_finish_destroy" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xe68a26a4, "__netlink_kernel_create" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0x32cd197c, "ip_route_output_flow" },
	{ 0x3131271a, "get_device" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x88822d38, "unregister_blocking_lsm_notifier" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xae865e4e, "netlink_ack" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0xbc431e3c, "netlink_broadcast_filtered" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c2b6301, "device_rename" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0xee99c7ef, "dev_driver_string" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x28beaeee, "dma_map_page_attrs" },
	{ 0x1b6287cd, "alloc_netdev_mqs" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x489f6e0b, "rdma_dim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xca844bc7, "put_device" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xce38b843, "net_ns_type_operations" },
	{ 0xe58090ca, "security_ib_endport_manage_subnet" },
	{ 0xa916b694, "strnlen" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xac9fb508, "netlink_capable" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0x3f89071b, "security_ib_pkey_access" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x2f1d1ade, "__task_pid_nr_ns" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0xae5494dc, "vlan_dev_real_dev" },
	{ 0x98378a1d, "cc_mkdec" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x57bc19d2, "down_write" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xe5590ebd, "init_net" },
	{ 0xe6217930, "kobject_add" },
	{ 0xce807a25, "up_write" },
	{ 0x396a1105, "ipv6_stub" },
	{ 0x87400f82, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x934ea33f, "device_add" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xe8255b35, "netlink_unicast" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x19e2cc40, "dev_get_by_index" },
	{ 0xb04a43ad, "__xa_alloc_cyclic" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

