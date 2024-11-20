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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x85df9b6c, "strsep" },
	{ 0x44e9a829, "match_token" },
	{ 0x4e3567f7, "match_int" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x72705ca2, "scsi_host_put" },
	{ 0x8ffb42d6, "scsi_device_put" },
	{ 0x37712435, "fput" },
	{ 0x6ee6c27a, "scsi_host_lookup" },
	{ 0xe987b605, "target_backend_unregister" },
	{ 0x1fa2c0d5, "passthrough_parse_cdb" },
	{ 0xf3c6aee3, "scsi_alloc_request" },
	{ 0x548540b8, "bio_add_pc_page" },
	{ 0xda198a56, "blk_rq_append_bio" },
	{ 0xe84c11ab, "bio_kmalloc" },
	{ 0x3ffd487f, "bio_init" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x7efc2c75, "blk_execute_rq_nowait" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x5407a918, "scsi_execute_cmd" },
	{ 0x871ffd6, "transport_set_vpd_ident" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xf3c2dfe0, "transport_set_vpd_proto_id" },
	{ 0x142072c0, "transport_set_vpd_assoc" },
	{ 0x3a20a9d7, "transport_set_vpd_ident_type" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xf2cf1a80, "scsi_device_get" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xe6d35498, "bdev_file_open_by_path" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0xf2f1724f, "passthrough_attrib_attrs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc58b717e, "transport_backend_register" },
	{ 0x3bed80a1, "file_bdev" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1caa1b56, "target_complete_cmd" },
	{ 0x42f9b424, "blk_mq_free_request" },
	{ 0xaffb7795, "transport_copy_sense_to_cmd" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xd58f835a, "target_complete_cmd_with_length" },
	{  0xad355, "target_lun_is_rdonly" },
	{ 0xeac44600, "transport_kmap_data_sg" },
	{ 0x3701cb02, "transport_kunmap_data_sg" },
	{ 0x122c3a7e, "_printk" },
	{ 0x28e3c37d, "bio_uninit" },
	{ 0x37a0cba, "kfree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_mod,target_core_mod,scsi_common");

