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
	{ 0x157a61ce, "nf_ct_nat_ext_add" },
	{ 0xff2d2bc2, "nf_ct_expect_find_get" },
	{ 0xf7d5ca7f, "nf_ct_unexpect_related" },
	{ 0x89c29bc9, "nf_ct_expect_put" },
	{ 0x86c53895, "nf_nat_setup_info" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe98b4a3c, "__nf_nat_mangle_tcp_packet" },
	{ 0xf2a36612, "pptp_msg_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x41ef9576, "nf_nat_pptp_hook" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_nat,nf_conntrack,nf_conntrack_pptp");

