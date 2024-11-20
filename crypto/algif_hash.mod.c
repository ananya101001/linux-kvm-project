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
	{ 0xd9e1a9ad, "af_alg_accept" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xae6c403b, "crypto_ahash_export" },
	{ 0xb09f1462, "crypto_ahash_import" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x98a94a64, "sk_free" },
	{ 0x8482629f, "sock_kzfree_s" },
	{ 0x9ca3c8f9, "sock_kfree_s" },
	{ 0x9beeca65, "af_alg_release_parent" },
	{ 0x3b945a2a, "crypto_ahash_final" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x639ccacd, "_copy_to_iter" },
	{ 0x808e15ac, "crypto_ahash_init" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x10f8b997, "crypto_ahash_update" },
	{ 0x634264a9, "af_alg_free_sg" },
	{ 0xb30483ee, "iov_iter_npages" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x285a485, "extract_iter_to_sg" },
	{ 0xfb72abaf, "crypto_ahash_finup" },
	{ 0x2e51c17d, "crypto_ahash_digest" },
	{ 0x656af83c, "af_alg_release" },
	{ 0x4187ec08, "sock_no_bind" },
	{ 0x4a64b48b, "sock_no_connect" },
	{ 0xf6c2d54b, "sock_no_socketpair" },
	{ 0xaec33742, "sock_no_getname" },
	{ 0xb9622331, "sock_no_ioctl" },
	{ 0xfa6431fc, "sock_no_listen" },
	{ 0x17574c5c, "sock_no_shutdown" },
	{ 0xb8c586b9, "sock_no_mmap" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdacfdd59, "af_alg_register_type" },
	{ 0x59681009, "sock_kmalloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa8e458b, "crypto_req_done" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x7970c44a, "crypto_ahash_setkey" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0xa84653c0, "crypto_alloc_ahash" },
	{ 0x767b62ac, "af_alg_unregister_type" },
	{ 0xfb578fc5, "memset" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0xdb579ef1, "release_sock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "af_alg");

