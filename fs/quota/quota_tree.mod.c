#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(qtree_entry_unused, "", "");
KSYMTAB_FUNC(qtree_write_dquot, "", "");
KSYMTAB_FUNC(qtree_delete_dquot, "", "");
KSYMTAB_FUNC(qtree_read_dquot, "", "");
KSYMTAB_FUNC(qtree_release_dquot, "", "");
KSYMTAB_FUNC(qtree_get_next_id, "", "");

SYMBOL_CRC(qtree_entry_unused, 0x6baf6dcc, "");
SYMBOL_CRC(qtree_write_dquot, 0x6381e2ec, "");
SYMBOL_CRC(qtree_delete_dquot, 0x9a885267, "");
SYMBOL_CRC(qtree_read_dquot, 0x5ba931a8, "");
SYMBOL_CRC(qtree_release_dquot, 0xa19e4a80, "");
SYMBOL_CRC(qtree_get_next_id, 0xb34a7992, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x484a00b4, "__quota_error" },
	{ 0xfb578fc5, "memset" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xd7b82c27, "mark_info_dirty" },
	{ 0x37a0cba, "kfree" },
	{ 0x7919d80, "init_user_ns" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0xd7dbbf44, "make_kprojid" },
	{ 0xa3951d2b, "make_kgid" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x6f915a45, "dqstats" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

