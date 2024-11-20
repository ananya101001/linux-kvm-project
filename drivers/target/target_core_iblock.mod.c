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
	{ 0xacf4d843, "match_strdup" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0xf929e027, "target_configure_unmap_from_queue" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x37712435, "fput" },
	{ 0xb35ee0d2, "bioset_exit" },
	{ 0x94601fc4, "bioset_init" },
	{ 0xe6d35498, "bdev_file_open_by_path" },
	{ 0x3bed80a1, "file_bdev" },
	{ 0x3644e880, "bioset_integrity_create" },
	{ 0xedb0d088, "blk_integrity_profile_name" },
	{ 0xe987b605, "target_backend_unregister" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3c6785b7, "block_pr_type_to_scsi" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x405da207, "bio_add_page" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x4c3d8970, "sg_miter_start" },
	{ 0x77d3df95, "sbc_get_write_same_sectors" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x331f0cbe, "blkdev_issue_zeroout" },
	{ 0xf22577f0, "sbc_get_device_type" },
	{ 0x9c5e5a83, "sbc_attrib_attrs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc58b717e, "transport_backend_register" },
	{ 0x30aa3f10, "bdev_alignment_offset" },
	{ 0x676094b3, "sbc_parse_cdb" },
	{ 0x37a0cba, "kfree" },
	{ 0x74bf2e01, "scsi_pr_type_to_block" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x122c3a7e, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc81997ec, "target_to_linux_sector" },
	{ 0xbd566832, "blkdev_issue_discard" },
	{ 0x1caa1b56, "target_complete_cmd" },
	{ 0xeff5e7af, "bio_put" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x9c5bad96, "blk_start_plug" },
	{ 0xed0b2833, "fs_bio_set" },
	{ 0x9737feb5, "bio_alloc_bioset" },
	{ 0xbf9308e3, "submit_bio" },
	{ 0x5b05cc9b, "blk_finish_plug" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xce4c71ae, "bio_integrity_alloc" },
	{ 0x8988704a, "sg_miter_next" },
	{ 0xf0d07543, "bio_integrity_add_page" },
	{ 0x35b0ea3, "sg_miter_stop" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x85df9b6c, "strsep" },
	{ 0x44e9a829, "match_token" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "target_core_mod,scsi_common");

