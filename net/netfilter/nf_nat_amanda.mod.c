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
	{ 0xc42a8fca, "nf_nat_follow_master" },
	{ 0x942f8e5e, "nf_nat_exp_find_port" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa916b694, "strnlen" },
	{ 0xd890b88d, "nf_nat_mangle_udp_packet" },
	{ 0xc219e5b6, "nf_ct_helper_log" },
	{ 0xf7d5ca7f, "nf_ct_unexpect_related" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x29263903, "nf_nat_helper_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7bbef4cb, "nf_nat_amanda_hook" },
	{ 0x6f343ed4, "nf_nat_helper_register" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_nat,nf_conntrack,nf_conntrack_amanda");
