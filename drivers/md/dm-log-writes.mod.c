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
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xfb578fc5, "memset" },
	{ 0x405da207, "bio_add_page" },
	{ 0xbf9308e3, "submit_bio" },
	{ 0x69acdf38, "memcpy" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0x1ad7a19c, "dm_table_get_mode" },
	{ 0x8d90836b, "dm_get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xc03f042e, "kthread_create_on_node" },
	{ 0x16d30c75, "wake_up_process" },
	{ 0x6231046, "dm_put_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x754d539c, "strlen" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x585258e2, "kthread_stop" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd3066c24, "dm_per_bio_data" },
	{ 0xec16a055, "bio_associate_blkg" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x736b97bd, "bio_endio" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x392b1fea, "wait_for_completion_io" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xd73653c4, "freezer_active" },
	{ 0xc85970f2, "freezing_slow_path" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd05056f8, "dm_register_target" },
	{ 0x8b914533, "dax_recovery_write" },
	{ 0xec5668f6, "dax_zero_page_range" },
	{ 0x2d609547, "dax_direct_access" },
	{ 0x96848186, "scnprintf" },
	{ 0x2005df16, "dm_unregister_target" },
	{ 0xe2964344, "__wake_up" },
	{ 0x91200d75, "bio_free_pages" },
	{ 0xeff5e7af, "bio_put" },
	{ 0x122c3a7e, "_printk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa6257a2f, "complete" },
	{ 0xed0b2833, "fs_bio_set" },
	{ 0x9737feb5, "bio_alloc_bioset" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");

