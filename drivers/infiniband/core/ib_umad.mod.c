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
	{ 0xd2bc5c18, "ib_init_ah_attr_from_wc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x59f0318e, "cdev_device_add" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xca844bc7, "put_device" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xe2045f4c, "ib_register_client" },
	{ 0xf45ef56b, "ib_unregister_mad_agent" },
	{ 0x4e155af0, "ib_response_mad" },
	{ 0x22b5f3da, "ib_post_send_mad" },
	{ 0xaef06f34, "ib_create_send_mad" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0x334284d1, "rdma_destroy_ah_attr" },
	{ 0x98731b78, "ib_set_client_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0xffb7c514, "ida_free" },
	{ 0x6ec0795e, "ib_mad_kernel_rmpp_agent" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x613b1e2e, "ib_is_mad_class_rmpp" },
	{ 0x7a06013, "rdma_create_user_ah" },
	{ 0x5571ca29, "rdma_destroy_ah_user" },
	{ 0xa8ac7686, "ib_free_send_mad" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xb56bcdec, "ib_get_rmpp_segment" },
	{ 0xcc584249, "nonseekable_open" },
	{ 0xd8bb697, "bpf_trace_run3" },
	{ 0xe726acf2, "_dev_notice" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xc13e35bd, "ib_free_recv_mad" },
	{ 0x72b8410a, "stream_open" },
	{ 0xc82640e5, "ib_register_mad_agent" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x4a958e37, "class_register" },
	{ 0x5d64dd4d, "cdev_init" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xbdb50258, "ib_unregister_client" },
	{ 0x787ccc4c, "ib_get_mad_data_offset" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0xf1a86b0f, "cdev_device_del" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xcf2a6966, "up" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xa1c49bf0, "ib_modify_port" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd8ad6985, "rdma_dev_access_netns" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ib_core");
