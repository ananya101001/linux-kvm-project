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
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x49f274b4, "__udp4_lib_lookup" },
	{ 0xd0aaaac5, "sock_diag_check_cookie" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xe8255b35, "netlink_unicast" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x98a94a64, "sk_free" },
	{ 0x5e5f51bb, "__udp6_lib_lookup" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x1aa41078, "sock_diag_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5c0fa8b1, "inet_diag_register" },
	{ 0x81a3e0b3, "inet_diag_unregister" },
	{ 0xf6cb9ccc, "netlink_net_capable" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x57ad3f9f, "inet_diag_bc_sk" },
	{ 0x7391fffc, "inet_sk_diag_fill" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd4d1983c, "udplite_table" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "inet_diag");

