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
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x72b8410a, "stream_open" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc0ff21c1, "input_get_new_minor" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0x3131271a, "get_device" },
	{ 0x45bd01e4, "input_class" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0x2583b583, "input_register_handle" },
	{ 0x5d64dd4d, "cdev_init" },
	{ 0x59f0318e, "cdev_device_add" },
	{ 0x5e03fc33, "input_unregister_handle" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf1a86b0f, "cdev_device_del" },
	{ 0x7973cadd, "input_unregister_handler" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x2b01cca4, "input_register_handler" },
	{ 0xea43f98d, "misc_register" },
	{ 0x2a71977a, "noop_llseek" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb2bee292, "input_close_device" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xa6d72a37, "input_open_device" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa23d56ab, "kill_fasync" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe2964344, "__wake_up" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3403f878, "fasync_helper" },
	{ 0xca844bc7, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*1,*2,*k*110,*r*0,*1,*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*2,*k*r*8,*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*3,*k*14A,*r*a*0,*1,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*3,*k*145,*r*a*0,*1,*18,*1C,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*3,*k*110,*r*a*0,*1,*m*l*s*f*w*");
