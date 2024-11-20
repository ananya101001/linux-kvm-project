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
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe7c313c2, "ip_set_type_unregister" },
	{ 0x51eb731, "ip_set_del" },
	{ 0xd31b0404, "ip_set_add" },
	{ 0xaa1ae1e9, "ip_set_test" },
	{ 0x13cb688, "ip_set_match_extensions" },
	{ 0x401dac22, "ip_set_elem_len" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x67c2e97a, "ip_set_extensions" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x2f11553c, "ip_set_name_byindex" },
	{ 0xa916b694, "strnlen" },
	{ 0x559874d6, "ip_set_put_extensions" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x24371fef, "ip_set_put_flags" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2ff79130, "ip_set_type_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xfd7680b5, "ip_set_put_byindex" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x426df15e, "ip_set_init_comment" },
	{ 0x665129e5, "ip_set_get_extensions" },
	{ 0x6b3fbb7f, "ip_set_get_byname" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip_set");

