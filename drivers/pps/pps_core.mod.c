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

KSYMTAB_FUNC(pps_lookup_dev, "", "");
KSYMTAB_FUNC(pps_register_source, "", "");
KSYMTAB_FUNC(pps_unregister_source, "", "");
KSYMTAB_FUNC(pps_event, "", "");

SYMBOL_CRC(pps_lookup_dev, 0x5ddc7d95, "");
SYMBOL_CRC(pps_register_source, 0x17092ff0, "");
SYMBOL_CRC(pps_unregister_source, 0x00498233, "");
SYMBOL_CRC(pps_event, 0xaa29a62f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x5a549f7, "_dev_info" },
	{ 0xc6cbbc89, "capable" },
	{ 0x30149b9, "cdev_add" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5d480ef3, "device_create" },
	{ 0xc101b80e, "class_create" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3403f878, "fasync_helper" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x50785e75, "device_destroy" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x5d64dd4d, "cdev_init" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x968f7967, "kobject_get" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xce767f9d, "cdev_del" },
	{ 0x7ab30f45, "kobject_put" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa23d56ab, "kill_fasync" },
	{ 0x8d8eecb1, "class_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

