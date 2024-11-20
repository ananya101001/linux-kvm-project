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

KSYMTAB_FUNC(nfs41_sequence_done, "_gpl", "");
KSYMTAB_FUNC(nfs4_sequence_done, "_gpl", "");
KSYMTAB_FUNC(nfs4_setup_sequence, "_gpl", "");
KSYMTAB_FUNC(nfs4_set_rw_stateid, "_gpl", "");
KSYMTAB_FUNC(nfs4_test_session_trunk, "_gpl", "");
KSYMTAB_FUNC(nfs4_proc_getdeviceinfo, "_gpl", "");
KSYMTAB_DATA(nfs41_maxgetdevinfo_overhead, "_gpl", "");
KSYMTAB_FUNC(nfs4_schedule_lease_recovery, "_gpl", "");
KSYMTAB_FUNC(nfs4_schedule_migration_recovery, "_gpl", "");
KSYMTAB_FUNC(nfs4_schedule_lease_moved_recovery, "_gpl", "");
KSYMTAB_FUNC(nfs4_schedule_stateid_recovery, "_gpl", "");
KSYMTAB_FUNC(nfs4_schedule_session_recovery, "_gpl", "");
KSYMTAB_FUNC(nfs_remove_bad_delegation, "_gpl", "");
KSYMTAB_FUNC(nfs_map_string_to_numeric, "_gpl", "");
KSYMTAB_FUNC(nfs4_find_or_create_ds_client, "_gpl", "");
KSYMTAB_FUNC(nfs4_set_ds_client, "_gpl", "");
KSYMTAB_FUNC(nfs4_init_ds_session, "_gpl", "");
KSYMTAB_DATA(__tracepoint_nfs4_pnfs_read, "_gpl", "");
KSYMTAB_FUNC(__traceiter_nfs4_pnfs_read, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_nfs4_pnfs_read, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_nfs4_pnfs_read, "_gpl", "");
KSYMTAB_DATA(__tracepoint_nfs4_pnfs_write, "_gpl", "");
KSYMTAB_FUNC(__traceiter_nfs4_pnfs_write, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_nfs4_pnfs_write, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_nfs4_pnfs_write, "_gpl", "");
KSYMTAB_DATA(__tracepoint_nfs4_pnfs_commit_ds, "_gpl", "");
KSYMTAB_FUNC(__traceiter_nfs4_pnfs_commit_ds, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_nfs4_pnfs_commit_ds, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_nfs4_pnfs_commit_ds, "_gpl", "");
KSYMTAB_DATA(__tracepoint_pnfs_mds_fallback_pg_init_read, "_gpl", "");
KSYMTAB_FUNC(__traceiter_pnfs_mds_fallback_pg_init_read, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_pnfs_mds_fallback_pg_init_read, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_pnfs_mds_fallback_pg_init_read, "_gpl", "");
KSYMTAB_DATA(__tracepoint_pnfs_mds_fallback_pg_init_write, "_gpl", "");
KSYMTAB_FUNC(__traceiter_pnfs_mds_fallback_pg_init_write, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_pnfs_mds_fallback_pg_init_write, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_pnfs_mds_fallback_pg_init_write, "_gpl", "");
KSYMTAB_DATA(__tracepoint_pnfs_mds_fallback_pg_get_mirror_count, "_gpl", "");
KSYMTAB_FUNC(__traceiter_pnfs_mds_fallback_pg_get_mirror_count, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_pnfs_mds_fallback_pg_get_mirror_count, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_pnfs_mds_fallback_pg_get_mirror_count, "_gpl", "");
KSYMTAB_DATA(__tracepoint_pnfs_mds_fallback_read_done, "_gpl", "");
KSYMTAB_FUNC(__traceiter_pnfs_mds_fallback_read_done, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_pnfs_mds_fallback_read_done, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_pnfs_mds_fallback_read_done, "_gpl", "");
KSYMTAB_DATA(__tracepoint_pnfs_mds_fallback_write_done, "_gpl", "");
KSYMTAB_FUNC(__traceiter_pnfs_mds_fallback_write_done, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_pnfs_mds_fallback_write_done, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_pnfs_mds_fallback_write_done, "_gpl", "");
KSYMTAB_DATA(__tracepoint_pnfs_mds_fallback_read_pagelist, "_gpl", "");
KSYMTAB_FUNC(__traceiter_pnfs_mds_fallback_read_pagelist, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_pnfs_mds_fallback_read_pagelist, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_pnfs_mds_fallback_read_pagelist, "_gpl", "");
KSYMTAB_DATA(__tracepoint_pnfs_mds_fallback_write_pagelist, "_gpl", "");
KSYMTAB_FUNC(__traceiter_pnfs_mds_fallback_write_pagelist, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_pnfs_mds_fallback_write_pagelist, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_pnfs_mds_fallback_write_pagelist, "_gpl", "");
KSYMTAB_DATA(__tracepoint_ff_layout_read_error, "_gpl", "");
KSYMTAB_FUNC(__traceiter_ff_layout_read_error, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_ff_layout_read_error, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_ff_layout_read_error, "_gpl", "");
KSYMTAB_DATA(__tracepoint_ff_layout_write_error, "_gpl", "");
KSYMTAB_FUNC(__traceiter_ff_layout_write_error, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_ff_layout_write_error, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_ff_layout_write_error, "_gpl", "");
KSYMTAB_DATA(__tracepoint_ff_layout_commit_error, "_gpl", "");
KSYMTAB_FUNC(__traceiter_ff_layout_commit_error, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_ff_layout_commit_error, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_ff_layout_commit_error, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bl_pr_key_reg, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bl_pr_key_reg, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bl_pr_key_reg, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bl_pr_key_reg, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bl_pr_key_reg_err, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bl_pr_key_reg_err, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bl_pr_key_reg_err, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bl_pr_key_reg_err, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bl_pr_key_unreg, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bl_pr_key_unreg, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bl_pr_key_unreg, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bl_pr_key_unreg, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bl_pr_key_unreg_err, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bl_pr_key_unreg_err, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bl_pr_key_unreg_err, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bl_pr_key_unreg_err, "_gpl", "");
KSYMTAB_DATA(__tracepoint_fl_getdevinfo, "_gpl", "");
KSYMTAB_FUNC(__traceiter_fl_getdevinfo, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_fl_getdevinfo, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_fl_getdevinfo, "_gpl", "");
KSYMTAB_FUNC(pnfs_register_layoutdriver, "_gpl", "");
KSYMTAB_FUNC(pnfs_unregister_layoutdriver, "_gpl", "");
KSYMTAB_FUNC(pnfs_put_lseg, "_gpl", "");
KSYMTAB_FUNC(pnfs_destroy_layout, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_layout_insert_lseg, "_gpl", "");
KSYMTAB_FUNC(pnfs_update_layout, "_gpl", "");
KSYMTAB_FUNC(pnfs_error_mark_layout_for_return, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_pg_check_layout, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_pg_init_read, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_pg_init_write, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_pg_cleanup, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_pg_test, "_gpl", "");
KSYMTAB_FUNC(pnfs_write_done_resend_to_mds, "_gpl", "");
KSYMTAB_FUNC(pnfs_ld_write_done, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_pg_writepages, "_gpl", "");
KSYMTAB_FUNC(pnfs_read_done_resend_to_mds, "_gpl", "");
KSYMTAB_FUNC(pnfs_ld_read_done, "_gpl", "");
KSYMTAB_FUNC(pnfs_read_resend_pnfs, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_pg_readpages, "_gpl", "");
KSYMTAB_FUNC(pnfs_set_lo_fail, "_gpl", "");
KSYMTAB_FUNC(pnfs_set_layoutcommit, "_gpl", "");
KSYMTAB_FUNC(pnfs_layoutcommit_inode, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_sync, "_gpl", "");
KSYMTAB_FUNC(pnfs_report_layoutstat, "_gpl", "");
KSYMTAB_DATA(layoutstats_timer, "_gpl", "");
KSYMTAB_FUNC(nfs4_print_deviceid, "_gpl", "");
KSYMTAB_FUNC(nfs4_find_get_deviceid, "_gpl", "");
KSYMTAB_FUNC(nfs4_delete_deviceid, "_gpl", "");
KSYMTAB_FUNC(nfs4_init_deviceid_node, "_gpl", "");
KSYMTAB_FUNC(nfs4_put_deviceid_node, "_gpl", "");
KSYMTAB_FUNC(nfs4_mark_deviceid_available, "_gpl", "");
KSYMTAB_FUNC(nfs4_mark_deviceid_unavailable, "_gpl", "");
KSYMTAB_FUNC(nfs4_test_deviceid_unavailable, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_rw_release, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_prepare_to_resend_writes, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_write_commit_done, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_commit_release, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_clear_request_commit, "_gpl", "");
KSYMTAB_FUNC(pnfs_alloc_commit_array, "_gpl", "");
KSYMTAB_FUNC(pnfs_free_commit_array, "_gpl", "");
KSYMTAB_FUNC(pnfs_add_commit_array, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_ds_cinfo_release_lseg, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_ds_cinfo_destroy, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_scan_commit_lists, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_recover_commit_reqs, "_gpl", "");
KSYMTAB_FUNC(pnfs_generic_commit_pagelist, "_gpl", "");
KSYMTAB_FUNC(nfs4_pnfs_ds_put, "_gpl", "");
KSYMTAB_FUNC(nfs4_pnfs_ds_add, "_gpl", "");
KSYMTAB_FUNC(nfs4_pnfs_ds_connect, "_gpl", "");
KSYMTAB_FUNC(nfs4_decode_mp_ds_addr, "_gpl", "");
KSYMTAB_FUNC(pnfs_layout_mark_request_commit, "_gpl", "");
KSYMTAB_FUNC(pnfs_nfs_generic_sync, "_gpl", "");
KSYMTAB_FUNC(nfs42_proc_layouterror, "_gpl", "");

SYMBOL_CRC(nfs41_sequence_done, 0x0ea4a052, "_gpl");
SYMBOL_CRC(nfs4_sequence_done, 0xd9ddd4be, "_gpl");
SYMBOL_CRC(nfs4_setup_sequence, 0x7a9ffb1b, "_gpl");
SYMBOL_CRC(nfs4_set_rw_stateid, 0x5fcc8024, "_gpl");
SYMBOL_CRC(nfs4_test_session_trunk, 0xb1ca20d2, "_gpl");
SYMBOL_CRC(nfs4_proc_getdeviceinfo, 0xc410121d, "_gpl");
SYMBOL_CRC(nfs41_maxgetdevinfo_overhead, 0xf7801360, "_gpl");
SYMBOL_CRC(nfs4_schedule_lease_recovery, 0x1d5453de, "_gpl");
SYMBOL_CRC(nfs4_schedule_migration_recovery, 0x51f5983a, "_gpl");
SYMBOL_CRC(nfs4_schedule_lease_moved_recovery, 0xf9fd99f0, "_gpl");
SYMBOL_CRC(nfs4_schedule_stateid_recovery, 0x8d33047a, "_gpl");
SYMBOL_CRC(nfs4_schedule_session_recovery, 0x927ee238, "_gpl");
SYMBOL_CRC(nfs_remove_bad_delegation, 0x7985245c, "_gpl");
SYMBOL_CRC(nfs_map_string_to_numeric, 0x6085edbd, "_gpl");
SYMBOL_CRC(nfs4_find_or_create_ds_client, 0xf8e105d6, "_gpl");
SYMBOL_CRC(nfs4_set_ds_client, 0x7d64d097, "_gpl");
SYMBOL_CRC(nfs4_init_ds_session, 0x1a280f18, "_gpl");
SYMBOL_CRC(__tracepoint_nfs4_pnfs_read, 0xa2ec3069, "_gpl");
SYMBOL_CRC(__traceiter_nfs4_pnfs_read, 0x75c8c786, "_gpl");
SYMBOL_CRC(__SCK__tp_func_nfs4_pnfs_read, 0x3fa39790, "_gpl");
SYMBOL_CRC(__SCT__tp_func_nfs4_pnfs_read, 0x63826d35, "_gpl");
SYMBOL_CRC(__tracepoint_nfs4_pnfs_write, 0x0b311077, "_gpl");
SYMBOL_CRC(__traceiter_nfs4_pnfs_write, 0x84e8b80a, "_gpl");
SYMBOL_CRC(__SCK__tp_func_nfs4_pnfs_write, 0xcfcd1568, "_gpl");
SYMBOL_CRC(__SCT__tp_func_nfs4_pnfs_write, 0xadeca730, "_gpl");
SYMBOL_CRC(__tracepoint_nfs4_pnfs_commit_ds, 0xc65eb6a5, "_gpl");
SYMBOL_CRC(__traceiter_nfs4_pnfs_commit_ds, 0xd12b8d32, "_gpl");
SYMBOL_CRC(__SCK__tp_func_nfs4_pnfs_commit_ds, 0xecef9b9f, "_gpl");
SYMBOL_CRC(__SCT__tp_func_nfs4_pnfs_commit_ds, 0x2b16e909, "_gpl");
SYMBOL_CRC(__tracepoint_pnfs_mds_fallback_pg_init_read, 0xee0cf4b3, "_gpl");
SYMBOL_CRC(__traceiter_pnfs_mds_fallback_pg_init_read, 0x449d623f, "_gpl");
SYMBOL_CRC(__SCK__tp_func_pnfs_mds_fallback_pg_init_read, 0xa9c3c50b, "_gpl");
SYMBOL_CRC(__SCT__tp_func_pnfs_mds_fallback_pg_init_read, 0x6a5eb444, "_gpl");
SYMBOL_CRC(__tracepoint_pnfs_mds_fallback_pg_init_write, 0x6d7bcb79, "_gpl");
SYMBOL_CRC(__traceiter_pnfs_mds_fallback_pg_init_write, 0x1d05f263, "_gpl");
SYMBOL_CRC(__SCK__tp_func_pnfs_mds_fallback_pg_init_write, 0xa8863ff6, "_gpl");
SYMBOL_CRC(__SCT__tp_func_pnfs_mds_fallback_pg_init_write, 0xdeb5edce, "_gpl");
SYMBOL_CRC(__tracepoint_pnfs_mds_fallback_pg_get_mirror_count, 0x3acac9c0, "_gpl");
SYMBOL_CRC(__traceiter_pnfs_mds_fallback_pg_get_mirror_count, 0x71afe606, "_gpl");
SYMBOL_CRC(__SCK__tp_func_pnfs_mds_fallback_pg_get_mirror_count, 0x8bf00381, "_gpl");
SYMBOL_CRC(__SCT__tp_func_pnfs_mds_fallback_pg_get_mirror_count, 0x96c4643f, "_gpl");
SYMBOL_CRC(__tracepoint_pnfs_mds_fallback_read_done, 0x7ff6b1ff, "_gpl");
SYMBOL_CRC(__traceiter_pnfs_mds_fallback_read_done, 0x627ca242, "_gpl");
SYMBOL_CRC(__SCK__tp_func_pnfs_mds_fallback_read_done, 0x9f765163, "_gpl");
SYMBOL_CRC(__SCT__tp_func_pnfs_mds_fallback_read_done, 0xc361c3c5, "_gpl");
SYMBOL_CRC(__tracepoint_pnfs_mds_fallback_write_done, 0x9bce7c3e, "_gpl");
SYMBOL_CRC(__traceiter_pnfs_mds_fallback_write_done, 0x34edaf13, "_gpl");
SYMBOL_CRC(__SCK__tp_func_pnfs_mds_fallback_write_done, 0x629723b1, "_gpl");
SYMBOL_CRC(__SCT__tp_func_pnfs_mds_fallback_write_done, 0x930a94fd, "_gpl");
SYMBOL_CRC(__tracepoint_pnfs_mds_fallback_read_pagelist, 0x35186432, "_gpl");
SYMBOL_CRC(__traceiter_pnfs_mds_fallback_read_pagelist, 0xd480a48e, "_gpl");
SYMBOL_CRC(__SCK__tp_func_pnfs_mds_fallback_read_pagelist, 0xf0e590bd, "_gpl");
SYMBOL_CRC(__SCT__tp_func_pnfs_mds_fallback_read_pagelist, 0x6a925097, "_gpl");
SYMBOL_CRC(__tracepoint_pnfs_mds_fallback_write_pagelist, 0xd26672d8, "_gpl");
SYMBOL_CRC(__traceiter_pnfs_mds_fallback_write_pagelist, 0x45bb1080, "_gpl");
SYMBOL_CRC(__SCK__tp_func_pnfs_mds_fallback_write_pagelist, 0xafa4119d, "_gpl");
SYMBOL_CRC(__SCT__tp_func_pnfs_mds_fallback_write_pagelist, 0x18e75751, "_gpl");
SYMBOL_CRC(__tracepoint_ff_layout_read_error, 0x07aa16b2, "_gpl");
SYMBOL_CRC(__traceiter_ff_layout_read_error, 0xc4b9c7ae, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ff_layout_read_error, 0xc18c7e2d, "_gpl");
SYMBOL_CRC(__SCT__tp_func_ff_layout_read_error, 0x7e42bd3f, "_gpl");
SYMBOL_CRC(__tracepoint_ff_layout_write_error, 0x54b01413, "_gpl");
SYMBOL_CRC(__traceiter_ff_layout_write_error, 0x6ea3c07f, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ff_layout_write_error, 0x34c6bcae, "_gpl");
SYMBOL_CRC(__SCT__tp_func_ff_layout_write_error, 0xf32fa2b7, "_gpl");
SYMBOL_CRC(__tracepoint_ff_layout_commit_error, 0x8e0502ed, "_gpl");
SYMBOL_CRC(__traceiter_ff_layout_commit_error, 0x8a9d1df0, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ff_layout_commit_error, 0x3bb5bb74, "_gpl");
SYMBOL_CRC(__SCT__tp_func_ff_layout_commit_error, 0xcc21ce5c, "_gpl");
SYMBOL_CRC(__tracepoint_bl_pr_key_reg, 0xf7b8b0b8, "_gpl");
SYMBOL_CRC(__traceiter_bl_pr_key_reg, 0x5c973050, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bl_pr_key_reg, 0x6a68e63d, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bl_pr_key_reg, 0xf0a5b199, "_gpl");
SYMBOL_CRC(__tracepoint_bl_pr_key_reg_err, 0x3571f3db, "_gpl");
SYMBOL_CRC(__traceiter_bl_pr_key_reg_err, 0x4ff5139f, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bl_pr_key_reg_err, 0x8841cd36, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bl_pr_key_reg_err, 0x87ed16c4, "_gpl");
SYMBOL_CRC(__tracepoint_bl_pr_key_unreg, 0xcc3546fc, "_gpl");
SYMBOL_CRC(__traceiter_bl_pr_key_unreg, 0xd2489822, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bl_pr_key_unreg, 0x08c943e3, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bl_pr_key_unreg, 0xa37b1177, "_gpl");
SYMBOL_CRC(__tracepoint_bl_pr_key_unreg_err, 0xaf683cf1, "_gpl");
SYMBOL_CRC(__traceiter_bl_pr_key_unreg_err, 0xe52193d1, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bl_pr_key_unreg_err, 0x85d911cb, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bl_pr_key_unreg_err, 0xe1bc35e8, "_gpl");
SYMBOL_CRC(__tracepoint_fl_getdevinfo, 0x7a48592d, "_gpl");
SYMBOL_CRC(__traceiter_fl_getdevinfo, 0xdbc6d212, "_gpl");
SYMBOL_CRC(__SCK__tp_func_fl_getdevinfo, 0xe7980fa8, "_gpl");
SYMBOL_CRC(__SCT__tp_func_fl_getdevinfo, 0x6f27cded, "_gpl");
SYMBOL_CRC(pnfs_register_layoutdriver, 0xf9a59acd, "_gpl");
SYMBOL_CRC(pnfs_unregister_layoutdriver, 0xb717e92e, "_gpl");
SYMBOL_CRC(pnfs_put_lseg, 0x925328d4, "_gpl");
SYMBOL_CRC(pnfs_destroy_layout, 0x8cc78e41, "_gpl");
SYMBOL_CRC(pnfs_generic_layout_insert_lseg, 0xe714696c, "_gpl");
SYMBOL_CRC(pnfs_update_layout, 0x5daabec7, "_gpl");
SYMBOL_CRC(pnfs_error_mark_layout_for_return, 0x5033ae60, "_gpl");
SYMBOL_CRC(pnfs_generic_pg_check_layout, 0x7ee8eb04, "_gpl");
SYMBOL_CRC(pnfs_generic_pg_init_read, 0xc260fc58, "_gpl");
SYMBOL_CRC(pnfs_generic_pg_init_write, 0x532ed5f3, "_gpl");
SYMBOL_CRC(pnfs_generic_pg_cleanup, 0x88fbd157, "_gpl");
SYMBOL_CRC(pnfs_generic_pg_test, 0x30e929e0, "_gpl");
SYMBOL_CRC(pnfs_write_done_resend_to_mds, 0xbe19d377, "_gpl");
SYMBOL_CRC(pnfs_ld_write_done, 0xea488e25, "_gpl");
SYMBOL_CRC(pnfs_generic_pg_writepages, 0x508a3264, "_gpl");
SYMBOL_CRC(pnfs_read_done_resend_to_mds, 0x8c31d9b6, "_gpl");
SYMBOL_CRC(pnfs_ld_read_done, 0x063d6a50, "_gpl");
SYMBOL_CRC(pnfs_read_resend_pnfs, 0x8eb65ab2, "_gpl");
SYMBOL_CRC(pnfs_generic_pg_readpages, 0xd3f42fba, "_gpl");
SYMBOL_CRC(pnfs_set_lo_fail, 0xc0711314, "_gpl");
SYMBOL_CRC(pnfs_set_layoutcommit, 0x3dbd7e88, "_gpl");
SYMBOL_CRC(pnfs_layoutcommit_inode, 0xa4c1f8d5, "_gpl");
SYMBOL_CRC(pnfs_generic_sync, 0xd17a67c6, "_gpl");
SYMBOL_CRC(pnfs_report_layoutstat, 0x9e357e26, "_gpl");
SYMBOL_CRC(layoutstats_timer, 0x054bef45, "_gpl");
SYMBOL_CRC(nfs4_print_deviceid, 0xed15fb41, "_gpl");
SYMBOL_CRC(nfs4_find_get_deviceid, 0x4d8b308c, "_gpl");
SYMBOL_CRC(nfs4_delete_deviceid, 0x6d58bda3, "_gpl");
SYMBOL_CRC(nfs4_init_deviceid_node, 0xdd35ee56, "_gpl");
SYMBOL_CRC(nfs4_put_deviceid_node, 0x7b7e1c16, "_gpl");
SYMBOL_CRC(nfs4_mark_deviceid_available, 0x14084057, "_gpl");
SYMBOL_CRC(nfs4_mark_deviceid_unavailable, 0x088daff1, "_gpl");
SYMBOL_CRC(nfs4_test_deviceid_unavailable, 0x1a35a6c0, "_gpl");
SYMBOL_CRC(pnfs_generic_rw_release, 0x69d3558d, "_gpl");
SYMBOL_CRC(pnfs_generic_prepare_to_resend_writes, 0xad56d88d, "_gpl");
SYMBOL_CRC(pnfs_generic_write_commit_done, 0x70f27f56, "_gpl");
SYMBOL_CRC(pnfs_generic_commit_release, 0xf999267e, "_gpl");
SYMBOL_CRC(pnfs_generic_clear_request_commit, 0x8644747b, "_gpl");
SYMBOL_CRC(pnfs_alloc_commit_array, 0x1c5d5ae4, "_gpl");
SYMBOL_CRC(pnfs_free_commit_array, 0x2c9a357e, "_gpl");
SYMBOL_CRC(pnfs_add_commit_array, 0xfefd2822, "_gpl");
SYMBOL_CRC(pnfs_generic_ds_cinfo_release_lseg, 0x7fdee272, "_gpl");
SYMBOL_CRC(pnfs_generic_ds_cinfo_destroy, 0x66df9c71, "_gpl");
SYMBOL_CRC(pnfs_generic_scan_commit_lists, 0xe78fec0d, "_gpl");
SYMBOL_CRC(pnfs_generic_recover_commit_reqs, 0xc7bab85a, "_gpl");
SYMBOL_CRC(pnfs_generic_commit_pagelist, 0x69e85a1a, "_gpl");
SYMBOL_CRC(nfs4_pnfs_ds_put, 0x1789b0b9, "_gpl");
SYMBOL_CRC(nfs4_pnfs_ds_add, 0x0ebdbd0d, "_gpl");
SYMBOL_CRC(nfs4_pnfs_ds_connect, 0xbee7414f, "_gpl");
SYMBOL_CRC(nfs4_decode_mp_ds_addr, 0x8f78c1a0, "_gpl");
SYMBOL_CRC(pnfs_layout_mark_request_commit, 0xb2609d55, "_gpl");
SYMBOL_CRC(pnfs_nfs_generic_sync, 0x61feee09, "_gpl");
SYMBOL_CRC(nfs42_proc_layouterror, 0x05c7ac08, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x38dd5b75, "from_kgid" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xfecff0e6, "nfs_write_inode" },
	{ 0xa79bbf28, "nfs_request_remove_commit_list" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x45f00a47, "rpc_wake_up_first" },
	{ 0x30cfe693, "alloc_nfs_open_context" },
	{ 0xbebd8e1a, "list_lru_add_obj" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x77b073e9, "vfs_parse_fs_param" },
	{ 0x715ab126, "nfs_path" },
	{ 0x5322ae4a, "rpc_sleep_on_priority_timeout" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc9d11e, "nfs_create_rpc_client" },
	{ 0xb5f4750d, "__put_devmap_managed_folio_refs" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6398160d, "register_nfs_version" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4da7dba6, "rpc_sleep_on_timeout" },
	{ 0x23951b16, "list_lru_count_one" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x9084e9e0, "svc_destroy" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0xa0a98052, "rpc_call_start" },
	{ 0xabedbcac, "xprt_setup_backchannel" },
	{ 0x95a052b1, "bpf_trace_run1" },
	{ 0xa98a1786, "svc_create" },
	{ 0x68c1b044, "rpc_clnt_iterate_for_each_xprt" },
	{ 0xd896aea4, "nfs_file_set_open_context" },
	{ 0x9c66d431, "rpc_init_priority_wait_queue" },
	{ 0x3f2690f2, "nfs_check_flags" },
	{ 0xb2e8dc61, "rpc_call_sync" },
	{ 0x1678131f, "from_kuid" },
	{ 0x8a0f510d, "rpc_put_task_async" },
	{ 0x1e1c8e13, "rpc_prepare_reply_pages" },
	{ 0x741f340e, "rpc_queue_upcall" },
	{ 0xc5569b3b, "nfs_free_server" },
	{ 0x4418a257, "fc_mount" },
	{ 0x3bd45f5c, "register_sysctl_sz" },
	{ 0x8b170ae1, "nfs_setattr" },
	{ 0xfb578fc5, "memset" },
	{ 0x2dd1f344, "xdr_terminate_string" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7c6c7dc, "nfs4_fs_type" },
	{ 0x9a4e7200, "key_revoke" },
	{ 0xa05ca625, "nfs_fattr_init" },
	{ 0x5fb794e3, "rpc_delay" },
	{ 0xce7ad09, "nfs_flock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x71fa09e0, "__list_lru_init" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6f6ce90e, "svc_generic_init_request" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0xcddf4549, "key_validate" },
	{ 0x98b0ece8, "nfs_init_timeout_values" },
	{ 0x812c3db8, "rpc_exit" },
	{ 0xa3951d2b, "make_kgid" },
	{ 0xece784c2, "rb_first" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0xfcbdecd, "rpc_remove_pipe_dir_object" },
	{ 0x9313547c, "nfs_may_open" },
	{ 0x9102cff1, "from_kgid_munged" },
	{ 0xfc619abd, "_nfs_display_fhandle" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0x94833571, "nfs_server_copy_userdata" },
	{ 0x832e8f0b, "nfs_alloc_fattr" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x24d2973b, "xdr_reserve_space" },
	{ 0x140f3e4c, "rpcauth_lookupcred" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc03f042e, "kthread_create_on_node" },
	{ 0xabc640f3, "list_lru_isolate" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xdfd2ac06, "nfs_rmdir" },
	{ 0xd8bb697, "bpf_trace_run3" },
	{ 0x85075f40, "override_creds" },
	{ 0x4cb9e001, "recover_lost_locks" },
	{ 0x94c62eb0, "trace_print_flags_seq" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x72000b4f, "nfs_filemap_write_and_wait_range" },
	{ 0xa7a54fb4, "rpc_mkpipe_dentry" },
	{ 0x1568ced8, "alloc_file_pseudo" },
	{ 0x27076adf, "rpc_mkpipe_data" },
	{ 0xbbb5c10, "rpc_add_pipe_dir_object" },
	{ 0x2041dcad, "igrab" },
	{ 0xb35799ca, "unregister_nfs_version" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xf86dfc99, "nfs_async_iocounter_wait" },
	{ 0xd79e9b45, "nfs_file_read" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0xb9eaf49b, "nfs_alloc_fattr_with_label" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcf2787c1, "filemap_fdatawait_range" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0x87c5b00d, "nfs_commitdata_alloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb44b2bf1, "nfs_setattr_update_inode" },
	{ 0x159b281d, "nfs_instantiate" },
	{ 0x7919d80, "init_user_ns" },
	{ 0x2ded6856, "rpc_uaddr2sockaddr" },
	{ 0xc22480ae, "user_read" },
	{ 0x50093ad7, "rpc_restart_call" },
	{ 0x26155ef6, "request_key_tag" },
	{ 0xbd83ccaa, "xprt_force_disconnect" },
	{ 0x8ead800c, "user_free_preparse" },
	{ 0x83d3d30, "rpc_clnt_xprt_switch_remove_xprt" },
	{ 0xea6d20c6, "svc_xprt_destroy_all" },
	{ 0xe1e78f05, "generic_key_instantiate" },
	{ 0xf04e6d86, "inc_nlink" },
	{ 0x44e9a829, "match_token" },
	{ 0xc12b2aaf, "nfs_link" },
	{ 0x94c1bfc3, "__folio_put" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x138407a8, "list_lru_walk_one" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0x991ff31c, "rpcauth_stringify_acceptor" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7c9adcc2, "dput" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x101529e2, "rpc_init_wait_queue" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1abd38ed, "xdr_stream_move_subsegment" },
	{ 0x3dd61637, "put_rpccred" },
	{ 0x294c6a2, "nfs_callback_nr_threads" },
	{ 0xcaa6d505, "nfs_post_op_update_inode_force_wcc" },
	{ 0x696e53db, "nfs_pgheader_init" },
	{ 0xa5468a82, "put_nfs_open_context" },
	{ 0xaef26f44, "nfs_show_path" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xe71d806, "nfs_show_devname" },
	{ 0x5d5bd066, "nfs_permission" },
	{ 0x5d59f1d5, "nfs_initiate_commit" },
	{ 0xf9775b66, "truncate_inode_pages_range" },
	{ 0x8e9da085, "__put_user_ns" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x8811420, "cred_fscmp" },
	{ 0xcc4d0ea3, "rpc_unlink" },
	{ 0xda1943bb, "nfs_sync_inode" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xee718b8e, "nfs_file_write" },
	{ 0xaafd4acc, "max_session_cb_slots" },
	{ 0x70dc4e23, "node_data" },
	{ 0xbb88ad03, "nfs_probe_server" },
	{ 0x3efd2589, "nfs_setsecurity" },
	{ 0x7810aefc, "rpc_clnt_xprt_switch_has_addr" },
	{ 0x6d3f7d2d, "rpc_clnt_test_and_add_xprt" },
	{ 0x40e3cd2b, "file_ra_state_init" },
	{ 0xe20796a7, "nfs_force_lookup_revalidate" },
	{ 0x60d2864b, "nfs_file_llseek" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x4282b706, "rpc_clnt_add_xprt" },
	{ 0x708eec1, "dget_parent" },
	{ 0xc0b8681e, "from_kuid_munged" },
	{ 0xd74e5067, "prepare_kernel_cred" },
	{ 0xd1acb41b, "nfs_alloc_server" },
	{ 0xa42b8356, "rpc_call_async" },
	{ 0xe856875d, "security_dentry_init_security" },
	{ 0x91315a8, "filemap_write_and_wait_range" },
	{ 0xfee4d172, "list_lru_del_obj" },
	{ 0x814c9bfa, "nfs_server_insert_lists" },
	{ 0x9ec0cf1, "nfs_dreq_bytes_left" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x754d539c, "strlen" },
	{ 0xb5e86b0f, "nfs_free_client" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x7424b2b7, "rpc_init_pipe_dir_object" },
	{ 0x1b0be24d, "bpf_trace_run7" },
	{ 0xb7634cc2, "nfs_refresh_inode" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x91d1fe52, "max_session_slots" },
	{ 0x349cba85, "strchr" },
	{ 0x8e162a8, "nfs_access_set_mask" },
	{ 0x9dec0ec5, "nfs_init_server_rpcclient" },
	{ 0x1d576a31, "__mark_inode_dirty" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0xa7b95552, "rpc_set_connect_timeout" },
	{ 0x9cb1b7e3, "rpcauth_create" },
	{ 0x3dd7d95c, "xdr_stream_pos" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x802e103e, "key_set_timeout" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xefa414fb, "nfs_delay_retrans" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x10962bc2, "nfs_auth_info_match" },
	{ 0x53b954a2, "up_read" },
	{ 0x39e05ac3, "nfs_idmap_cache_timeout" },
	{ 0xd5dd23a8, "svc_xprt_create" },
	{ 0x6c720170, "nfs42_ssc_register" },
	{ 0x57f6a5f0, "rpc_wait_for_completion_task" },
	{ 0xff0e49af, "drop_nlink" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2423bc66, "rpc_num_bc_slots" },
	{ 0xcbf95da2, "nfs_alloc_inode" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x5b2a5b3, "rpc_destroy_wait_queue" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xd835ae0e, "security_inode_listsecurity" },
	{ 0xc3f8bebc, "nfs_fhget" },
	{ 0xc572bb37, "nfs_symlink" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x954291bf, "locks_copy_lock" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x51892d61, "nfs_callback_set_tcpport" },
	{ 0xc8a57349, "nfs_unlink" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x996da528, "nfs_set_verifier" },
	{ 0x3eca0c01, "proc_dointvec_minmax" },
	{ 0x5da1deb1, "rpc_put_task" },
	{ 0x21955cf8, "nfs4_stat_to_errno" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xdfb5ce53, "svc_generic_rpcbind_set" },
	{ 0xe1b85209, "nfs_clone_server" },
	{ 0xa88b42c0, "nfs_access_add_cache" },
	{ 0x136bf523, "filemap_fdatawrite" },
	{ 0x9a876425, "nfs_show_stats" },
	{ 0x22440bcd, "nfs_server_remove_lists" },
	{ 0x8cfdcc81, "shrinker_alloc" },
	{ 0x77463689, "nfs42_ssc_unregister" },
	{ 0xdbb121a1, "generic_listxattr" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x2322dfd4, "revert_creds" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x40e13749, "nfs_writeback_update_inode" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x533082d3, "clear_inode" },
	{ 0xa203b1f5, "inode_to_bdi" },
	{ 0xb6671de9, "bpf_trace_run4" },
	{ 0x233a0a79, "user_destroy" },
	{ 0x20978fb9, "idr_find" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x813ba6ec, "user_revoke" },
	{ 0xd989d478, "d_exact_alias" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd9868d44, "nfs_alloc_client" },
	{ 0xdae9b5d7, "nfs4_disable_idmapping" },
	{ 0xe6415376, "nfs_mark_client_ready" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5e89bb5e, "rpc_clnt_probe_trunked_xprts" },
	{ 0x55547d3a, "nfs_pageio_reset_read_mds" },
	{ 0x46408636, "xdr_write_pages" },
	{ 0xcdc39c9e, "security_ismaclabel" },
	{ 0xd9ec1342, "rpc_shutdown_client" },
	{ 0xd498af92, "svc_bind" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x54dd973d, "nfs_d_prune_case_insensitive_aliases" },
	{ 0x40739385, "nfs_wait_bit_killable" },
	{ 0xe52d4529, "nfs_free_inode" },
	{ 0xbc1b116f, "nfs_access_zap_cache" },
	{ 0x849b99b8, "nfs_sb_deactive" },
	{ 0x4d22ebd2, "nfs_wb_all" },
	{ 0x228e445f, "__break_lease" },
	{ 0x10fa022c, "nfs_pageio_init_write" },
	{ 0x97fb344e, "svc_recv" },
	{ 0x3f49d3fd, "nfs_drop_inode" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xb8bd5570, "xdr_inline_decode" },
	{ 0x20f40ba0, "nfs_pageio_init_read" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0x6440f7e7, "nfs_wait_client_init_complete" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x3fe493c3, "nfs_init_commit" },
	{ 0xe3b4831, "nfs_commitdata_release" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xf8cd6528, "bpf_trace_run6" },
	{ 0x96a55fda, "list_lru_destroy" },
	{ 0xca9360b5, "rb_next" },
	{ 0x1ba56f3b, "rpc_net_ns" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0xdd59cde7, "nfs_mknod" },
	{ 0x14fed9e4, "nfs_inode_attach_open_context" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x39ad95a, "nfs4_label_alloc" },
	{ 0xdc7eecbb, "rpc_localaddr" },
	{ 0xbc773afc, "rpc_wake_up" },
	{ 0xdd691402, "xprt_find_transport_ident" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x1946b34a, "nfs_access_get_cached" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x22f403c6, "nfs_lock" },
	{ 0x8399268, "unregister_key_type" },
	{ 0xab1da635, "nfs_client_init_is_complete" },
	{ 0x454b0d77, "nfs_file_splice_read" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xdc6b79be, "d_splice_alias" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x1e424d61, "user_preparse" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8b910be2, "errseq_sample" },
	{ 0x427fecb, "ihold" },
	{ 0xbdd4d976, "truncate_pagecache_range" },
	{ 0x4b33ed30, "rpc_peeraddr" },
	{ 0x37a0cba, "kfree" },
	{ 0x59e36e1, "invalidate_inode_pages2_range" },
	{ 0xd3eb404a, "nfs_post_op_update_inode" },
	{ 0x4a03ef6, "svc_exit_thread" },
	{ 0x91bf2302, "iput" },
	{ 0xdf116bca, "xdr_set_pagelen" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xdd183c3f, "nfs_pgio_header_free" },
	{ 0xcdfdcb5f, "nfs_request_add_commit_list_locked" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x44f4d3b, "logfc" },
	{ 0x127339f, "nfs_pgio_header_alloc" },
	{ 0x5c2ff471, "iter_file_splice_write" },
	{ 0xea5f29ae, "rpc_pton" },
	{ 0x45fea411, "nfs_sb_active" },
	{ 0x2104316c, "mod_node_page_state" },
	{ 0x549c0738, "rpc_ntop" },
	{ 0xfa2747c7, "rpc_wake_up_queued_task" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x3a14cf51, "xdr_stream_zero" },
	{ 0x1e119a79, "rpcauth_get_pseudoflavor" },
	{ 0x13704927, "rpc_restart_call_prepare" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb2dad364, "_copy_from_pages" },
	{ 0xe893d918, "__module_get" },
	{ 0x3c4ffe87, "rpc_task_release_transport" },
	{ 0x53812ccf, "xdr_page_pos" },
	{ 0x3891c465, "nfs_file_release" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x958b78a3, "nfs_pgio_current_mirror" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x879b4023, "key_instantiate_and_link" },
	{ 0x5e651d9f, "trace_print_hex_seq" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x6fb04652, "xdr_read_pages" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x94602332, "register_key_type" },
	{ 0xbd77f84f, "rpc_sleep_on" },
	{ 0xa4eaed62, "rpc_run_task" },
	{ 0x67296cdd, "nfs_pageio_resend" },
	{ 0x2e9cff23, "keyring_alloc" },
	{ 0x1c0fc10, "vfs_setpos" },
	{ 0xa30abbea, "nfs_create" },
	{ 0xaeb957ed, "complete_request_key" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdaff2388, "__put_cred" },
	{ 0x4445077e, "nfs_update_delegated_mtime" },
	{ 0xe68441fc, "nfs_statfs" },
	{ 0x16d30c75, "wake_up_process" },
	{ 0xacb0f234, "shrinker_free" },
	{ 0x9ae47436, "_find_last_bit" },
	{ 0xac0021d1, "splice_file_range" },
	{ 0xce8c4b3b, "rpc_max_bc_payload" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0x584b8482, "nfs_inc_attr_generation_counter" },
	{ 0x90a5530f, "nfsiod_workqueue" },
	{ 0x80389268, "rpc_clnt_xprt_switch_add_xprt" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb812bb66, "locks_lock_inode_wait" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x3a637e72, "nfs_mkdir" },
	{ 0x906d5835, "nfs_revalidate_inode" },
	{ 0xf90161e1, "inode_newsize_ok" },
	{ 0xc4816c9, "nfs_file_mmap" },
	{ 0xce5a2c52, "nfs_get_lock_context" },
	{ 0x9e5e7c8d, "d_drop" },
	{ 0x122c3a7e, "_printk" },
	{ 0x49c61338, "nfs_set_cache_invalid" },
	{ 0xa39767df, "rpc_release_client" },
	{ 0xef5f199b, "rpc_clnt_manage_trunked_xprts" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x817cb039, "xdr_enter_page" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb3914f63, "rpc_clnt_setup_test_and_add_xprt" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1693c4c3, "unregister_sysctl_table" },
	{ 0x13a5f0af, "nfs_generic_pgio" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0x462622ba, "truncate_inode_pages_final" },
	{ 0xa166849, "generic_setlease" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xdf3746e3, "xprt_destroy_backchannel" },
	{ 0x4c25d2fa, "rpc_switch_client_transport" },
	{ 0xa916b694, "strnlen" },
	{ 0xc27b0612, "nfs_scan_commit_list" },
	{ 0x509166d3, "xdr_stream_decode_string_dup" },
	{ 0x3cacb9d, "nfs_commit_inode" },
	{ 0x2c3368b2, "shrinker_register" },
	{ 0x82593c59, "locks_init_lock" },
	{ 0xa8e9e1ae, "send_implementation_id" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x895e92f7, "rpc_destroy_pipe_data" },
	{ 0xb0fb8a3a, "nfs_get_client" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x9f984513, "strrchr" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x16e297c3, "bit_wait" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0x8da1cf7b, "init_task" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xa892e25b, "nfs_atomic_open" },
	{ 0x92920dae, "rpc_pipe_generic_upcall" },
	{ 0x82498658, "nfs_file_fsync" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xebaa17ae, "mntput" },
	{ 0x79918f9f, "nfs_put_lock_context" },
	{ 0xa14aa561, "nfs_rename" },
	{ 0x7413dd21, "nfs_lookup" },
	{ 0x769f6e64, "errseq_check" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xb92a249b, "nfs_sysfs_link_rpc_client" },
	{ 0x6fb06c1e, "nfs_put_client" },
	{ 0x6361e926, "nfs_show_options" },
	{ 0x5859543, "dns_query" },
	{ 0x26884ff7, "nfs_alloc_fhandle" },
	{ 0x24d0565a, "key_put" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x3f1d35cd, "mount_subtree" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x8342cd17, "get_nfs_open_context" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x98f30a47, "nfs_clear_verifier_delegated" },
	{ 0x50b262dd, "nfs_sysfs_add_server" },
	{ 0x37712435, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xc997699b, "rpc_machine_cred" },
	{ 0x42f2c81f, "nfs4_client_id_uniquifier" },
	{ 0x3d98f6ca, "nfs_do_submount" },
	{ 0x992ae5d3, "vfs_dup_fs_context" },
	{ 0xce807a25, "up_write" },
	{ 0xb7c0f443, "sort" },
	{ 0x93d45df6, "request_key_with_auxdata" },
	{ 0x76866d39, "rpc_clone_client_set_auth" },
	{ 0xcffa467a, "rpc_clone_client" },
	{ 0xecb252b, "svc_set_num_threads" },
	{ 0x4e3567f7, "match_int" },
	{ 0xca52555d, "nfs_client_init_status" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x556301f7, "svc_rpcb_cleanup" },
	{ 0xa07a37f0, "memchr" },
	{ 0xc1d90881, "user_describe" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2df0e974, "put_fs_context" },
	{ 0x267d790c, "nfs_retry_commit" },
	{ 0xb4b7f1e9, "nfs4_dentry_operations" },
	{ 0x2903ae47, "__module_put_and_kthread_exit" },
	{ 0x442bf7, "rpc_peeraddr2str" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xb8cb7db6, "nfs_client_for_each_server" },
	{ 0x5bb66d91, "nfs_clear_inode" },
	{ 0xa73e0c03, "rpc_sleep_on_priority" },
	{ 0xb4a1f6d8, "nfs_invalidate_atime" },
	{ 0x2ee80b5f, "bpf_trace_run5" },
	{ 0x954f099c, "idr_preload" },
	{ 0xa94764c8, "nfs_umount_begin" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x76ac6a54, "nfs_getattr" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x728e2f71, "nfs_pageio_reset_write_mds" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x25ea8f7a, "nfs_generic_pg_test" },
	{ 0x5a921311, "strncmp" },
	{ 0x29442b84, "xdr_stream_subsegment" },
	{ 0x19114b6d, "nfs_zap_acl_cache" },
	{ 0x82d79b51, "sysctl_vfs_cache_pressure" },
	{ 0x559da56e, "nfs_fscache_open_file" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nfs,sunrpc,dns_resolver");

