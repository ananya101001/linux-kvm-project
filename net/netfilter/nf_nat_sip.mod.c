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
	{ 0x72260330, "nf_ct_seqadj_set" },
	{ 0x29263903, "nf_nat_helper_unregister" },
	{ 0xdfdde0a9, "nf_ct_helper_expectfn_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x75a76cee, "ct_sip_parse_header_uri" },
	{ 0x86c53895, "nf_nat_setup_info" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x942f8e5e, "nf_nat_exp_find_port" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xa54345bb, "ct_sip_parse_address_param" },
	{ 0x73e569c5, "ct_sip_parse_request" },
	{ 0x2aa90f1f, "ct_sip_parse_numerical_param" },
	{ 0xb8efc77a, "skb_ensure_writable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x80138c46, "nf_nat_sip_hooks" },
	{ 0x6f343ed4, "nf_nat_helper_register" },
	{ 0xab4922c1, "nf_ct_helper_expectfn_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd890b88d, "nf_nat_mangle_udp_packet" },
	{ 0xe98b4a3c, "__nf_nat_mangle_tcp_packet" },
	{ 0x6bacb24, "ct_sip_get_sdp_header" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7c5f996f, "ct_sip_get_header" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xaef1bb6, "nf_ct_expect_related_report" },
	{ 0xf7d5ca7f, "nf_ct_unexpect_related" },
	{ 0xc219e5b6, "nf_ct_helper_log" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_sip,nf_nat");

