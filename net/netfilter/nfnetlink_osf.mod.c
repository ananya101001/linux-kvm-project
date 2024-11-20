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

KSYMTAB_DATA(nf_osf_fingers, "_gpl", "");
KSYMTAB_FUNC(nf_osf_match, "_gpl", "");
KSYMTAB_FUNC(nf_osf_find, "_gpl", "");

SYMBOL_CRC(nf_osf_fingers, 0x35eff5e0, "_gpl");
SYMBOL_CRC(nf_osf_match, 0xa2e01def, "_gpl");
SYMBOL_CRC(nf_osf_find, 0x5429356b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x122c3a7e, "_printk" },
	{ 0xc6cbbc89, "capable" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xa07a37f0, "memchr" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x37a0cba, "kfree" },
	{ 0xa84b4980, "nfnetlink_subsys_unregister" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcb57f3e2, "nf_log_packet" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x53f84745, "nfnetlink_subsys_register" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");

