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

KSYMTAB_DATA(nf_nat_pptp_hook, "_gpl", "");
KSYMTAB_FUNC(pptp_msg_name, "", "");

SYMBOL_CRC(nf_nat_pptp_hook, 0x41ef9576, "_gpl");
SYMBOL_CRC(pptp_msg_name, 0xf2a36612, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460ec0f, "nf_ct_invert_tuple" },
	{ 0xff2d2bc2, "nf_ct_expect_find_get" },
	{ 0xf7d5ca7f, "nf_ct_unexpect_related" },
	{ 0x89c29bc9, "nf_ct_expect_put" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x979a7de0, "nf_conntrack_helper_unregister" },
	{ 0xc96de9a1, "nf_conntrack_find_get" },
	{ 0xcef44666, "nf_ct_delete" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1e415c0e, "nf_ct_expect_alloc" },
	{ 0x26b0ff0f, "nf_ct_expect_init" },
	{ 0xaef1bb6, "nf_ct_expect_related_report" },
	{ 0xebc5116a, "nf_ct_gre_keymap_add" },
	{ 0x17a51546, "nf_ct_gre_keymap_destroy" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x49efa1d8, "nf_ct_ext_add" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf6f05b8, "nf_conntrack_helper_register" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");

