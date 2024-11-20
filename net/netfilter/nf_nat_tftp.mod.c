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
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x29263903, "nf_nat_helper_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc42a8fca, "nf_nat_follow_master" },
	{ 0xaef1bb6, "nf_ct_expect_related_report" },
	{ 0xc219e5b6, "nf_ct_helper_log" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xee23ba71, "nf_nat_tftp_hook" },
	{ 0x6f343ed4, "nf_nat_helper_register" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nf_nat,nf_conntrack_tftp");

