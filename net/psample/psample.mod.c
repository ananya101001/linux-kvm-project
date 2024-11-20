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

KSYMTAB_FUNC(psample_group_get, "_gpl", "");
KSYMTAB_FUNC(psample_group_take, "_gpl", "");
KSYMTAB_FUNC(psample_group_put, "_gpl", "");
KSYMTAB_FUNC(psample_sample_packet, "_gpl", "");

SYMBOL_CRC(psample_group_get, 0xd0f144cf, "_gpl");
SYMBOL_CRC(psample_group_take, 0x76c40191, "_gpl");
SYMBOL_CRC(psample_group_put, 0xf904a546, "_gpl");
SYMBOL_CRC(psample_sample_packet, 0x1d111b09, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3facf125, "genl_register_family" },
	{ 0x67041673, "genl_unregister_family" },
	{ 0xc61ff876, "genlmsg_put" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xbc431e3c, "netlink_broadcast_filtered" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x99a033d8, "netlink_has_listeners" },
	{ 0x3f178e25, "nla_put_64bit" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xd6625cfb, "skb_put" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x122c3a7e, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

