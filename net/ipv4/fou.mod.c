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

KSYMTAB_FUNC(fou_encap_hlen, "", "");
KSYMTAB_FUNC(gue_encap_hlen, "", "");
KSYMTAB_FUNC(__fou_build_header, "", "");
KSYMTAB_FUNC(__gue_build_header, "", "");

SYMBOL_CRC(fou_encap_hlen, 0x1757d1a4, "");
SYMBOL_CRC(gue_encap_hlen, 0xf13914b3, "");
SYMBOL_CRC(__fou_build_header, 0x8cb52a69, "");
SYMBOL_CRC(__gue_build_header, 0x8a0fe83f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x91e48d88, "pskb_expand_head" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xe5497da, "__skb_get_hash_net" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xe8255b35, "netlink_unicast" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6775c90f, "skb_push" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x86512576, "unregister_pernet_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x434ac20f, "ip_tunnel_encap_del_ops" },
	{ 0x1f43ca7b, "udp_tunnel_sock_release" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x1626cdd3, "register_btf_kfunc_id_set" },
	{ 0x2efa4fd6, "setup_udp_tunnel_sock" },
	{ 0xece4834d, "udp_sock_create6" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xc73beab4, "inet6_offloads" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x67041673, "genl_unregister_family" },
	{ 0x3facf125, "genl_register_family" },
	{ 0xa47c4028, "register_pernet_device" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x126aae90, "__skb_checksum_complete" },
	{ 0x3255d536, "ip_tunnel_encap_add_ops" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xe993cf6a, "udp_sock_create4" },
	{ 0xc61ff876, "genlmsg_put" },
	{ 0x944028b6, "udp_set_csum" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c0f2733, "inet_offloads" },
	{ 0x192ec0a4, "inet_protos" },
	{ 0x9e62cb44, "iptunnel_handle_offloads" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip_tunnel,udp_tunnel,ip6_udp_tunnel");

