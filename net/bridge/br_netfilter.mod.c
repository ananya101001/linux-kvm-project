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
	{ 0x380ce666, "nf_register_net_hooks" },
	{ 0x135fbb65, "nf_ipv6_ops" },
	{ 0x305e018b, "ip_route_input_noref" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x7fe35934, "br_forward_finish" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xe5590ebd, "init_net" },
	{ 0xd5ef03b6, "nf_ip6_check_hbh_len" },
	{ 0x87400f82, "skb_pull" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0x6775c90f, "skb_push" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x7d511f68, "nf_unregister_net_hooks" },
	{ 0xed781b3e, "br_dev_queue_push_xmit" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x1d064d06, "nf_hook_slow" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd83898d5, "nf_hooks_needed" },
	{ 0x63db0b8c, "neigh_destroy" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x38f209a3, "__vlan_find_dev_deep_rcu" },
	{ 0xf04a650c, "dst_release" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0x334897d6, "ip_do_fragment" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0x57a42a8f, "skb_ext_add" },
	{ 0x67d19474, "pskb_trim_rcsum_slow" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9f3ea012, "br_handle_frame_finish" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x99224b11, "__skb_ext_del" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4b2b2734, "nf_br_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x32cd197c, "ip_route_output_flow" },
	{ 0x81edf8b2, "nf_ct_hook" },
	{ 0x11729181, "skb_pull_rcsum" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0xa4f84056, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "bridge");

