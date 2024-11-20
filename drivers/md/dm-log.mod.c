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

KSYMTAB_FUNC(dm_dirty_log_type_register, "", "");
KSYMTAB_FUNC(dm_dirty_log_type_unregister, "", "");
KSYMTAB_FUNC(dm_dirty_log_create, "", "");
KSYMTAB_FUNC(dm_dirty_log_destroy, "", "");

SYMBOL_CRC(dm_dirty_log_type_register, 0x117f3375, "");
SYMBOL_CRC(dm_dirty_log_type_unregister, 0xa6de8522, "");
SYMBOL_CRC(dm_dirty_log_create, 0x50d5ea80, "");
SYMBOL_CRC(dm_dirty_log_destroy, 0x138cf08e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8d90836b, "dm_get_device" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xc04f99e, "dm_io" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0x401fdfc2, "dm_table_event" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x9f984513, "strrchr" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x96848186, "scnprintf" },
	{ 0x6231046, "dm_put_device" },
	{ 0x999e8297, "vfree" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0xfb578fc5, "memset" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1ad7a19c, "dm_table_get_mode" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "dm-mod");

