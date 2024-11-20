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

KSYMTAB_FUNC(nfnl_lock, "_gpl", "");
KSYMTAB_FUNC(nfnl_unlock, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_subsys_register, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_subsys_unregister, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_has_listeners, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_send, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_set_err, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_unicast, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_broadcast, "_gpl", "");

SYMBOL_CRC(nfnl_lock, 0x5ce3b588, "_gpl");
SYMBOL_CRC(nfnl_unlock, 0xdb065657, "_gpl");
SYMBOL_CRC(nfnetlink_subsys_register, 0x53f84745, "_gpl");
SYMBOL_CRC(nfnetlink_subsys_unregister, 0xa84b4980, "_gpl");
SYMBOL_CRC(nfnetlink_has_listeners, 0xfe89ea5d, "_gpl");
SYMBOL_CRC(nfnetlink_send, 0xaef300e8, "_gpl");
SYMBOL_CRC(nfnetlink_set_err, 0x2c7df7a4, "_gpl");
SYMBOL_CRC(nfnetlink_unicast, 0xd4be4ee6, "_gpl");
SYMBOL_CRC(nfnetlink_broadcast, 0xead9fdc2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x19f33626, "nf_ctnetlink_has_listener" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x203b9e03, "netlink_kernel_release" },
	{ 0x99a033d8, "netlink_has_listeners" },
	{ 0x4abccba1, "netlink_broadcast" },
	{ 0xbe643608, "netlink_set_err" },
	{ 0xb5534fb3, "nlmsg_notify" },
	{ 0xe8255b35, "netlink_unicast" },
	{ 0xe68a26a4, "__netlink_kernel_create" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xa542eb90, "skb_clone" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xae865e4e, "netlink_ack" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x37a0cba, "kfree" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x87400f82, "skb_pull" },
	{ 0xf6cb9ccc, "netlink_net_capable" },
	{ 0x1441b7a8, "netlink_rcv_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

