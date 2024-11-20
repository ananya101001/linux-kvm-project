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

KSYMTAB_FUNC(xfrm6_tunnel_spi_lookup, "", "");
KSYMTAB_FUNC(xfrm6_tunnel_alloc_spi, "", "");

SYMBOL_CRC(xfrm6_tunnel_spi_lookup, 0x8e1e4814, "");
SYMBOL_CRC(xfrm6_tunnel_alloc_spi, 0xb63ca6dc, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6775c90f, "skb_push" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x659ded26, "xfrm_flush_gc" },
	{ 0x42a3a53, "xfrm_state_flush" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3d5aab09, "xfrm6_rcv_spi" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x76bdf2f0, "xfrm_register_type" },
	{ 0x51b137c7, "xfrm6_tunnel_register" },
	{ 0xa7c24025, "xfrm6_tunnel_deregister" },
	{ 0x4c450d1, "xfrm_unregister_type" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "tunnel6");

