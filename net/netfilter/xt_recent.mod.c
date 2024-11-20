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
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x453ca149, "__do_once_done" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0xa916b694, "strnlen" },
	{ 0x7919d80, "init_user_ns" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0xa3951d2b, "make_kgid" },
	{ 0x582d2994, "proc_create_data" },
	{ 0x43c2d3b, "proc_set_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4841bdee, "strnchr" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x5c4440b5, "seq_read" },
	{ 0xc520b851, "seq_lseek" },
	{ 0x68c13a92, "seq_release_private" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xbfc8d55c, "__seq_open_private" },
	{ 0x377214d3, "seq_printf" },
	{ 0x5db87f6c, "seq_putc" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0xb99fd232, "xt_register_matches" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x2e62920b, "xt_unregister_matches" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x241cd204, "proc_mkdir" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x37a0cba, "kfree" },
	{ 0xab3fc466, "remove_proc_entry" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "x_tables");

