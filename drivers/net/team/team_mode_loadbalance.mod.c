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
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x9cd24fb5, "team_options_unregister" },
	{ 0x9685ea8b, "bpf_prog_destroy" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xf4d50f3e, "bpf_prog_create" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x96d32a35, "team_mode_register" },
	{ 0x18f0d616, "team_option_inst_set_change" },
	{ 0x5371510f, "team_options_change_check" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa218d0e8, "team_options_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b5b320f, "team_mode_unregister" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x70f3d0e7, "netpoll_send_skb" },
	{ 0x1c8d9b8e, "dev_kfree_skb_any_reason" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "team");

