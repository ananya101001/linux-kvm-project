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
	{ 0x77d59315, "tpm_buf_append_u8" },
	{ 0xb2c82a11, "tpm_transmit_cmd" },
	{ 0x87456965, "tpm_buf_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x3c3001c3, "tpm_chip_register" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfb578fc5, "memset" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf67f255e, "tpm_chip_alloc" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xe53b1916, "anon_inode_getfile" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7a729fb1, "fd_install" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xca844bc7, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x37712435, "fput" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x7693a0ac, "tpm_chip_unregister" },
	{ 0x2a71977a, "noop_llseek" },
	{ 0xc81ce80d, "compat_ptr_ioctl" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xea43f98d, "misc_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe2964344, "__wake_up" },
	{ 0xe8654fd8, "tpm_buf_init" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "tpm");


MODULE_INFO(srcversion, "FC6D3721BC019E746C9439F");
