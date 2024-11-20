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
	{ 0x926ca7b7, "vm_event_states" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x377214d3, "seq_printf" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x686a1b5, "__free_pages" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xab3cd57b, "balloon_page_list_dequeue" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x53b954a2, "up_read" },
	{ 0xacb0f234, "shrinker_free" },
	{ 0x5e949e0a, "vmci_doorbell_destroy" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb912560d, "static_key_disable" },
	{ 0x776a50a2, "debugfs_lookup_and_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0x28849f01, "__ClearPageMovable" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xb5f4750d, "__put_devmap_managed_folio_refs" },
	{ 0xde4d5a92, "balloon_mops" },
	{ 0xdeebbe29, "__SetPageMovable" },
	{ 0x94c1bfc3, "__folio_put" },
	{ 0x668b19a1, "down_read" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x89202aa2, "split_page" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xb572e830, "vmci_doorbell_create" },
	{ 0x3cc87e00, "balloon_page_alloc" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xc520b851, "seq_lseek" },
	{ 0x5c4440b5, "seq_read" },
	{ 0xd4f9fdc4, "single_release" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x50472d9a, "single_open" },
	{ 0x29ad8e33, "x86_hyper_type" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x51cd0202, "debugfs_create_file" },
	{ 0x8cfdcc81, "shrinker_alloc" },
	{ 0x2c3368b2, "shrinker_register" },
	{ 0xf8bb717, "balloon_page_list_enqueue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "vmw_vmci");

