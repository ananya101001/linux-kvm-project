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

KSYMTAB_DATA(nf_nat_irc_hook, "_gpl", "");

SYMBOL_CRC(nf_nat_irc_hook, 0xccf200ae, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x40dbcb49, "nf_ct_helper_init" },
	{ 0xdf27da0b, "nf_conntrack_helpers_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f21bd3, "nf_conntrack_helpers_unregister" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x754d539c, "strlen" },
	{ 0x1e415c0e, "nf_ct_expect_alloc" },
	{ 0x26b0ff0f, "nf_ct_expect_init" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x89c29bc9, "nf_ct_expect_put" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xaef1bb6, "nf_ct_expect_related_report" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xc219e5b6, "nf_ct_helper_log" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x73108bd5, "param_array_ops" },
	{ 0x1c989125, "param_ops_ushort" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");

