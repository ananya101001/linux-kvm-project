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
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xeec9a487, "_copy_from_iter" },
	{ 0xfc9f808c, "vsock_create_connected" },
	{ 0x22bb84d, "vsock_assign_transport" },
	{ 0x54a0e992, "iov_iter_revert" },
	{ 0x3044a9b3, "__hv_pkt_iter_next" },
	{ 0xa1395cb6, "vmbus_hvsock_device_unregister" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xdb579ef1, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x16dbe47e, "vmbus_driver_unregister" },
	{ 0x594dfab3, "vsock_enqueue_accept" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x639ccacd, "_copy_to_iter" },
	{ 0xe5e4d6d2, "vsock_insert_connected" },
	{ 0x4b2210b8, "vmbus_send_tl_connect_request" },
	{ 0xf662c096, "vsock_remove_sock" },
	{ 0x92f96652, "vmbus_sendpacket" },
	{ 0xbb147492, "hv_pkt_iter_first" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x49a5f7d6, "vmbus_close" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6e05851a, "vsock_find_bound_socket" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x3d4b0fca, "vsock_addr_init" },
	{ 0x4f9e213f, "vmbus_open" },
	{ 0x98a94a64, "sk_free" },
	{ 0x27ae3002, "vsock_core_unregister" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0x8687ecdb, "vsock_stream_has_data" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf1171311, "vsock_core_register" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x496c992e, "hv_pkt_iter_close" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x526291f, "vmbus_set_chn_rescind_callback" },
	{ 0xe2eaa621, "__vmbus_driver_register" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "vsock,hv_vmbus");


MODULE_INFO(srcversion, "DAD8F481A06983AE3DFBDD6");
