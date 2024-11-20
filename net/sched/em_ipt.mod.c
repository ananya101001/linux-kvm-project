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
	{ 0x130d877c, "xt_check_match" },
	{ 0xcc3cf61e, "tcf_em_unregister" },
	{ 0xa916b694, "strnlen" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0xf1ecff4c, "xt_request_find_match" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7de0a646, "tcf_em_register" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "x_tables");

