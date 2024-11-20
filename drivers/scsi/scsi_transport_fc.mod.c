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

KSYMTAB_FUNC(fc_get_event_number, "", "");
KSYMTAB_FUNC(fc_host_post_fc_event, "", "");
KSYMTAB_FUNC(fc_host_post_event, "", "");
KSYMTAB_FUNC(fc_host_post_vendor_event, "", "");
KSYMTAB_FUNC(fc_find_rport_by_wwpn, "", "");
KSYMTAB_FUNC(fc_host_fpin_rcv, "", "");
KSYMTAB_FUNC(scsi_is_fc_rport, "", "");
KSYMTAB_FUNC(fc_eh_timed_out, "", "");
KSYMTAB_FUNC(fc_attach_transport, "", "");
KSYMTAB_FUNC(fc_release_transport, "", "");
KSYMTAB_FUNC(fc_remove_host, "", "");
KSYMTAB_FUNC(fc_remote_port_add, "", "");
KSYMTAB_FUNC(fc_remote_port_delete, "", "");
KSYMTAB_FUNC(fc_remote_port_rolechg, "", "");
KSYMTAB_FUNC(fc_block_rport, "", "");
KSYMTAB_FUNC(fc_block_scsi_eh, "", "");
KSYMTAB_FUNC(fc_eh_should_retry_cmd, "_gpl", "");
KSYMTAB_FUNC(fc_vport_create, "", "");
KSYMTAB_FUNC(fc_vport_terminate, "", "");

SYMBOL_CRC(fc_get_event_number, 0x375f8bbd, "");
SYMBOL_CRC(fc_host_post_fc_event, 0x21816a0b, "");
SYMBOL_CRC(fc_host_post_event, 0x914bc14d, "");
SYMBOL_CRC(fc_host_post_vendor_event, 0xa6359bb0, "");
SYMBOL_CRC(fc_find_rport_by_wwpn, 0x0ecd5e4f, "");
SYMBOL_CRC(fc_host_fpin_rcv, 0xd88100bd, "");
SYMBOL_CRC(scsi_is_fc_rport, 0x69fb380d, "");
SYMBOL_CRC(fc_eh_timed_out, 0xd7aff4ed, "");
SYMBOL_CRC(fc_attach_transport, 0x6adb17f1, "");
SYMBOL_CRC(fc_release_transport, 0x9926e71f, "");
SYMBOL_CRC(fc_remove_host, 0xe48eca03, "");
SYMBOL_CRC(fc_remote_port_add, 0x5f7dafc4, "");
SYMBOL_CRC(fc_remote_port_delete, 0xaa85673b, "");
SYMBOL_CRC(fc_remote_port_rolechg, 0xe8c96407, "");
SYMBOL_CRC(fc_block_rport, 0xafc02647, "");
SYMBOL_CRC(fc_block_scsi_eh, 0xa6da7802, "");
SYMBOL_CRC(fc_eh_should_retry_cmd, 0x065b56d5, "_gpl");
SYMBOL_CRC(fc_vport_create, 0x554e9ae7, "");
SYMBOL_CRC(fc_vport_terminate, 0x939fbc17, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7b68bebe, "sysfs_remove_link" },
	{ 0x11d5d485, "transport_remove_device" },
	{ 0xc04e9955, "device_del" },
	{ 0x538d6f90, "transport_destroy_device" },
	{ 0xe3a61ac6, "_dev_printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8e7f9104, "scsi_flush_work" },
	{ 0xf9f60b42, "bsg_remove_queue" },
	{ 0xbd609baf, "scsi_target_unblock" },
	{ 0x47120c82, "scsi_remove_target" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4df930a2, "scsi_is_target_device" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x5b6107f5, "attribute_container_register" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x79882c4b, "scsi_host_get" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0x3131271a, "get_device" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0x398c28ae, "transport_setup_device" },
	{ 0x934ea33f, "device_add" },
	{ 0xaff1c4a0, "transport_add_device" },
	{ 0xaa9104fb, "transport_configure_device" },
	{ 0x5cad8430, "sysfs_create_link" },
	{ 0xd4a53372, "scsi_block_targets" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x6d0e761c, "scsi_queue_work" },
	{ 0x8e66f282, "blk_mq_run_hw_queues" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x967bbf30, "bsg_job_get" },
	{ 0xeec70055, "blk_mq_end_request" },
	{ 0x33d20dad, "bsg_job_put" },
	{ 0x765cf494, "bsg_job_done" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xca844bc7, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xd6b64063, "scsi_scan_target" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x64925e0c, "transport_class_register" },
	{ 0x49367283, "transport_class_unregister" },
	{ 0xd3b5dbd, "scsi_nl_sock" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0xbc431e3c, "netlink_broadcast_filtered" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xa6caa586, "scsi_init_limits" },
	{ 0x3a731c00, "bsg_setup_queue" },
	{ 0xb033617e, "blk_queue_rq_timeout" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x6a6d16d1, "scsi_is_host_device" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x868e51aa, "attribute_container_unregister" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x72705ca2, "scsi_host_put" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_mod");

