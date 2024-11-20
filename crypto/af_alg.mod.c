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

KSYMTAB_FUNC(af_alg_register_type, "_gpl", "");
KSYMTAB_FUNC(af_alg_unregister_type, "_gpl", "");
KSYMTAB_FUNC(af_alg_release, "_gpl", "");
KSYMTAB_FUNC(af_alg_release_parent, "_gpl", "");
KSYMTAB_FUNC(af_alg_accept, "_gpl", "");
KSYMTAB_FUNC(af_alg_free_sg, "_gpl", "");
KSYMTAB_FUNC(af_alg_count_tsgl, "_gpl", "");
KSYMTAB_FUNC(af_alg_pull_tsgl, "_gpl", "");
KSYMTAB_FUNC(af_alg_wmem_wakeup, "_gpl", "");
KSYMTAB_FUNC(af_alg_wait_for_data, "_gpl", "");
KSYMTAB_FUNC(af_alg_sendmsg, "_gpl", "");
KSYMTAB_FUNC(af_alg_free_resources, "_gpl", "");
KSYMTAB_FUNC(af_alg_async_cb, "_gpl", "");
KSYMTAB_FUNC(af_alg_poll, "_gpl", "");
KSYMTAB_FUNC(af_alg_alloc_areq, "_gpl", "");
KSYMTAB_FUNC(af_alg_get_rsgl, "_gpl", "");

SYMBOL_CRC(af_alg_register_type, 0xdacfdd59, "_gpl");
SYMBOL_CRC(af_alg_unregister_type, 0x767b62ac, "_gpl");
SYMBOL_CRC(af_alg_release, 0x656af83c, "_gpl");
SYMBOL_CRC(af_alg_release_parent, 0x9beeca65, "_gpl");
SYMBOL_CRC(af_alg_accept, 0xd9e1a9ad, "_gpl");
SYMBOL_CRC(af_alg_free_sg, 0x634264a9, "_gpl");
SYMBOL_CRC(af_alg_count_tsgl, 0x75d920db, "_gpl");
SYMBOL_CRC(af_alg_pull_tsgl, 0x7eda801a, "_gpl");
SYMBOL_CRC(af_alg_wmem_wakeup, 0x7c5afe9c, "_gpl");
SYMBOL_CRC(af_alg_wait_for_data, 0x8ce71a63, "_gpl");
SYMBOL_CRC(af_alg_sendmsg, 0x98092ed2, "_gpl");
SYMBOL_CRC(af_alg_free_resources, 0xa47e989c, "_gpl");
SYMBOL_CRC(af_alg_async_cb, 0x27e92408, "_gpl");
SYMBOL_CRC(af_alg_poll, 0x7e9a71c0, "_gpl");
SYMBOL_CRC(af_alg_alloc_areq, 0x9d410a7b, "_gpl");
SYMBOL_CRC(af_alg_get_rsgl, 0xe669fada, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xce807a25, "up_write" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x9e90bee3, "sk_alloc" },
	{ 0xf5cef368, "sock_init_data" },
	{ 0x2f8c7b64, "unpin_user_page" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x59681009, "sock_kmalloc" },
	{ 0xd327bfd0, "proto_register" },
	{ 0xddd9a9d2, "sock_register" },
	{ 0x18c05d36, "proto_unregister" },
	{ 0x668b19a1, "down_read" },
	{ 0x53b954a2, "up_read" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0xdc145e5, "lock_sock_nested" },
	{ 0xdb579ef1, "release_sock" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x98a94a64, "sk_free" },
	{ 0x5b9494f8, "security_sock_graft" },
	{ 0xb5be9b63, "security_sk_clone" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x285a485, "extract_iter_to_sg" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9ca3c8f9, "sock_kfree_s" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x94c1bfc3, "__folio_put" },
	{ 0xb5f4750d, "__put_devmap_managed_folio_refs" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xba220db7, "__wake_up_sync_key" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x907d61c4, "sock_wake_async" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xeec9a487, "_copy_from_iter" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x54a0e992, "iov_iter_revert" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8482629f, "sock_kzfree_s" },
	{ 0x1dc6c93b, "lookup_user_key" },
	{ 0x24d0565a, "key_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4a64b48b, "sock_no_connect" },
	{ 0xf6c2d54b, "sock_no_socketpair" },
	{ 0xaec33742, "sock_no_getname" },
	{ 0xb9622331, "sock_no_ioctl" },
	{ 0xfa6431fc, "sock_no_listen" },
	{ 0x17574c5c, "sock_no_shutdown" },
	{ 0x3946661f, "sock_no_sendmsg" },
	{ 0x2bc7f07d, "sock_no_recvmsg" },
	{ 0xb8c586b9, "sock_no_mmap" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

