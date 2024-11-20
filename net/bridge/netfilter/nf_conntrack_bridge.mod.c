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
	{ 0x3706bbc7, "nf_ct_frag6_gather" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xf34a82b4, "ip_defrag" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb57a7efb, "nf_conntrack_in" },
	{ 0x67d19474, "pskb_trim_rcsum_slow" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x6f88660, "nf_confirm" },
	{ 0xa79528cd, "br_ip6_fragment" },
	{ 0xb2c9b6a8, "ip_frag_init" },
	{ 0xcc7523ea, "ip_frag_next" },
	{ 0xaa866b39, "skb_checksum_help" },
	{ 0xa6a94236, "ip_fraglist_init" },
	{ 0xeb28e79e, "ip_fraglist_prepare" },
	{ 0xf3662c8e, "kfree_skb_list_reason" },
	{ 0xe065f55b, "consume_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a1fdb66, "nf_ct_bridge_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xfcc2c59e, "nf_ct_bridge_unregister" },
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xed781b3e, "br_dev_queue_push_xmit" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_defrag_ipv6,nf_conntrack,bridge");

