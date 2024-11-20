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
	{ 0xc6f46339, "init_timer_key" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x13cb688, "ip_set_match_extensions" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x426df15e, "ip_set_init_comment" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2ff79130, "ip_set_type_register" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x9e98722b, "ip_set_get_ipaddr6" },
	{ 0x665129e5, "ip_set_get_extensions" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xa293f8a6, "ip_set_get_ipaddr4" },
	{ 0xe7c313c2, "ip_set_type_unregister" },
	{ 0x67c2e97a, "ip_set_extensions" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x397f6231, "ip_set_free" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x559874d6, "ip_set_put_extensions" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x122c3a7e, "_printk" },
	{ 0x24371fef, "ip_set_put_flags" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xf3b4d4ae, "ip_set_alloc" },
	{ 0x401dac22, "ip_set_elem_len" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ip_set");

