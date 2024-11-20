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
	{ 0x99f39293, "virtqueue_add_inbuf" },
	{ 0x894f890d, "virtqueue_kick" },
	{ 0xee3e0d71, "input_unregister_device" },
	{ 0xacd1b37, "virtio_reset_device" },
	{ 0xefceedf8, "virtqueue_detach_unused_buf" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x3fa92fa0, "unregister_virtio_driver" },
	{ 0x7e9de5c, "virtqueue_get_vring_size" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x85ed6502, "virtqueue_add_outbuf" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x9a22b9fd, "input_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x73c63720, "input_set_abs_params" },
	{ 0xeaa0093e, "input_alloc_absinfo" },
	{ 0xc62019f6, "input_mt_init_slots" },
	{ 0x83a3674e, "input_register_device" },
	{ 0x473b72cf, "input_free_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf632832, "__register_virtio_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x9213582c, "virtqueue_get_buf" },
	{ 0x77838788, "input_event" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "virtio_ring,virtio");

MODULE_ALIAS("virtio:d00000012v*");
