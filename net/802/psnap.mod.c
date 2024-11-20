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

KSYMTAB_FUNC(register_snap_client, "", "");
KSYMTAB_FUNC(unregister_snap_client, "", "");

SYMBOL_CRC(register_snap_client, 0xe612164a, "");
SYMBOL_CRC(unregister_snap_client, 0x570f66e8, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x122c3a7e, "_printk" },
	{ 0x6775c90f, "skb_push" },
	{ 0x3df8b9c2, "llc_build_and_send_ui_pkt" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x11729181, "skb_pull_rcsum" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x42bd4e3c, "llc_sap_close" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x541a86af, "llc_sap_open" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "llc");

