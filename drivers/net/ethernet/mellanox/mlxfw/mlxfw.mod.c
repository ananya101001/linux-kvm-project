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

KSYMTAB_FUNC(mlxfw_firmware_flash, "", "");

SYMBOL_CRC(mlxfw_firmware_flash, 0xc4d702d9, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x52d717da, "xz_dec_init" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x45f1d7ea, "devlink_flash_update_status_notify" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x30e88db5, "devlink_to_dev" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x6e5b8651, "xz_dec_run" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x65dccf13, "xz_dec_end" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x999e8297, "vfree" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

