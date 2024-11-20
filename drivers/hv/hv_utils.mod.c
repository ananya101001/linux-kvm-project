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
	{ 0xe8bc40c5, "cn_netlink_send" },
	{ 0xf818ae8e, "kobject_uevent_env" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4f9e213f, "vmbus_open" },
	{ 0xbbff2fb6, "ptp_clock_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xea43f98d, "misc_register" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x905d0ff9, "ptp_clock_unregister" },
	{ 0x7483e13, "cn_del_callback" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xe2eaa621, "__vmbus_driver_register" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xec096b0, "hv_read_reference_counter" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x794b7271, "orderly_reboot" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x180a8b1d, "cn_add_callback" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x16dbe47e, "vmbus_driver_unregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7a95e5ae, "do_settimeofday64" },
	{ 0x92f96652, "vmbus_sendpacket" },
	{ 0x321055cb, "vmbus_prep_negotiate_resp" },
	{ 0xa2f7487f, "hv_is_hibernation_supported" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x49a5f7d6, "vmbus_close" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x793144fa, "vmbus_recvpacket" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x56256e8a, "orderly_poweroff" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xa916b694, "strnlen" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "hv_vmbus,ptp");

MODULE_ALIAS("vmbus:31600b0e13523449818b38d90ced39db");
MODULE_ALIAS("vmbus:30e62795aed07b49adcee80ab0175caf");
MODULE_ALIAS("vmbus:394f16571591784eab55382f3bd5422d");
MODULE_ALIAS("vmbus:e7f4a0a9455a964db8278a841e8c03e6");
MODULE_ALIAS("vmbus:292efa3523ea364296ae3a6ebacba440");
