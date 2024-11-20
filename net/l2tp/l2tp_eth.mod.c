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
	{ 0x777137ac, "dev_addr_mod" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x82879e15, "unregister_netdevice_queue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x2bef74cd, "l2tp_xmit_skb" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xcb5ef587, "dev_forward_skb" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x99224b11, "__skb_ext_del" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xf04a650c, "dst_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x513e104f, "l2tp_session_create" },
	{ 0x1b6287cd, "alloc_netdev_mqs" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0x7f597b83, "kernel_sock_ip_overhead" },
	{ 0xdb579ef1, "release_sock" },
	{ 0xd059fbb4, "l2tp_session_register" },
	{ 0x88287630, "register_netdevice" },
	{ 0x4c7ece16, "l2tp_session_put" },
	{ 0xe893d918, "__module_get" },
	{ 0xbca24e1e, "ip6_mtu" },
	{ 0x56d691a8, "free_netdev" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x3438cdde, "l2tp_session_delete" },
	{ 0x39374f5e, "ipv4_mtu" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xb9ffdc54, "eth_mac_addr" },
	{ 0x6f379e5c, "dev_get_tstats64" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xff3d80f, "l2tp_nl_register_ops" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x377214d3, "seq_printf" },
	{ 0xc15d5e03, "ether_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "12B3B355B01D0F670FBC4E7");
