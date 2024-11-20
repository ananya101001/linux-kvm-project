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

KSYMTAB_FUNC(nf_defrag_ipv6_enable, "_gpl", "");
KSYMTAB_FUNC(nf_defrag_ipv6_disable, "_gpl", "");
KSYMTAB_FUNC(nf_ct_frag6_gather, "_gpl", "");

SYMBOL_CRC(nf_defrag_ipv6_enable, 0xa082f2ef, "_gpl");
SYMBOL_CRC(nf_defrag_ipv6_disable, 0xe2c1468c, "_gpl");
SYMBOL_CRC(nf_ct_frag6_gather, 0x3706bbc7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x37a0cba, "kfree" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0xa4f84056, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x48df5a5e, "inet_frag_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xe6f295a9, "ipv6_skip_exthdr" },
	{ 0x8f919c01, "inet_frag_reasm_finish" },
	{ 0x380ce666, "nf_register_net_hooks" },
	{ 0x6b2bf68, "fqdir_init" },
	{ 0xe5590ebd, "init_net" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd8f81ea9, "inet_frags_fini" },
	{ 0x896c49d8, "proc_doulongvec_minmax" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x7d511f68, "nf_unregister_net_hooks" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x41047f45, "nf_defrag_v6_hook" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x7273b75c, "inet_frag_reasm_prepare" },
	{ 0x9a56d0be, "inet_frag_find" },
	{ 0x47207bf5, "fqdir_exit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf04a650c, "dst_release" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x67d19474, "pskb_trim_rcsum_slow" },
	{ 0x78346ef2, "inet_frag_kill" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xc50e9813, "icmp6_send" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xac4038d6, "proc_dointvec_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb0e602eb, "memmove" },
	{ 0x4cb67798, "inet_frag_queue_insert" },
	{ 0x725e0a67, "inet_frags_init" },
	{ 0x9b9742c2, "inet_frag_pull_head" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

