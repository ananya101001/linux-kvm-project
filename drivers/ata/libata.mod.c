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

KSYMTAB_FUNC(ata_link_next, "_gpl", "");
KSYMTAB_FUNC(ata_dev_next, "_gpl", "");
KSYMTAB_FUNC(atapi_cmd_type, "_gpl", "");
KSYMTAB_FUNC(ata_pack_xfermask, "_gpl", "");
KSYMTAB_FUNC(ata_xfer_mask2mode, "_gpl", "");
KSYMTAB_FUNC(ata_xfer_mode2mask, "_gpl", "");
KSYMTAB_FUNC(ata_xfer_mode2shift, "_gpl", "");
KSYMTAB_FUNC(ata_mode_string, "_gpl", "");
KSYMTAB_FUNC(ata_dev_classify, "_gpl", "");
KSYMTAB_FUNC(ata_id_string, "_gpl", "");
KSYMTAB_FUNC(ata_id_c_string, "_gpl", "");
KSYMTAB_FUNC(ata_id_xfermask, "_gpl", "");
KSYMTAB_FUNC(ata_pio_need_iordy, "_gpl", "");
KSYMTAB_FUNC(ata_do_dev_read_id, "_gpl", "");
KSYMTAB_FUNC(ata_cable_40wire, "_gpl", "");
KSYMTAB_FUNC(ata_cable_80wire, "_gpl", "");
KSYMTAB_FUNC(ata_cable_unknown, "_gpl", "");
KSYMTAB_FUNC(ata_cable_ignore, "_gpl", "");
KSYMTAB_FUNC(ata_cable_sata, "_gpl", "");
KSYMTAB_FUNC(ata_dev_pair, "_gpl", "");
KSYMTAB_FUNC(ata_do_set_mode, "_gpl", "");
KSYMTAB_FUNC(ata_wait_after_reset, "_gpl", "");
KSYMTAB_FUNC(ata_std_prereset, "_gpl", "");
KSYMTAB_FUNC(ata_std_postreset, "_gpl", "");
KSYMTAB_FUNC(ata_dev_set_feature, "_gpl", "");
KSYMTAB_FUNC(ata_std_qc_defer, "_gpl", "");
KSYMTAB_FUNC(ata_qc_complete, "_gpl", "");
KSYMTAB_FUNC(ata_qc_get_active, "_gpl", "");
KSYMTAB_FUNC(ata_link_online, "_gpl", "");
KSYMTAB_FUNC(ata_link_offline, "_gpl", "");
KSYMTAB_FUNC(ata_sas_port_suspend, "_gpl", "");
KSYMTAB_FUNC(ata_sas_port_resume, "_gpl", "");
KSYMTAB_FUNC(ata_host_suspend, "_gpl", "");
KSYMTAB_FUNC(ata_host_resume, "_gpl", "");
KSYMTAB_FUNC(ata_port_alloc, "_gpl", "");
KSYMTAB_FUNC(ata_port_free, "_gpl", "");
KSYMTAB_FUNC(ata_host_put, "_gpl", "");
KSYMTAB_FUNC(ata_host_alloc, "_gpl", "");
KSYMTAB_FUNC(ata_host_alloc_pinfo, "_gpl", "");
KSYMTAB_FUNC(ata_host_start, "_gpl", "");
KSYMTAB_FUNC(ata_host_init, "_gpl", "");
KSYMTAB_FUNC(ata_port_probe, "_gpl", "");
KSYMTAB_FUNC(ata_host_register, "_gpl", "");
KSYMTAB_FUNC(ata_host_activate, "_gpl", "");
KSYMTAB_FUNC(ata_host_detach, "_gpl", "");
KSYMTAB_FUNC(ata_pci_remove_one, "_gpl", "");
KSYMTAB_FUNC(ata_pci_shutdown_one, "_gpl", "");
KSYMTAB_FUNC(pci_test_config_bits, "_gpl", "");
KSYMTAB_FUNC(ata_pci_device_do_suspend, "_gpl", "");
KSYMTAB_FUNC(ata_pci_device_do_resume, "_gpl", "");
KSYMTAB_FUNC(ata_pci_device_suspend, "_gpl", "");
KSYMTAB_FUNC(ata_pci_device_resume, "_gpl", "");
KSYMTAB_FUNC(ata_platform_remove_one, "_gpl", "");
KSYMTAB_FUNC(ata_ratelimit, "_gpl", "");
KSYMTAB_FUNC(ata_msleep, "_gpl", "");
KSYMTAB_FUNC(ata_wait_register, "_gpl", "");
KSYMTAB_DATA(ata_dummy_port_ops, "_gpl", "");
KSYMTAB_DATA(ata_dummy_port_info, "_gpl", "");
KSYMTAB_FUNC(ata_print_version, "", "");
KSYMTAB_DATA(__tracepoint_ata_tf_load, "_gpl", "");
KSYMTAB_FUNC(__traceiter_ata_tf_load, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_ata_tf_load, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_ata_tf_load, "_gpl", "");
KSYMTAB_DATA(__tracepoint_ata_exec_command, "_gpl", "");
KSYMTAB_FUNC(__traceiter_ata_exec_command, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_ata_exec_command, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_ata_exec_command, "_gpl", "");
KSYMTAB_DATA(__tracepoint_ata_bmdma_setup, "_gpl", "");
KSYMTAB_FUNC(__traceiter_ata_bmdma_setup, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_ata_bmdma_setup, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_ata_bmdma_setup, "_gpl", "");
KSYMTAB_DATA(__tracepoint_ata_bmdma_start, "_gpl", "");
KSYMTAB_FUNC(__traceiter_ata_bmdma_start, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_ata_bmdma_start, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_ata_bmdma_start, "_gpl", "");
KSYMTAB_DATA(__tracepoint_ata_bmdma_status, "_gpl", "");
KSYMTAB_FUNC(__traceiter_ata_bmdma_status, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_ata_bmdma_status, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_ata_bmdma_status, "_gpl", "");
KSYMTAB_DATA(dev_attr_unload_heads, "_gpl", "");
KSYMTAB_DATA(ata_common_sdev_groups, "_gpl", "");
KSYMTAB_FUNC(ata_std_bios_param, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_unlock_native_capacity, "_gpl", "");
KSYMTAB_FUNC(ata_sas_scsi_ioctl, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_ioctl, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_dma_need_drain, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_slave_alloc, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_device_configure, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_slave_destroy, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_queuecmd, "_gpl", "");
KSYMTAB_FUNC(__ata_ehi_push_desc, "_gpl", "");
KSYMTAB_FUNC(ata_ehi_push_desc, "_gpl", "");
KSYMTAB_FUNC(ata_ehi_clear_desc, "_gpl", "");
KSYMTAB_FUNC(ata_port_desc, "_gpl", "");
KSYMTAB_FUNC(ata_port_pbar_desc, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_cmd_error_handler, "", "");
KSYMTAB_FUNC(ata_scsi_port_error_handler, "_gpl", "");
KSYMTAB_FUNC(ata_port_wait_eh, "_gpl", "");
KSYMTAB_FUNC(ata_std_sched_eh, "_gpl", "");
KSYMTAB_FUNC(ata_std_end_eh, "", "");
KSYMTAB_FUNC(ata_port_schedule_eh, "_gpl", "");
KSYMTAB_FUNC(ata_link_abort, "_gpl", "");
KSYMTAB_FUNC(ata_port_abort, "_gpl", "");
KSYMTAB_FUNC(ata_port_freeze, "_gpl", "");
KSYMTAB_FUNC(ata_eh_freeze_port, "_gpl", "");
KSYMTAB_FUNC(ata_dev_disable, "_gpl", "");
KSYMTAB_FUNC(ata_get_cmd_name, "_gpl", "");
KSYMTAB_FUNC(ata_std_error_handler, "_gpl", "");
KSYMTAB_FUNC(ata_tport_delete, "_gpl", "");
KSYMTAB_FUNC(ata_tport_add, "_gpl", "");
KSYMTAB_FUNC(ata_port_classify, "_gpl", "");
KSYMTAB_DATA(sata_deb_timing_normal, "_gpl", "");
KSYMTAB_DATA(sata_deb_timing_hotplug, "_gpl", "");
KSYMTAB_DATA(sata_deb_timing_long, "_gpl", "");
KSYMTAB_FUNC(sata_scr_valid, "_gpl", "");
KSYMTAB_FUNC(sata_scr_read, "_gpl", "");
KSYMTAB_FUNC(sata_scr_write, "_gpl", "");
KSYMTAB_FUNC(sata_scr_write_flush, "_gpl", "");
KSYMTAB_FUNC(ata_tf_to_fis, "_gpl", "");
KSYMTAB_FUNC(ata_tf_from_fis, "_gpl", "");
KSYMTAB_FUNC(sata_link_debounce, "_gpl", "");
KSYMTAB_FUNC(sata_link_resume, "_gpl", "");
KSYMTAB_FUNC(sata_link_scr_lpm, "_gpl", "");
KSYMTAB_FUNC(sata_set_spd, "_gpl", "");
KSYMTAB_FUNC(sata_link_hardreset, "_gpl", "");
KSYMTAB_FUNC(sata_std_hardreset, "_gpl", "");
KSYMTAB_FUNC(ata_qc_complete_multiple, "_gpl", "");
KSYMTAB_FUNC(ata_slave_link_init, "_gpl", "");
KSYMTAB_FUNC(sata_lpm_ignore_phy_events, "_gpl", "");
KSYMTAB_DATA(dev_attr_link_power_management_policy, "_gpl", "");
KSYMTAB_FUNC(ata_ncq_prio_supported, "_gpl", "");
KSYMTAB_DATA(dev_attr_ncq_prio_supported, "_gpl", "");
KSYMTAB_FUNC(ata_ncq_prio_enabled, "_gpl", "");
KSYMTAB_FUNC(ata_ncq_prio_enable, "_gpl", "");
KSYMTAB_DATA(dev_attr_ncq_prio_enable, "_gpl", "");
KSYMTAB_DATA(ata_ncq_sdev_groups, "_gpl", "");
KSYMTAB_DATA(dev_attr_em_message, "_gpl", "");
KSYMTAB_DATA(dev_attr_em_message_type, "_gpl", "");
KSYMTAB_DATA(dev_attr_sw_activity, "_gpl", "");
KSYMTAB_FUNC(ata_change_queue_depth, "_gpl", "");
KSYMTAB_FUNC(ata_scsi_change_queue_depth, "_gpl", "");
KSYMTAB_FUNC(ata_sas_device_configure, "_gpl", "");
KSYMTAB_FUNC(ata_sas_queuecmd, "_gpl", "");
KSYMTAB_FUNC(sata_async_notification, "_gpl", "");
KSYMTAB_FUNC(ata_eh_analyze_ncq_error, "_gpl", "");
KSYMTAB_DATA(sata_port_ops, "_gpl", "");
KSYMTAB_DATA(ata_sff_port_ops, "_gpl", "");
KSYMTAB_FUNC(ata_sff_check_status, "_gpl", "");
KSYMTAB_FUNC(ata_sff_pause, "_gpl", "");
KSYMTAB_FUNC(ata_sff_dma_pause, "_gpl", "");
KSYMTAB_FUNC(ata_sff_wait_ready, "_gpl", "");
KSYMTAB_FUNC(ata_sff_dev_select, "_gpl", "");
KSYMTAB_FUNC(ata_sff_irq_on, "_gpl", "");
KSYMTAB_FUNC(ata_sff_tf_load, "_gpl", "");
KSYMTAB_FUNC(ata_sff_tf_read, "_gpl", "");
KSYMTAB_FUNC(ata_sff_exec_command, "_gpl", "");
KSYMTAB_FUNC(ata_sff_data_xfer, "_gpl", "");
KSYMTAB_FUNC(ata_sff_data_xfer32, "_gpl", "");
KSYMTAB_FUNC(ata_sff_hsm_move, "_gpl", "");
KSYMTAB_FUNC(ata_sff_queue_work, "_gpl", "");
KSYMTAB_FUNC(ata_sff_queue_delayed_work, "_gpl", "");
KSYMTAB_FUNC(ata_sff_queue_pio_task, "_gpl", "");
KSYMTAB_FUNC(ata_sff_qc_issue, "_gpl", "");
KSYMTAB_FUNC(ata_sff_qc_fill_rtf, "_gpl", "");
KSYMTAB_FUNC(ata_sff_port_intr, "_gpl", "");
KSYMTAB_FUNC(ata_sff_interrupt, "_gpl", "");
KSYMTAB_FUNC(ata_sff_lost_interrupt, "_gpl", "");
KSYMTAB_FUNC(ata_sff_freeze, "_gpl", "");
KSYMTAB_FUNC(ata_sff_thaw, "_gpl", "");
KSYMTAB_FUNC(ata_sff_prereset, "_gpl", "");
KSYMTAB_FUNC(ata_sff_dev_classify, "_gpl", "");
KSYMTAB_FUNC(ata_sff_wait_after_reset, "_gpl", "");
KSYMTAB_FUNC(ata_sff_softreset, "_gpl", "");
KSYMTAB_FUNC(sata_sff_hardreset, "_gpl", "");
KSYMTAB_FUNC(ata_sff_postreset, "_gpl", "");
KSYMTAB_FUNC(ata_sff_drain_fifo, "_gpl", "");
KSYMTAB_FUNC(ata_sff_error_handler, "_gpl", "");
KSYMTAB_FUNC(ata_sff_std_ports, "_gpl", "");
KSYMTAB_FUNC(ata_pci_sff_init_host, "_gpl", "");
KSYMTAB_FUNC(ata_pci_sff_prepare_host, "_gpl", "");
KSYMTAB_FUNC(ata_pci_sff_activate_host, "_gpl", "");
KSYMTAB_FUNC(ata_pci_sff_init_one, "_gpl", "");
KSYMTAB_DATA(ata_bmdma_port_ops, "_gpl", "");
KSYMTAB_DATA(ata_bmdma32_port_ops, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_qc_prep, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_dumb_qc_prep, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_qc_issue, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_port_intr, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_interrupt, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_error_handler, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_post_internal_cmd, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_irq_clear, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_setup, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_start, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_stop, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_status, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_port_start, "_gpl", "");
KSYMTAB_FUNC(ata_bmdma_port_start32, "_gpl", "");
KSYMTAB_FUNC(ata_pci_bmdma_clear_simplex, "_gpl", "");
KSYMTAB_FUNC(ata_pci_bmdma_init, "_gpl", "");
KSYMTAB_FUNC(ata_pci_bmdma_prepare_host, "_gpl", "");
KSYMTAB_FUNC(ata_pci_bmdma_init_one, "_gpl", "");

SYMBOL_CRC(ata_link_next, 0x5e1e87b2, "_gpl");
SYMBOL_CRC(ata_dev_next, 0x5602f237, "_gpl");
SYMBOL_CRC(atapi_cmd_type, 0x8462cb62, "_gpl");
SYMBOL_CRC(ata_pack_xfermask, 0x3a15013b, "_gpl");
SYMBOL_CRC(ata_xfer_mask2mode, 0xc2368ea5, "_gpl");
SYMBOL_CRC(ata_xfer_mode2mask, 0xe77d5ef3, "_gpl");
SYMBOL_CRC(ata_xfer_mode2shift, 0x58db1176, "_gpl");
SYMBOL_CRC(ata_mode_string, 0x6a9e90af, "_gpl");
SYMBOL_CRC(ata_dev_classify, 0x5bcc0df7, "_gpl");
SYMBOL_CRC(ata_id_string, 0xccd86806, "_gpl");
SYMBOL_CRC(ata_id_c_string, 0xafddd545, "_gpl");
SYMBOL_CRC(ata_id_xfermask, 0x030cbca2, "_gpl");
SYMBOL_CRC(ata_pio_need_iordy, 0xf44ff2bd, "_gpl");
SYMBOL_CRC(ata_do_dev_read_id, 0xed9c6908, "_gpl");
SYMBOL_CRC(ata_cable_40wire, 0xfd1e4c78, "_gpl");
SYMBOL_CRC(ata_cable_80wire, 0xf447fe4e, "_gpl");
SYMBOL_CRC(ata_cable_unknown, 0x845225a3, "_gpl");
SYMBOL_CRC(ata_cable_ignore, 0xc10b5a97, "_gpl");
SYMBOL_CRC(ata_cable_sata, 0x3d075691, "_gpl");
SYMBOL_CRC(ata_dev_pair, 0x4c71d1ac, "_gpl");
SYMBOL_CRC(ata_do_set_mode, 0x5258d373, "_gpl");
SYMBOL_CRC(ata_wait_after_reset, 0xb0bdcd2c, "_gpl");
SYMBOL_CRC(ata_std_prereset, 0x218feebf, "_gpl");
SYMBOL_CRC(ata_std_postreset, 0x27a216b6, "_gpl");
SYMBOL_CRC(ata_dev_set_feature, 0xf077104f, "_gpl");
SYMBOL_CRC(ata_std_qc_defer, 0x2f2ed291, "_gpl");
SYMBOL_CRC(ata_qc_complete, 0x1f8ae973, "_gpl");
SYMBOL_CRC(ata_qc_get_active, 0xe89a1f93, "_gpl");
SYMBOL_CRC(ata_link_online, 0x9ea8bdef, "_gpl");
SYMBOL_CRC(ata_link_offline, 0xd8c70479, "_gpl");
SYMBOL_CRC(ata_sas_port_suspend, 0x1865aabf, "_gpl");
SYMBOL_CRC(ata_sas_port_resume, 0x111eb5c7, "_gpl");
SYMBOL_CRC(ata_host_suspend, 0xac960313, "_gpl");
SYMBOL_CRC(ata_host_resume, 0xa5696cf2, "_gpl");
SYMBOL_CRC(ata_port_alloc, 0xcf2dcb52, "_gpl");
SYMBOL_CRC(ata_port_free, 0xfb869467, "_gpl");
SYMBOL_CRC(ata_host_put, 0x845b4f94, "_gpl");
SYMBOL_CRC(ata_host_alloc, 0xa5893d36, "_gpl");
SYMBOL_CRC(ata_host_alloc_pinfo, 0xe175dddf, "_gpl");
SYMBOL_CRC(ata_host_start, 0x9f04a6ed, "_gpl");
SYMBOL_CRC(ata_host_init, 0x644c59aa, "_gpl");
SYMBOL_CRC(ata_port_probe, 0x90b4511f, "_gpl");
SYMBOL_CRC(ata_host_register, 0x78a06c54, "_gpl");
SYMBOL_CRC(ata_host_activate, 0x9f5325b9, "_gpl");
SYMBOL_CRC(ata_host_detach, 0x40b45cb8, "_gpl");
SYMBOL_CRC(ata_pci_remove_one, 0x846f6284, "_gpl");
SYMBOL_CRC(ata_pci_shutdown_one, 0xbbff5c30, "_gpl");
SYMBOL_CRC(pci_test_config_bits, 0xd55f1331, "_gpl");
SYMBOL_CRC(ata_pci_device_do_suspend, 0xf8233514, "_gpl");
SYMBOL_CRC(ata_pci_device_do_resume, 0x228cfd2c, "_gpl");
SYMBOL_CRC(ata_pci_device_suspend, 0x17464b61, "_gpl");
SYMBOL_CRC(ata_pci_device_resume, 0x76606efa, "_gpl");
SYMBOL_CRC(ata_platform_remove_one, 0xbeb7997c, "_gpl");
SYMBOL_CRC(ata_ratelimit, 0xf8f3a0fb, "_gpl");
SYMBOL_CRC(ata_msleep, 0xb49692fc, "_gpl");
SYMBOL_CRC(ata_wait_register, 0xb55ae2c2, "_gpl");
SYMBOL_CRC(ata_dummy_port_ops, 0x6be9c1d0, "_gpl");
SYMBOL_CRC(ata_dummy_port_info, 0x6485e10d, "_gpl");
SYMBOL_CRC(ata_print_version, 0xb00faf06, "");
SYMBOL_CRC(__tracepoint_ata_tf_load, 0x5e6f8e8f, "_gpl");
SYMBOL_CRC(__traceiter_ata_tf_load, 0x2a1999d2, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ata_tf_load, 0xf875e450, "_gpl");
SYMBOL_CRC(__SCT__tp_func_ata_tf_load, 0xcf2b93c8, "_gpl");
SYMBOL_CRC(__tracepoint_ata_exec_command, 0x6f8c2505, "_gpl");
SYMBOL_CRC(__traceiter_ata_exec_command, 0xc0d5dc1a, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ata_exec_command, 0xd95ee723, "_gpl");
SYMBOL_CRC(__SCT__tp_func_ata_exec_command, 0x46047827, "_gpl");
SYMBOL_CRC(__tracepoint_ata_bmdma_setup, 0x972f0bdd, "_gpl");
SYMBOL_CRC(__traceiter_ata_bmdma_setup, 0xdafa2377, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ata_bmdma_setup, 0x23c010e2, "_gpl");
SYMBOL_CRC(__SCT__tp_func_ata_bmdma_setup, 0x9a2851ef, "_gpl");
SYMBOL_CRC(__tracepoint_ata_bmdma_start, 0xcc4bc1c3, "_gpl");
SYMBOL_CRC(__traceiter_ata_bmdma_start, 0xe7c5977c, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ata_bmdma_start, 0x78a4dafc, "_gpl");
SYMBOL_CRC(__SCT__tp_func_ata_bmdma_start, 0xa1c3f8a8, "_gpl");
SYMBOL_CRC(__tracepoint_ata_bmdma_status, 0x5ef22cf2, "_gpl");
SYMBOL_CRC(__traceiter_ata_bmdma_status, 0x460c6e21, "_gpl");
SYMBOL_CRC(__SCK__tp_func_ata_bmdma_status, 0xe820eed4, "_gpl");
SYMBOL_CRC(__SCT__tp_func_ata_bmdma_status, 0xc3e1021c, "_gpl");
SYMBOL_CRC(dev_attr_unload_heads, 0x4d86085c, "_gpl");
SYMBOL_CRC(ata_common_sdev_groups, 0x7d89113d, "_gpl");
SYMBOL_CRC(ata_std_bios_param, 0xf40a7d3d, "_gpl");
SYMBOL_CRC(ata_scsi_unlock_native_capacity, 0x24352122, "_gpl");
SYMBOL_CRC(ata_sas_scsi_ioctl, 0xe913f82b, "_gpl");
SYMBOL_CRC(ata_scsi_ioctl, 0x42827bb9, "_gpl");
SYMBOL_CRC(ata_scsi_dma_need_drain, 0x2a9aeceb, "_gpl");
SYMBOL_CRC(ata_scsi_slave_alloc, 0x420e4a09, "_gpl");
SYMBOL_CRC(ata_scsi_device_configure, 0x868115d3, "_gpl");
SYMBOL_CRC(ata_scsi_slave_destroy, 0x4d4e0c88, "_gpl");
SYMBOL_CRC(ata_scsi_queuecmd, 0x3961437f, "_gpl");
SYMBOL_CRC(__ata_ehi_push_desc, 0x28868268, "_gpl");
SYMBOL_CRC(ata_ehi_push_desc, 0x626f56dd, "_gpl");
SYMBOL_CRC(ata_ehi_clear_desc, 0xd3970bd8, "_gpl");
SYMBOL_CRC(ata_port_desc, 0xbf96bb34, "_gpl");
SYMBOL_CRC(ata_port_pbar_desc, 0x2d310f83, "_gpl");
SYMBOL_CRC(ata_scsi_cmd_error_handler, 0x2a4f9542, "");
SYMBOL_CRC(ata_scsi_port_error_handler, 0xde7a6282, "_gpl");
SYMBOL_CRC(ata_port_wait_eh, 0xc330c295, "_gpl");
SYMBOL_CRC(ata_std_sched_eh, 0xf84c93fc, "_gpl");
SYMBOL_CRC(ata_std_end_eh, 0xd6d0f584, "");
SYMBOL_CRC(ata_port_schedule_eh, 0x96f0e74b, "_gpl");
SYMBOL_CRC(ata_link_abort, 0x061141da, "_gpl");
SYMBOL_CRC(ata_port_abort, 0x8c96ad10, "_gpl");
SYMBOL_CRC(ata_port_freeze, 0x0a374950, "_gpl");
SYMBOL_CRC(ata_eh_freeze_port, 0x8bf49cc0, "_gpl");
SYMBOL_CRC(ata_dev_disable, 0xc44ee175, "_gpl");
SYMBOL_CRC(ata_get_cmd_name, 0xbd06f3a9, "_gpl");
SYMBOL_CRC(ata_std_error_handler, 0x137be620, "_gpl");
SYMBOL_CRC(ata_tport_delete, 0x8cb330ba, "_gpl");
SYMBOL_CRC(ata_tport_add, 0x40c6a926, "_gpl");
SYMBOL_CRC(ata_port_classify, 0x500af6d3, "_gpl");
SYMBOL_CRC(sata_deb_timing_normal, 0x9371ea58, "_gpl");
SYMBOL_CRC(sata_deb_timing_hotplug, 0xbc79eb0b, "_gpl");
SYMBOL_CRC(sata_deb_timing_long, 0x06c98647, "_gpl");
SYMBOL_CRC(sata_scr_valid, 0x7ec9fee7, "_gpl");
SYMBOL_CRC(sata_scr_read, 0x027f0b6b, "_gpl");
SYMBOL_CRC(sata_scr_write, 0x97c3ebb1, "_gpl");
SYMBOL_CRC(sata_scr_write_flush, 0xc485c58e, "_gpl");
SYMBOL_CRC(ata_tf_to_fis, 0xdf0c757f, "_gpl");
SYMBOL_CRC(ata_tf_from_fis, 0xa4c085f8, "_gpl");
SYMBOL_CRC(sata_link_debounce, 0x03adfc19, "_gpl");
SYMBOL_CRC(sata_link_resume, 0xb49301b7, "_gpl");
SYMBOL_CRC(sata_link_scr_lpm, 0xe71f9ab8, "_gpl");
SYMBOL_CRC(sata_set_spd, 0x76cd1500, "_gpl");
SYMBOL_CRC(sata_link_hardreset, 0x599f1b8e, "_gpl");
SYMBOL_CRC(sata_std_hardreset, 0x3de6d2c7, "_gpl");
SYMBOL_CRC(ata_qc_complete_multiple, 0x7acc0dd7, "_gpl");
SYMBOL_CRC(ata_slave_link_init, 0x17356153, "_gpl");
SYMBOL_CRC(sata_lpm_ignore_phy_events, 0xc8e93370, "_gpl");
SYMBOL_CRC(dev_attr_link_power_management_policy, 0xdca79bb6, "_gpl");
SYMBOL_CRC(ata_ncq_prio_supported, 0x004e3c79, "_gpl");
SYMBOL_CRC(dev_attr_ncq_prio_supported, 0x8f436cc0, "_gpl");
SYMBOL_CRC(ata_ncq_prio_enabled, 0xc2e2d1a9, "_gpl");
SYMBOL_CRC(ata_ncq_prio_enable, 0xbd360abe, "_gpl");
SYMBOL_CRC(dev_attr_ncq_prio_enable, 0x4697ca09, "_gpl");
SYMBOL_CRC(ata_ncq_sdev_groups, 0xce441177, "_gpl");
SYMBOL_CRC(dev_attr_em_message, 0x2435cff2, "_gpl");
SYMBOL_CRC(dev_attr_em_message_type, 0x9eb40dda, "_gpl");
SYMBOL_CRC(dev_attr_sw_activity, 0x16b44bf2, "_gpl");
SYMBOL_CRC(ata_change_queue_depth, 0x6a856cd4, "_gpl");
SYMBOL_CRC(ata_scsi_change_queue_depth, 0xf98fd5f9, "_gpl");
SYMBOL_CRC(ata_sas_device_configure, 0xd2deb7bf, "_gpl");
SYMBOL_CRC(ata_sas_queuecmd, 0x9fe6e080, "_gpl");
SYMBOL_CRC(sata_async_notification, 0xc3657380, "_gpl");
SYMBOL_CRC(ata_eh_analyze_ncq_error, 0x6895cc94, "_gpl");
SYMBOL_CRC(sata_port_ops, 0xd2979984, "_gpl");
SYMBOL_CRC(ata_sff_port_ops, 0xcc939c6e, "_gpl");
SYMBOL_CRC(ata_sff_check_status, 0x0ad7c2bc, "_gpl");
SYMBOL_CRC(ata_sff_pause, 0xec5ac3c0, "_gpl");
SYMBOL_CRC(ata_sff_dma_pause, 0x0783efee, "_gpl");
SYMBOL_CRC(ata_sff_wait_ready, 0x8606dd8f, "_gpl");
SYMBOL_CRC(ata_sff_dev_select, 0x16935355, "_gpl");
SYMBOL_CRC(ata_sff_irq_on, 0x534b584c, "_gpl");
SYMBOL_CRC(ata_sff_tf_load, 0xdb2393a1, "_gpl");
SYMBOL_CRC(ata_sff_tf_read, 0x02470a40, "_gpl");
SYMBOL_CRC(ata_sff_exec_command, 0x9c2473d0, "_gpl");
SYMBOL_CRC(ata_sff_data_xfer, 0x54f532d1, "_gpl");
SYMBOL_CRC(ata_sff_data_xfer32, 0xaa346a18, "_gpl");
SYMBOL_CRC(ata_sff_hsm_move, 0x5209e602, "_gpl");
SYMBOL_CRC(ata_sff_queue_work, 0xa6b06f65, "_gpl");
SYMBOL_CRC(ata_sff_queue_delayed_work, 0x4e17c613, "_gpl");
SYMBOL_CRC(ata_sff_queue_pio_task, 0xb0c5d93c, "_gpl");
SYMBOL_CRC(ata_sff_qc_issue, 0xa2aeb9ff, "_gpl");
SYMBOL_CRC(ata_sff_qc_fill_rtf, 0x7970c199, "_gpl");
SYMBOL_CRC(ata_sff_port_intr, 0xf10083c9, "_gpl");
SYMBOL_CRC(ata_sff_interrupt, 0x3a4f6a32, "_gpl");
SYMBOL_CRC(ata_sff_lost_interrupt, 0x6a7c06b6, "_gpl");
SYMBOL_CRC(ata_sff_freeze, 0x50f44c9a, "_gpl");
SYMBOL_CRC(ata_sff_thaw, 0xc63a11e8, "_gpl");
SYMBOL_CRC(ata_sff_prereset, 0x5224ac0c, "_gpl");
SYMBOL_CRC(ata_sff_dev_classify, 0x55cc8c42, "_gpl");
SYMBOL_CRC(ata_sff_wait_after_reset, 0xc209c9f6, "_gpl");
SYMBOL_CRC(ata_sff_softreset, 0x7ade9f6b, "_gpl");
SYMBOL_CRC(sata_sff_hardreset, 0x69f43e3d, "_gpl");
SYMBOL_CRC(ata_sff_postreset, 0xd764dcc1, "_gpl");
SYMBOL_CRC(ata_sff_drain_fifo, 0x3fa44b75, "_gpl");
SYMBOL_CRC(ata_sff_error_handler, 0x557bd863, "_gpl");
SYMBOL_CRC(ata_sff_std_ports, 0x73a48b4a, "_gpl");
SYMBOL_CRC(ata_pci_sff_init_host, 0xfd5c48e1, "_gpl");
SYMBOL_CRC(ata_pci_sff_prepare_host, 0x6ba5c68a, "_gpl");
SYMBOL_CRC(ata_pci_sff_activate_host, 0xb0ab7514, "_gpl");
SYMBOL_CRC(ata_pci_sff_init_one, 0x58dae3a7, "_gpl");
SYMBOL_CRC(ata_bmdma_port_ops, 0xacb867c3, "_gpl");
SYMBOL_CRC(ata_bmdma32_port_ops, 0x7b9516ee, "_gpl");
SYMBOL_CRC(ata_bmdma_qc_prep, 0x63fa5bc3, "_gpl");
SYMBOL_CRC(ata_bmdma_dumb_qc_prep, 0x1b5e9ee7, "_gpl");
SYMBOL_CRC(ata_bmdma_qc_issue, 0xc0ecbda9, "_gpl");
SYMBOL_CRC(ata_bmdma_port_intr, 0x2d767b41, "_gpl");
SYMBOL_CRC(ata_bmdma_interrupt, 0xe818b32b, "_gpl");
SYMBOL_CRC(ata_bmdma_error_handler, 0xfdd23ef0, "_gpl");
SYMBOL_CRC(ata_bmdma_post_internal_cmd, 0x3cc9dd39, "_gpl");
SYMBOL_CRC(ata_bmdma_irq_clear, 0x2b3a726a, "_gpl");
SYMBOL_CRC(ata_bmdma_setup, 0xd2bf9f9b, "_gpl");
SYMBOL_CRC(ata_bmdma_start, 0x65a6225a, "_gpl");
SYMBOL_CRC(ata_bmdma_stop, 0x4e508c05, "_gpl");
SYMBOL_CRC(ata_bmdma_status, 0x914979ad, "_gpl");
SYMBOL_CRC(ata_bmdma_port_start, 0xab1fc568, "_gpl");
SYMBOL_CRC(ata_bmdma_port_start32, 0x665aef47, "_gpl");
SYMBOL_CRC(ata_pci_bmdma_clear_simplex, 0x29cd9354, "_gpl");
SYMBOL_CRC(ata_pci_bmdma_init, 0x87bde9f9, "_gpl");
SYMBOL_CRC(ata_pci_bmdma_prepare_host, 0x72885f67, "_gpl");
SYMBOL_CRC(ata_pci_bmdma_init_one, 0x73db91c5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf401d1a8, "devres_add" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xf83473a0, "scsi_device_set_state" },
	{ 0xee99c7ef, "dev_driver_string" },
	{ 0x3ab7b1cc, "scsi_set_sense_field_pointer" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0x3be2ccd0, "pci_read_config_dword" },
	{ 0x398c28ae, "transport_setup_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x31b164e7, "__pm_runtime_set_status" },
	{ 0xf5f370e0, "async_schedule_node" },
	{ 0x5566284a, "trace_seq_putc" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xca844bc7, "put_device" },
	{ 0x1262a927, "devm_free_irq" },
	{ 0xa76c6a6e, "pm_runtime_enable" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x5009c71d, "glob_match" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x5ac411fe, "scsi_eh_finish_cmd" },
	{ 0xc6cbbc89, "capable" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8ffb42d6, "scsi_device_put" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xf811e69d, "scsi_eh_flush_done_q" },
	{ 0xeba8abe7, "pcim_iomap_regions" },
	{ 0x8988704a, "sg_miter_next" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x72705ca2, "scsi_host_put" },
	{ 0x49367283, "transport_class_unregister" },
	{ 0x934ea33f, "device_add" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5b6107f5, "attribute_container_register" },
	{ 0x797e5068, "pci_read_config_word" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xbe5b632e, "__devres_alloc_node" },
	{ 0x35b0ea3, "sg_miter_stop" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xe20d1413, "device_link_remove" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xffb7c514, "ida_free" },
	{ 0x13f42152, "system_entering_hibernation" },
	{ 0xaa9104fb, "transport_configure_device" },
	{ 0x7186cd67, "devres_open_group" },
	{ 0xf08a4af4, "scsi_resume_device" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xde8c04b4, "pcim_pin_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xaff1c4a0, "transport_add_device" },
	{ 0x4c3d8970, "sg_miter_start" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x93022ba6, "__scsi_format_command" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4e64974, "pci_restore_state" },
	{ 0x95a052b1, "bpf_trace_run1" },
	{ 0xc04e9955, "device_del" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xb19b445, "ioread8" },
	{ 0xc9c42b67, "scsi_rescan_device" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xb72e7d4e, "pci_set_master" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x19a55fde, "param_ops_string" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dce513f, "dma_set_coherent_mask" },
	{ 0xe8fbeafc, "devm_kasprintf" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd8bb697, "bpf_trace_run3" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x67b9625c, "pm_runtime_forbid" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x5fc67252, "ioread16_rep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x868e51aa, "attribute_container_unregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5407a918, "scsi_execute_cmd" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x538d6f90, "transport_destroy_device" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x6cc09945, "ioread32_rep" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x544253f5, "pci_disable_device" },
	{ 0xecbb1768, "scsi_done" },
	{ 0xdcbeba1d, "sg_copy_from_buffer" },
	{ 0xe1779b47, "dma_set_mask" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x4836cf95, "dma_unmap_sg_attrs" },
	{ 0x6c8ac046, "pcim_iomap_table" },
	{ 0x4d0bac1, "scsi_remove_device" },
	{ 0x9111f7d6, "blk_abort_request" },
	{ 0x483e46cf, "scsi_add_host_with_dma" },
	{ 0x798dd6b1, "pci_read_config_byte" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x754d539c, "strlen" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xe3a61ac6, "_dev_printk" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x93933b99, "pcim_enable_device" },
	{ 0x7b1a0218, "scsi_host_alloc" },
	{ 0x349cba85, "strchr" },
	{ 0x332e0720, "__scsi_add_device" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd0646dbf, "device_link_add" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x16f123e, "sg_copy_to_buffer" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x3cb5f497, "scsi_change_queue_depth" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe2eaa37c, "pci_bus_type" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x909396f0, "dma_map_sg_attrs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x64925e0c, "transport_class_register" },
	{ 0xf635e4fa, "pci_save_state" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x7a81541b, "async_synchronize_cookie" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x3d2cf205, "devres_release_group" },
	{ 0x835712e1, "devm_request_threaded_irq" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf2cf1a80, "scsi_device_get" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x77bc13a0, "strim" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0xfe13a601, "trace_seq_printf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xa88a01e7, "devres_remove_group" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6f00a17a, "dmam_alloc_attrs" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0xa4c8accd, "scsi_remove_host" },
	{ 0x11d5d485, "transport_remove_device" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc2bda946, "scsi_build_sense" },
	{ 0x4a0cd517, "scsi_schedule_eh" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xf7370f56, "system_state" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xdc8205d2, "scsi_check_sense" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x8da9e397, "sdev_evt_send_simple" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0x43babd19, "sg_init_one" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xab25598b, "pci_set_power_state" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_mod,scsi_common");


MODULE_INFO(srcversion, "ACF444DC47968778B44EF1E");
