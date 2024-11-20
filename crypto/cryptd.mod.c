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

KSYMTAB_FUNC(cryptd_alloc_skcipher, "_gpl", "");
KSYMTAB_FUNC(cryptd_skcipher_child, "_gpl", "");
KSYMTAB_FUNC(cryptd_skcipher_queued, "_gpl", "");
KSYMTAB_FUNC(cryptd_free_skcipher, "_gpl", "");
KSYMTAB_FUNC(cryptd_alloc_ahash, "_gpl", "");
KSYMTAB_FUNC(cryptd_ahash_child, "_gpl", "");
KSYMTAB_FUNC(cryptd_shash_desc, "_gpl", "");
KSYMTAB_FUNC(cryptd_ahash_queued, "_gpl", "");
KSYMTAB_FUNC(cryptd_free_ahash, "_gpl", "");
KSYMTAB_FUNC(cryptd_alloc_aead, "_gpl", "");
KSYMTAB_FUNC(cryptd_aead_child, "_gpl", "");
KSYMTAB_FUNC(cryptd_aead_queued, "_gpl", "");
KSYMTAB_FUNC(cryptd_free_aead, "_gpl", "");

SYMBOL_CRC(cryptd_alloc_skcipher, 0xe9c14238, "_gpl");
SYMBOL_CRC(cryptd_skcipher_child, 0x926eb123, "_gpl");
SYMBOL_CRC(cryptd_skcipher_queued, 0x25987923, "_gpl");
SYMBOL_CRC(cryptd_free_skcipher, 0x29ac0f2a, "_gpl");
SYMBOL_CRC(cryptd_alloc_ahash, 0xa088f329, "_gpl");
SYMBOL_CRC(cryptd_ahash_child, 0x6a2db30d, "_gpl");
SYMBOL_CRC(cryptd_shash_desc, 0x7f677500, "_gpl");
SYMBOL_CRC(cryptd_ahash_queued, 0xdd32720b, "_gpl");
SYMBOL_CRC(cryptd_free_ahash, 0x31581d2e, "_gpl");
SYMBOL_CRC(cryptd_alloc_aead, 0x44518775, "_gpl");
SYMBOL_CRC(cryptd_aead_child, 0x983a1568, "_gpl");
SYMBOL_CRC(cryptd_aead_queued, 0xcf26b4ed, "_gpl");
SYMBOL_CRC(cryptd_free_aead, 0x7a222a59, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x122c3a7e, "_printk" },
	{ 0xfb935981, "crypto_register_template" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x8beec3dc, "crypto_enqueue_request" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xd3f02915, "crypto_grab_skcipher" },
	{ 0xf3f9e370, "crypto_grab_aead" },
	{ 0x17aee539, "aead_register_instance" },
	{ 0x49fe5a78, "crypto_grab_shash" },
	{ 0x4d083d8d, "shash_no_setkey" },
	{ 0x92a0c4eb, "ahash_register_instance" },
	{ 0x7dbb18ca, "skcipher_register_instance" },
	{ 0x5f351b39, "crypto_skcipher_decrypt" },
	{ 0x8f877fbc, "crypto_skcipher_encrypt" },
	{ 0xfb4db461, "shash_ahash_digest" },
	{ 0x24ebaa64, "shash_ahash_finup" },
	{ 0xc90fd15, "crypto_shash_final" },
	{ 0xb3edd7b2, "shash_ahash_update" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9da9be5f, "crypto_alloc_skcipher" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa84653c0, "crypto_alloc_ahash" },
	{ 0xf8f81eec, "crypto_alloc_aead" },
	{ 0xfc90e0b, "crypto_skcipher_setkey" },
	{ 0x9a8695b, "crypto_spawn_tfm2" },
	{ 0x6c3651f2, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x79e7db83, "crypto_shash_setkey" },
	{ 0x26d48da5, "crypto_shash_import" },
	{ 0x43bc9098, "crypto_shash_export" },
	{ 0x6a23c83, "crypto_clone_shash" },
	{ 0xb7e27989, "crypto_aead_setauthsize" },
	{ 0x6c45925d, "crypto_aead_setkey" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x31f20726, "crypto_dequeue_request" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2f3478c3, "crypto_unregister_template" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

