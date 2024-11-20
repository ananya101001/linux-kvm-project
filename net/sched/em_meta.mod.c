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
	{ 0xe5497da, "__skb_get_hash_net" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0xa916b694, "strnlen" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xcc3cf61e, "tcf_em_unregister" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf1e98c74, "avenrun" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7de0a646, "tcf_em_register" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

