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
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8062cdde, "serio_unregister_driver" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3131271a, "get_device" },
	{ 0xb321dd2b, "serio_open" },
	{ 0x6d16c104, "mutex_lock_killable" },
	{ 0xea43f98d, "misc_register" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x10b9b24e, "serio_close" },
	{ 0xca844bc7, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2a71977a, "noop_llseek" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x9e5feb3f, "__serio_register_driver" },
	{ 0xa23d56ab, "kill_fasync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x3403f878, "fasync_helper" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty06pr*id*ex*");
