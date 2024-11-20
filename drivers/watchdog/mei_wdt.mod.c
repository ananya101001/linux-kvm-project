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
	{ 0xa5f17a9a, "watchdog_register_device" },
	{ 0x96848186, "scnprintf" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3d13fd0d, "mei_cldev_driver_unregister" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xd2fd19ed, "mei_cldev_ver" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x73b42c24, "mei_cldev_set_drvdata" },
	{ 0xaa194141, "mei_cldev_enable" },
	{ 0xcb6ef1ca, "mei_cldev_register_rx_cb" },
	{ 0x8e107b79, "mei_cldev_register_notif_cb" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x8b0ac9d7, "debugfs_create_dir" },
	{ 0x51cd0202, "debugfs_create_file" },
	{ 0x96d779ba, "mei_cldev_send" },
	{ 0xbe00fa94, "mei_cldev_recv" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x20463df4, "wait_for_completion_killable" },
	{ 0x3e0f9d5b, "generic_file_llseek" },
	{ 0x86de2938, "simple_open" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x1a2b31e5, "__mei_cldev_driver_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc83ce30b, "watchdog_unregister_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8529f9da, "mei_cldev_get_drvdata" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb15df04e, "mei_cldev_disable" },
	{ 0x8656f320, "debugfs_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0xa6257a2f, "complete" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "watchdog,mei");

MODULE_ALIAS("mei:*:05b79a6f-4628-4d7f-899d-a91514cb32ab:*:*");
