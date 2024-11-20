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
	{ 0x20463df4, "wait_for_completion_killable" },
	{ 0xacd1b37, "virtio_reset_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xffb7c514, "ida_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0fd7085, "hwrng_unregister" },
	{ 0x3fa92fa0, "unregister_virtio_driver" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf632832, "__register_virtio_driver" },
	{ 0xe0c4e14d, "hwrng_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x9213582c, "virtqueue_get_buf" },
	{ 0xa6257a2f, "complete" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x99f39293, "virtqueue_add_inbuf" },
	{ 0x894f890d, "virtqueue_kick" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "virtio,rng-core,virtio_ring");

MODULE_ALIAS("virtio:d00000004v*");
