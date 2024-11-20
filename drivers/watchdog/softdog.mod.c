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
	{ 0x7f1fd79f, "module_put" },
	{ 0x3c96fa2f, "hrtimer_active" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0xe893d918, "__module_get" },
	{ 0xc83ce30b, "watchdog_unregister_device" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf1e046cc, "panic" },
	{ 0x1754c363, "watchdog_init_timeout" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0xa5f17a9a, "watchdog_register_device" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xee3f884, "param_ops_charp" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc03f042e, "kthread_create_on_node" },
	{ 0x16d30c75, "wake_up_process" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "watchdog");

