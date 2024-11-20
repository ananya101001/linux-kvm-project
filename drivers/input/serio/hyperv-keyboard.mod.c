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
	{ 0x496c992e, "hv_pkt_iter_close" },
	{ 0xa6257a2f, "complete" },
	{ 0x5562e61a, "serio_interrupt" },
	{ 0x84cf457b, "pm_wakeup_dev_event" },
	{ 0x92f96652, "vmbus_sendpacket" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x4f9e213f, "vmbus_open" },
	{ 0x49a5f7d6, "vmbus_close" },
	{ 0xbcd8a790, "serio_unregister_port" },
	{ 0x37a0cba, "kfree" },
	{ 0x16dbe47e, "vmbus_driver_unregister" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x4040ae5f, "__serio_register_port" },
	{ 0x3270b058, "device_set_wakeup_capable" },
	{ 0x221be355, "device_wakeup_enable" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe2eaa621, "__vmbus_driver_register" },
	{ 0xbb147492, "hv_pkt_iter_first" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x3044a9b3, "__hv_pkt_iter_next" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "hv_vmbus");

MODULE_ALIAS("vmbus:6dad12f9172bea48bd65f927a61c7684");
