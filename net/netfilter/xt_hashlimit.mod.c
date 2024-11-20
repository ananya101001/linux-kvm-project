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
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xab3fc466, "remove_proc_entry" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x999e8297, "vfree" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0x241cd204, "proc_mkdir" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xfb578fc5, "memset" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x1e9a8fad, "proc_create_seq_private" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe6f295a9, "ipv6_skip_exthdr" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x37a0cba, "kfree" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x377214d3, "seq_printf" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2e62920b, "xt_unregister_matches" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0xb99fd232, "xt_register_matches" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "x_tables");

