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
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9feed7ce, "timer_reduce" },
	{ 0x524f4523, "dm_submit_bio_remap" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xd3066c24, "dm_per_bio_data" },
	{ 0xec16a055, "bio_associate_blkg" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x16d30c75, "wake_up_process" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6231046, "dm_put_device" },
	{ 0x585258e2, "kthread_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x1000e51, "schedule" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1ad7a19c, "dm_table_get_mode" },
	{ 0x8d90836b, "dm_get_device" },
	{ 0x2005df16, "dm_unregister_target" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc03f042e, "kthread_create_on_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x122c3a7e, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd05056f8, "dm_register_target" },
	{ 0x96848186, "scnprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe0633887, "dm_bio_from_per_bio_data" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");

