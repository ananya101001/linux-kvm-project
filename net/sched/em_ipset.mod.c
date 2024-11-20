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
	{ 0x37a0cba, "kfree" },
	{ 0xa50c5a22, "ip_set_nfnl_get_byindex" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xcc3cf61e, "tcf_em_unregister" },
	{ 0x87400f82, "skb_pull" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xaa1ae1e9, "ip_set_test" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6775c90f, "skb_push" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7de0a646, "tcf_em_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x7ba2a5b0, "ip_set_nfnl_put" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip_set");

