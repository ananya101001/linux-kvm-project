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
	{ 0x7c9adcc2, "dput" },
	{ 0x5d28f4e6, "register_filesystem" },
	{ 0x5177a26f, "__register_binfmt" },
	{ 0xf8e27f49, "unregister_binfmt" },
	{ 0x9c81d303, "unregister_filesystem" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x349cba85, "strchr" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x64bbc288, "string_unescape" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0x85075f40, "override_creds" },
	{ 0x30f79197, "open_exec" },
	{ 0x2322dfd4, "revert_creds" },
	{ 0x57bc19d2, "down_write" },
	{ 0x7e9be7cc, "lookup_one_len" },
	{ 0xce807a25, "up_write" },
	{ 0x4f878c67, "filp_close" },
	{ 0xea0af66, "new_inode" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x5fc0511b, "simple_inode_init_ts" },
	{ 0x460f1787, "d_instantiate" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x122c3a7e, "_printk" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x234d0a38, "simple_fill_super" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x533082d3, "clear_inode" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x9f984513, "strrchr" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xddd2d611, "copy_string_kernel" },
	{ 0x7d4eb12a, "bprm_change_interp" },
	{ 0x2c51dd7b, "dentry_open" },
	{ 0xc61f657b, "init_binfmt_misc" },
	{ 0xe18f19f, "remove_arg_zero" },
	{ 0x8e9da085, "__put_user_ns" },
	{ 0xb5728fba, "get_tree_keyed" },
	{ 0xa55f28b4, "simple_statfs" },
	{ 0x481e6455, "default_llseek" },
	{ 0x2a71977a, "noop_llseek" },
	{ 0xb4104491, "kill_litter_super" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11089ac7, "_ctype" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x754d539c, "strlen" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x3ff841d2, "simple_unlink" },
	{ 0x49147859, "d_delete" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

