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

KSYMTAB_FUNC(hwrng_register, "_gpl", "");
KSYMTAB_FUNC(hwrng_unregister, "_gpl", "");
KSYMTAB_FUNC(devm_hwrng_register, "_gpl", "");
KSYMTAB_FUNC(devm_hwrng_unregister, "_gpl", "");
KSYMTAB_FUNC(hwrng_msleep, "_gpl", "");
KSYMTAB_FUNC(hwrng_yield, "_gpl", "");

SYMBOL_CRC(hwrng_register, 0xe0c4e14d, "_gpl");
SYMBOL_CRC(hwrng_unregister, 0xd0fd7085, "_gpl");
SYMBOL_CRC(devm_hwrng_register, 0x92a6e689, "_gpl");
SYMBOL_CRC(devm_hwrng_unregister, 0xcf101d02, "_gpl");
SYMBOL_CRC(hwrng_msleep, 0x4bfd398d, "_gpl");
SYMBOL_CRC(hwrng_yield, 0x5b071b7b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe783e261, "sysfs_emit" },
	{ 0x16d30c75, "wake_up_process" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2943dfc5, "devres_release" },
	{ 0xa916b694, "strnlen" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x2a71977a, "noop_llseek" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbe5b632e, "__devres_alloc_node" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x585258e2, "kthread_stop" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xea43f98d, "misc_register" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xc64fd66a, "add_hwgenerator_randomness" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc03f042e, "kthread_create_on_node" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x754d539c, "strlen" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1c989125, "param_ops_ushort" },
	{ 0xa6257a2f, "complete" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf401d1a8, "devres_add" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

