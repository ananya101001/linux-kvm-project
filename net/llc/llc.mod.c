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

KSYMTAB_DATA(llc_sap_list, "", "");
KSYMTAB_FUNC(llc_sap_find, "", "");
KSYMTAB_FUNC(llc_sap_open, "", "");
KSYMTAB_FUNC(llc_sap_close, "", "");
KSYMTAB_FUNC(llc_add_pack, "", "");
KSYMTAB_FUNC(llc_remove_pack, "", "");
KSYMTAB_FUNC(llc_set_station_handler, "", "");
KSYMTAB_FUNC(llc_mac_hdr_init, "", "");
KSYMTAB_FUNC(llc_build_and_send_ui_pkt, "", "");

SYMBOL_CRC(llc_sap_list, 0x52d7b2fd, "");
SYMBOL_CRC(llc_sap_find, 0xcb3af735, "");
SYMBOL_CRC(llc_sap_open, 0x541a86af, "");
SYMBOL_CRC(llc_sap_close, 0x42bd4e3c, "");
SYMBOL_CRC(llc_add_pack, 0x074185eb, "");
SYMBOL_CRC(llc_remove_pack, 0x38b92846, "");
SYMBOL_CRC(llc_set_station_handler, 0x5ccf4f21, "");
SYMBOL_CRC(llc_mac_hdr_init, 0x1b8d3761, "");
SYMBOL_CRC(llc_build_and_send_ui_pkt, 0x3df8b9c2, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe065f55b, "consume_skb" },
	{ 0x3cab8e4a, "dev_add_pack" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x87400f82, "skb_pull" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xb64d2547, "dev_remove_pack" },
	{ 0x6775c90f, "skb_push" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xa542eb90, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x67d19474, "pskb_trim_rcsum_slow" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

