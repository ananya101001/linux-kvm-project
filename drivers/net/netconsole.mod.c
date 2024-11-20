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
	{ 0x30fd05df, "config_group_init_type_name" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x53934104, "do_netpoll_cleanup" },
	{ 0x56470118, "__warn_printk" },
	{ 0x998d9992, "config_item_get" },
	{ 0x62b72df7, "netpoll_print_options" },
	{ 0x201d8abe, "netpoll_setup" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x20514d2c, "register_console" },
	{ 0x85df9b6c, "strsep" },
	{ 0xf6ba64df, "netpoll_parse_options" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa2323c6d, "config_group_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x527b8d9d, "configfs_register_subsystem" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x19a55fde, "param_ops_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa916b694, "strnlen" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x122c3a7e, "_printk" },
	{ 0x96848186, "scnprintf" },
	{ 0x9b824744, "config_item_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x652032cb, "mac_pton" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4841bdee, "strnchr" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xeb60ee6a, "netpoll_send_udp" },
	{ 0xa07a37f0, "memchr" },
	{ 0x69acdf38, "memcpy" },
	{ 0xca1e74e1, "init_uts_ns" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x754d539c, "strlen" },
	{ 0x51af06ba, "config_item_init_type_name" },
	{ 0x6f14e9db, "console_list_lock" },
	{ 0x14d7477f, "console_list_unlock" },
	{ 0x51b6df8e, "unregister_console" },
	{ 0xea5264a, "configfs_unregister_subsystem" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xc08a2a87, "netpoll_cleanup" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "configfs");

