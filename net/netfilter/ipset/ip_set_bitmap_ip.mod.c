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
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfb578fc5, "memset" },
	{ 0x397f6231, "ip_set_free" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x24d273d1, "add_timer" },
	{ 0xa293f8a6, "ip_set_get_ipaddr4" },
	{ 0x665129e5, "ip_set_get_extensions" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x559874d6, "ip_set_put_extensions" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x401dac22, "ip_set_elem_len" },
	{ 0xf3b4d4ae, "ip_set_alloc" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x24371fef, "ip_set_put_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2ff79130, "ip_set_type_register" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x7924b6de, "ip_set_hostmask_map" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe7c313c2, "ip_set_type_unregister" },
	{ 0x13cb688, "ip_set_match_extensions" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x426df15e, "ip_set_init_comment" },
	{ 0x67c2e97a, "ip_set_extensions" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip_set");
