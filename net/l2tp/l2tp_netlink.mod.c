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

KSYMTAB_FUNC(l2tp_nl_register_ops, "_gpl", "");
KSYMTAB_FUNC(l2tp_nl_unregister_ops, "_gpl", "");

SYMBOL_CRC(l2tp_nl_register_ops, 0x0ff3d80f, "_gpl");
SYMBOL_CRC(l2tp_nl_unregister_ops, 0x337f2432, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x36cd5f26, "nla_put" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xa916b694, "strnlen" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x88ddfabb, "l2tp_session_get_next" },
	{ 0x4c7ece16, "l2tp_session_put" },
	{ 0xd231a7ba, "l2tp_tunnel_get_next" },
	{ 0xd47d7b65, "genlmsg_multicast_allns" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x53c03974, "l2tp_tunnel_create" },
	{ 0x85c197eb, "l2tp_tunnel_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd3da9b73, "l2tp_tunnel_delete" },
	{ 0x2e1106ad, "l2tp_session_set_header_len" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2b9da7a4, "genl_lock" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3facf125, "genl_register_family" },
	{ 0x7ce10166, "l2tp_session_get_by_ifname" },
	{ 0xc089404b, "l2tp_tunnel_get" },
	{ 0xbdd5686d, "l2tp_session_get" },
	{ 0xbf78f9ac, "l2tp_tunnel_put" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xc61ff876, "genlmsg_put" },
	{ 0xe8255b35, "netlink_unicast" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x67041673, "genl_unregister_family" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "843C84BD4D01A26590216F5");
