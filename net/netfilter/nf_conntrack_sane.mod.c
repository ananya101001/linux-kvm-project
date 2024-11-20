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
	{ 0xdf27da0b, "nf_conntrack_helpers_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5f21bd3, "nf_conntrack_helpers_unregister" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x1e415c0e, "nf_ct_expect_alloc" },
	{ 0x26b0ff0f, "nf_ct_expect_init" },
	{ 0xaef1bb6, "nf_ct_expect_related_report" },
	{ 0x89c29bc9, "nf_ct_expect_put" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xc219e5b6, "nf_ct_helper_log" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x73108bd5, "param_array_ops" },
	{ 0x1c989125, "param_ops_ushort" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x40dbcb49, "nf_ct_helper_init" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");

