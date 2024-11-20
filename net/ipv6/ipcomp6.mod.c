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
	{ 0x4c450d1, "xfrm_unregister_type" },
	{ 0x638b7fff, "xfrm6_protocol_deregister" },
	{ 0xd5f3fb2f, "ipcomp_init_state" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x8e1e4814, "xfrm6_tunnel_spi_lookup" },
	{ 0x98942be5, "xfrm_state_lookup" },
	{ 0x60c1ad03, "xfrm_state_alloc" },
	{ 0xb63ca6dc, "xfrm6_tunnel_alloc_spi" },
	{ 0x1112d318, "xfrm_init_state" },
	{ 0x8accfb25, "xfrm_state_insert" },
	{ 0xaecd4a1b, "__xfrm_state_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0x15a0849c, "ip6_update_pmtu" },
	{ 0xc53add22, "ip6_redirect" },
	{ 0x39b0d0ba, "xfrm6_rcv" },
	{ 0x2c15205, "xfrm_input" },
	{ 0x6eb7cd9c, "ipcomp_destroy" },
	{ 0x6e89322a, "ipcomp_input" },
	{ 0xdd766180, "ipcomp_output" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x76bdf2f0, "xfrm_register_type" },
	{ 0x75a81d11, "xfrm6_protocol_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "xfrm_ipcomp,xfrm6_tunnel");

