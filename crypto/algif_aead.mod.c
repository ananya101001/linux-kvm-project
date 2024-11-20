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
	{ 0x6c45925d, "crypto_aead_setkey" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x37a0cba, "kfree" },
	{ 0x767b62ac, "af_alg_unregister_type" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xf8f81eec, "crypto_alloc_aead" },
	{ 0x1e246fb8, "crypto_get_default_null_skcipher" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0x9d410a7b, "af_alg_alloc_areq" },
	{ 0xe669fada, "af_alg_get_rsgl" },
	{ 0x27e92408, "af_alg_async_cb" },
	{ 0x8fcebc14, "crypto_aead_decrypt" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa8e458b, "crypto_req_done" },
	{ 0xa47e989c, "af_alg_free_resources" },
	{ 0x7c5afe9c, "af_alg_wmem_wakeup" },
	{ 0xdb579ef1, "release_sock" },
	{ 0x8ce71a63, "af_alg_wait_for_data" },
	{ 0x75d920db, "af_alg_count_tsgl" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x6590e5b2, "crypto_aead_encrypt" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x98a94a64, "sk_free" },
	{ 0x656af83c, "af_alg_release" },
	{ 0x4187ec08, "sock_no_bind" },
	{ 0x4a64b48b, "sock_no_connect" },
	{ 0xf6c2d54b, "sock_no_socketpair" },
	{ 0x395738dd, "sock_no_accept" },
	{ 0xaec33742, "sock_no_getname" },
	{ 0x7e9a71c0, "af_alg_poll" },
	{ 0xb9622331, "sock_no_ioctl" },
	{ 0xfa6431fc, "sock_no_listen" },
	{ 0x17574c5c, "sock_no_shutdown" },
	{ 0xb8c586b9, "sock_no_mmap" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdacfdd59, "af_alg_register_type" },
	{ 0x8f877fbc, "crypto_skcipher_encrypt" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x98092ed2, "af_alg_sendmsg" },
	{ 0xb7e27989, "crypto_aead_setauthsize" },
	{ 0x7eda801a, "af_alg_pull_tsgl" },
	{ 0x8482629f, "sock_kzfree_s" },
	{ 0x9ca3c8f9, "sock_kfree_s" },
	{ 0x9beeca65, "af_alg_release_parent" },
	{ 0x59681009, "sock_kmalloc" },
	{ 0xfb578fc5, "memset" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "crypto_null,af_alg");

