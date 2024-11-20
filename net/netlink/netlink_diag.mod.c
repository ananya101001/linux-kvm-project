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
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0xdf0e7b35, "__sock_i_ino" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0xa731f387, "nl_table_lock" },
	{ 0x306c0d3d, "nl_table" },
	{ 0x36cd5f26, "nla_put" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x92697d62, "sock_diag_register" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xc732619, "sock_i_ino" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xb1400caf, "sock_diag_unregister" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0x71a80e00, "sock_diag_put_meminfo" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x753e172b, "__netlink_dump_start" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0xb15aa180, "sock_diag_save_cookie" },
	{ 0x37a0cba, "kfree" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

