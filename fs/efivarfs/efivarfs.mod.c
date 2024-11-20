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
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5fc0511b, "simple_inode_init_ts" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x2303b915, "efivar_lock" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6bd88b5, "ucs2_strnlen" },
	{ 0x9231da96, "d_alloc" },
	{ 0xcd6f031b, "simple_dir_operations" },
	{ 0x79f128c, "fs_param_is_gid" },
	{ 0xb884caba, "efivar_ops_nh" },
	{ 0xfddeb056, "efi" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x86de2938, "simple_open" },
	{ 0xc961bff7, "efivar_unlock" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x11089ac7, "_ctype" },
	{ 0xb4104491, "kill_litter_super" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x49147859, "d_delete" },
	{ 0x9102cff1, "from_kgid_munged" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x2c2dc0e9, "d_add" },
	{ 0x8caf9305, "uuid_is_valid" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x7919d80, "init_user_ns" },
	{ 0xf734775f, "inode_set_ctime_current" },
	{ 0xf04e6d86, "inc_nlink" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x377214d3, "seq_printf" },
	{ 0x7c9adcc2, "dput" },
	{ 0xb256be16, "efivar_is_available" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xf865848e, "generic_delete_inode" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x31e8d77c, "simple_lookup" },
	{ 0x465e24ff, "ucs2_utf8size" },
	{ 0xcf624eda, "__fs_parse" },
	{ 0xc0b8681e, "from_kuid_munged" },
	{ 0x43b37800, "get_tree_single" },
	{ 0xdceb5362, "efi_status_to_err" },
	{ 0xefc77711, "efivar_set_variable_locked" },
	{ 0x754d539c, "strlen" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7410aba2, "strreplace" },
	{ 0xff0e49af, "drop_nlink" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xfd8f8d98, "fs_param_is_uid" },
	{ 0xd1363cc1, "ucs2_strsize" },
	{ 0x4336fcca, "ucs2_as_utf8" },
	{ 0x460f1787, "d_instantiate" },
	{ 0x1fa48995, "efivar_supports_writes" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x533082d3, "clear_inode" },
	{ 0xa336852c, "efivar_get_next_variable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xea0af66, "new_inode" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x9c81d303, "unregister_filesystem" },
	{ 0x9ed1c77e, "inode_set_flags" },
	{ 0xfd3100c2, "d_make_root" },
	{ 0xfbac6943, "always_delete_dentry" },
	{ 0x1f6cd584, "efivar_reserved_space" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x91bf2302, "iput" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xee5240dc, "efivar_query_variable_info" },
	{ 0x9c86b9ab, "fileattr_fill_flags" },
	{ 0x5a3c9dbb, "efivar_get_variable" },
	{ 0x5d28f4e6, "register_filesystem" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

