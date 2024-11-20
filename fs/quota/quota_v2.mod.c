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
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x484a00b4, "__quota_error" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7919d80, "init_user_ns" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x6baf6dcc, "qtree_entry_unused" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x5b0d0f96, "unregister_quota_format" },
	{ 0xd7dbbf44, "make_kprojid" },
	{ 0x8d55bb8a, "qid_eq" },
	{ 0xa3951d2b, "make_kgid" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa4ef0b43, "register_quota_format" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x668b19a1, "down_read" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xb34a7992, "qtree_get_next_id" },
	{ 0x53b954a2, "up_read" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa19e4a80, "qtree_release_dquot" },
	{ 0xce807a25, "up_write" },
	{ 0x6381e2ec, "qtree_write_dquot" },
	{ 0x5ba931a8, "qtree_read_dquot" },
	{ 0x37a0cba, "kfree" },
	{ 0x2bb6099e, "dq_data_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "quota_tree");

