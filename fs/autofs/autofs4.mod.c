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
	{ 0x4a42339f, "may_umount_tree" },
	{ 0x7045dc2c, "fs_param_is_u32" },
	{ 0x9e5e7c8d, "d_drop" },
	{ 0x122c3a7e, "_printk" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xc6cbbc89, "capable" },
	{ 0x79f128c, "fs_param_is_gid" },
	{ 0x6ae0dcee, "path_has_submounts" },
	{ 0x2f1d1ade, "__task_pid_nr_ns" },
	{ 0xb6fde909, "close_fd" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37712435, "fput" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa07a37f0, "memchr" },
	{ 0xaa0a38e2, "dentry_path_raw" },
	{ 0x2a71977a, "noop_llseek" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4852f447, "set_nlink" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb4104491, "kill_litter_super" },
	{ 0x28d809fe, "kern_path" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xea43f98d, "misc_register" },
	{ 0x38fd17f2, "dcache_dir_lseek" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb6a188bf, "try_lookup_one_len" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x9102cff1, "from_kgid_munged" },
	{ 0x668b19a1, "down_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb5932e2, "may_umount" },
	{ 0x411c18ff, "path_get" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x17fde49c, "generic_read_dir" },
	{ 0x2c2dc0e9, "d_add" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x7919d80, "init_user_ns" },
	{ 0x2c51dd7b, "dentry_open" },
	{ 0xf734775f, "inode_set_ctime_current" },
	{ 0xf04e6d86, "inc_nlink" },
	{ 0x3d1a1b7b, "seq_write" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x377214d3, "seq_printf" },
	{ 0x7c9adcc2, "dput" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xdadc1c1a, "pid_vnr" },
	{ 0xcf624eda, "__fs_parse" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xc0b8681e, "from_kuid_munged" },
	{ 0x7feabae6, "path_is_mountpoint" },
	{ 0x386174f1, "fs_param_is_fd" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x754d539c, "strlen" },
	{ 0x1d549db, "get_task_pid" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0xfa11a0ac, "put_pid" },
	{ 0xff0e49af, "drop_nlink" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xfd8f8d98, "fs_param_is_uid" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf9ac8e09, "clear_nlink" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x533082d3, "clear_inode" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xf430a79a, "follow_down_one" },
	{ 0xea0af66, "new_inode" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x9c81d303, "unregister_filesystem" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa55f28b4, "simple_statfs" },
	{ 0x272d0dd8, "__kernel_write" },
	{ 0xfd3100c2, "d_make_root" },
	{ 0x61e1334, "fget" },
	{ 0x7a729fb1, "fd_install" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdb07d9c, "follow_up" },
	{ 0x37bfdd7f, "generic_permission" },
	{ 0x37a0cba, "kfree" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xac951d14, "dcache_dir_close" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x44f4d3b, "logfc" },
	{ 0xd3359b47, "dcache_dir_open" },
	{ 0x6cbf9166, "find_get_pid" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd9fbad50, "init_pid_ns" },
	{ 0xbc3f2dad, "d_lookup" },
	{ 0xe2964344, "__wake_up" },
	{ 0x5d28f4e6, "register_filesystem" },
	{ 0xa0097327, "dcache_readdir" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd9a86cd3, "path_put" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xe6760435, "get_tree_nodev" },
	{ 0x5fc0511b, "simple_inode_init_ts" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");
