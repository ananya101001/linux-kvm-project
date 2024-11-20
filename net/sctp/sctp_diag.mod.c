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
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0x9ecff906, "inet_diag_msg_common_fill" },
	{ 0xba5ca25f, "nla_reserve_64bit" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xe8255b35, "netlink_unicast" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1647506, "inet_diag_msg_attrs_fill" },
	{ 0x81a3e0b3, "inet_diag_unregister" },
	{ 0x8f10129d, "sctp_transport_lookup_process" },
	{ 0xdb579ef1, "release_sock" },
	{ 0xf6cb9ccc, "netlink_net_capable" },
	{ 0x98965c5f, "sctp_for_each_endpoint" },
	{ 0x9094a6cf, "sctp_get_sctp_info" },
	{ 0x4c235f2f, "sctp_transport_traverse_process" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0x5c0fa8b1, "inet_diag_register" },
	{ 0x4dc8c704, "nla_reserve" },
	{ 0xb15aa180, "sock_diag_save_cookie" },
	{ 0xd0aaaac5, "sock_diag_check_cookie" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "inet_diag,sctp");

