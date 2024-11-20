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
	{ 0x799b7b46, "register_qdisc" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0x618a6459, "mini_qdisc_pair_swap" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x2c3054f9, "net_inc_ingress_queue" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3b0b170, "mini_qdisc_pair_init" },
	{ 0xb7447df2, "tcf_block_get_ext" },
	{ 0xc12e7c0a, "mini_qdisc_pair_block_init" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7be6905, "net_inc_egress_queue" },
	{ 0xb299ceb7, "tcf_block_put_ext" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x46013233, "net_dec_ingress_queue" },
	{ 0x86f85114, "net_dec_egress_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

