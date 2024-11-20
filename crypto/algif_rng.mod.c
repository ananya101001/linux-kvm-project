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
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x767b62ac, "af_alg_unregister_type" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x639ccacd, "_copy_to_iter" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xe32d3f9e, "crypto_alloc_rng" },
	{ 0x37a0cba, "kfree" },
	{ 0x656af83c, "af_alg_release" },
	{ 0x4187ec08, "sock_no_bind" },
	{ 0x4a64b48b, "sock_no_connect" },
	{ 0xf6c2d54b, "sock_no_socketpair" },
	{ 0x395738dd, "sock_no_accept" },
	{ 0xaec33742, "sock_no_getname" },
	{ 0xb9622331, "sock_no_ioctl" },
	{ 0xfa6431fc, "sock_no_listen" },
	{ 0x17574c5c, "sock_no_shutdown" },
	{ 0x3946661f, "sock_no_sendmsg" },
	{ 0xb8c586b9, "sock_no_mmap" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdacfdd59, "af_alg_register_type" },
	{ 0x59681009, "sock_kmalloc" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x9ca3c8f9, "sock_kfree_s" },
	{ 0x9beeca65, "af_alg_release_parent" },
	{ 0x36a6555c, "crypto_rng_reset" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "af_alg");

