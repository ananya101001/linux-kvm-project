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
	{ 0x754d539c, "strlen" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xbeccb9c6, "dev_fill_forward_path" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x63db0b8c, "neigh_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa9c64adf, "nf_route" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xf04a650c, "dst_release" },
	{ 0x709c7c33, "flow_offload_alloc" },
	{ 0xeb10a186, "flow_offload_route_init" },
	{ 0x1ab7a4ad, "flow_offload_add" },
	{ 0xe4cfe12c, "flow_offload_free" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xf274816b, "nft_register_expr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf0565d17, "nft_chain_validate_hooks" },
	{ 0x26040007, "nf_ct_netns_put" },
	{ 0x456d127a, "nf_tables_deactivate_flowtable" },
	{ 0xa768c55f, "nft_flowtable_lookup" },
	{ 0x7affc372, "nf_ct_netns_get" },
	{ 0xa05ed640, "nf_flow_table_cleanup" },
	{ 0x41746749, "nft_unregister_expr" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_flow_table,nf_tables,nf_conntrack");

