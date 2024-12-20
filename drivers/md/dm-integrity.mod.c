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
	{ 0x56470118, "__warn_printk" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe2964344, "__wake_up" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x686a1b5, "__free_pages" },
	{ 0xec16a055, "bio_associate_blkg" },
	{ 0xce4c71ae, "bio_integrity_alloc" },
	{ 0xf0d07543, "bio_integrity_add_page" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0x556e59b4, "dm_accept_partial_bio" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0xb35ee0d2, "bioset_exit" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x6231046, "dm_put_device" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x1469d74b, "dm_audit_log_ti" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x3c18af0b, "dm_audit_log_bio" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xa3f8266f, "submit_bio_noacct" },
	{ 0x392b1fea, "wait_for_completion_io" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x9737feb5, "bio_alloc_bioset" },
	{ 0x405da207, "bio_add_page" },
	{ 0xac859f6f, "submit_bio_wait" },
	{ 0xeff5e7af, "bio_put" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x9da9be5f, "crypto_alloc_skcipher" },
	{ 0xfc90e0b, "crypto_skcipher_setkey" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x9c37991a, "crypto_shash_digest" },
	{ 0x2c4f2e35, "__vmalloc_noprof" },
	{ 0xad5edc75, "dm_post_suspending" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x999e8297, "vfree" },
	{ 0xdfccba41, "__bio_add_page" },
	{ 0x9c5bad96, "blk_start_plug" },
	{ 0xc9a3422d, "dm_bufio_write_dirty_buffers_async" },
	{ 0x5b05cc9b, "blk_finish_plug" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0xfa9d1332, "async_xor" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1ad7a19c, "dm_table_get_mode" },
	{ 0x8d90836b, "dm_get_device" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x39c74235, "dm_read_arg_group" },
	{ 0x7d27e504, "dm_shift_arg" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xf2d95916, "mempool_init_noprof" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x896c3e8, "alloc_pages_exact_noprof" },
	{ 0x94601fc4, "bioset_init" },
	{ 0x3644e880, "bioset_integrity_create" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe83039cc, "dm_bufio_client_create" },
	{ 0xed3283a4, "dm_bufio_set_sector_offset" },
	{ 0x44a8d9bd, "dm_set_target_max_io_len" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x96848186, "scnprintf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0xa6257a2f, "complete" },
	{ 0x8f877fbc, "crypto_skcipher_encrypt" },
	{ 0x5f351b39, "crypto_skcipher_decrypt" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x16d30c75, "wake_up_process" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x6a2f40e1, "dm_bufio_mark_partial_buffer_dirty" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa82b2066, "dm_bufio_write_dirty_buffers" },
	{ 0x867e87eb, "dm_bufio_get_dm_io_client" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc04f99e, "dm_io" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe0633887, "dm_bio_from_per_bio_data" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x736b97bd, "bio_endio" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x349cba85, "strchr" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x754d539c, "strlen" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xe2d055b4, "crypto_alloc_shash" },
	{ 0x79e7db83, "crypto_shash_setkey" },
	{ 0x2005df16, "dm_unregister_target" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0xd05056f8, "dm_register_target" },
	{ 0x33b84f74, "copy_page" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe8718264, "crypto_shash_update" },
	{ 0xc90fd15, "crypto_shash_final" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xfb578fc5, "memset" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf8835fbf, "__bio_advance" },
	{ 0xd3066c24, "dm_per_bio_data" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "dm-mod,dm-bufio,async_xor");

