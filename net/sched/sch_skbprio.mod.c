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
	{ 0x799b7b46, "register_qdisc" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x49efda31, "gnet_stats_copy_queue" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");
