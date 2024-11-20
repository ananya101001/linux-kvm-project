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
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5f351b39, "crypto_skcipher_decrypt" },
	{ 0xa916b694, "strnlen" },
	{ 0x808e15ac, "crypto_ahash_init" },
	{ 0x79e7db83, "crypto_shash_setkey" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xe8718264, "crypto_shash_update" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xfb578fc5, "memset" },
	{ 0x31a89d59, "rpc_debug" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x64e7b7f, "xdr_buf_subsegment" },
	{ 0xbca18e25, "crypto_alloc_sync_skcipher" },
	{ 0x3b945a2a, "crypto_ahash_final" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc90fd15, "crypto_shash_final" },
	{ 0xb79c7bd2, "gss_mech_register" },
	{ 0xf54bd49b, "lcm" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5bfd0711, "write_bytes_to_xdr_buf" },
	{ 0x10f8b997, "crypto_ahash_update" },
	{ 0xe2d055b4, "crypto_alloc_shash" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x8f877fbc, "crypto_skcipher_encrypt" },
	{ 0xa84653c0, "crypto_alloc_ahash" },
	{ 0x39411240, "xdr_buf_trim" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xb0e602eb, "memmove" },
	{ 0x24debe3d, "xdr_process_buf" },
	{ 0x4a590bba, "read_bytes_from_xdr_buf" },
	{ 0x7970c44a, "crypto_ahash_setkey" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x43babd19, "sg_init_one" },
	{ 0xfc90e0b, "crypto_skcipher_setkey" },
	{ 0xd735387f, "gss_mech_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "sunrpc,auth_rpcgss");

