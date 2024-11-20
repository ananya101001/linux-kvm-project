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
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x85df9b6c, "strsep" },
	{ 0x44e9a829, "match_token" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x4e3567f7, "match_int" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0xf929e027, "target_configure_unmap_from_queue" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe987b605, "target_backend_unregister" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x77d3df95, "sbc_get_write_same_sectors" },
	{ 0xe97b444e, "iov_iter_bvec" },
	{ 0x38e35d9f, "vfs_iter_write" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x3e9ba60f, "vfs_iter_read" },
	{ 0x4cb1aab4, "iov_iter_zero" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xcf713f69, "sbc_dif_verify" },
	{ 0xf22577f0, "sbc_get_device_type" },
	{ 0x9c5e5a83, "sbc_attrib_attrs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc58b717e, "transport_backend_register" },
	{ 0x4f878c67, "filp_close" },
	{ 0xfb578fc5, "memset" },
	{ 0x5ca34b15, "kernel_write" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x999e8297, "vfree" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x51e0bbe1, "filp_open" },
	{ 0x676094b3, "sbc_parse_cdb" },
	{ 0x35092038, "I_BDEV" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xc81997ec, "target_to_linux_sector" },
	{ 0xbd566832, "blkdev_issue_discard" },
	{ 0x37a0cba, "kfree" },
	{ 0x1caa1b56, "target_complete_cmd" },
	{ 0x7e55285b, "vfs_fsync_range" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "target_core_mod");

