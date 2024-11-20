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
	{ 0xa39a5fbf, "target_unregister_template" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0xa916b694, "strnlen" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x4688b975, "target_setup_session" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0xf95fd438, "__root_device_register" },
	{ 0xa83a27a3, "bus_register" },
	{ 0x972052ee, "driver_register" },
	{ 0xaf4438db, "target_register_template" },
	{ 0x42dde25a, "target_init_cmd" },
	{ 0xdde2d203, "target_submit_prep" },
	{ 0xbe870214, "target_submit" },
	{ 0x6e96bbd6, "scmd_printk" },
	{ 0x3cb5f497, "scsi_change_queue_depth" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfa21f077, "core_allocate_nexus_loss_ua" },
	{ 0xb7631ab6, "target_remove_session" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xaef41929, "scsi_device_lookup" },
	{ 0x4d0bac1, "scsi_remove_device" },
	{ 0x8ffb42d6, "scsi_device_put" },
	{ 0xc67c7580, "scsi_add_device" },
	{ 0xc6f557c4, "core_tpg_deregister" },
	{ 0x7c1142df, "core_tpg_register" },
	{ 0xdedf4785, "device_unregister" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x754d539c, "strlen" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0x3d4155c2, "device_register" },
	{ 0xca844bc7, "put_device" },
	{ 0xa4c8accd, "scsi_remove_host" },
	{ 0x72705ca2, "scsi_host_put" },
	{ 0x3d1a1b7b, "seq_write" },
	{ 0xc8817ac9, "kmem_cache_alloc_noprof" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1f65cf87, "target_submit_tmr" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x89e6c49b, "target_put_sess_cmd" },
	{ 0xb609162e, "kmem_cache_free" },
	{ 0xecbb1768, "scsi_done" },
	{ 0x7b1a0218, "scsi_host_alloc" },
	{ 0x483e46cf, "scsi_add_host_with_dma" },
	{ 0xa6257a2f, "complete" },
	{ 0x918373b5, "target_execute_cmd" },
	{ 0x12429fcd, "transport_generic_free_cmd" },
	{ 0x6aae782e, "driver_unregister" },
	{ 0xb5228f1a, "bus_unregister" },
	{ 0x5503b9a4, "root_device_unregister" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "target_core_mod,scsi_mod");

