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
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5adc2807, "btracker_destroy" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x131c7293, "dm_cache_policy_register" },
	{ 0x481a0b15, "btracker_create" },
	{ 0x999e8297, "vfree" },
	{ 0xa2365f44, "btracker_issue" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xefbca4c, "btracker_promotion_already_present" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x87bee547, "btracker_queue" },
	{ 0xc473ecee, "dm_cache_policy_unregister" },
	{ 0xa7eadcb5, "btracker_complete" },
	{ 0x96848186, "scnprintf" },
	{ 0x1c852cab, "btracker_nr_demotions_queued" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "dm-cache");

