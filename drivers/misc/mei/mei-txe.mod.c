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
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xeba8abe7, "pcim_iomap_regions" },
	{ 0xcc749cdf, "mei_stop" },
	{ 0xd550d3f5, "mei_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa8cd646d, "pci_enable_msi" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xb72e7d4e, "pci_set_master" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4dd6399b, "__SCK__tp_func_mei_pci_cfg_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x803aaa78, "mei_irq_compl_handler" },
	{ 0xdfacbedc, "mei_restart" },
	{ 0xe1779b47, "dma_set_mask" },
	{ 0x86ea273d, "__tracepoint_mei_pci_cfg_read" },
	{ 0x6c8ac046, "pcim_iomap_table" },
	{ 0x55db1940, "__pm_runtime_suspend" },
	{ 0xf413b4e1, "__pm_runtime_use_autosuspend" },
	{ 0xdfb1cc52, "mei_device_init" },
	{ 0xf0388734, "mei_write_is_idle" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x93933b99, "pcim_enable_device" },
	{ 0x284b6bc0, "mei_irq_write_handler" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x14dc7949, "__SCT__tp_func_mei_pci_cfg_read" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa657b9ac, "dev_pm_domain_set" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5d4810e0, "pm_runtime_set_autosuspend_delay" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x90a24af4, "mei_fw_status2str" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0xeb5f167, "pci_disable_msi" },
	{ 0x62413648, "mei_start" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3be2ccd0, "pci_read_config_dword" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x31b164e7, "__pm_runtime_set_status" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9e27f5fe, "mei_deregister" },
	{ 0x7260a168, "mei_cancel_work" },
	{ 0xdc5b7013, "mei_irq_read_handler" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("pci:v00008086d00000F18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002298sv*sd*bc*sc*i*");
