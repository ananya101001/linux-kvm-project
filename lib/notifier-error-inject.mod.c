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

KSYMTAB_DATA(notifier_err_inject_dir, "_gpl", "");
KSYMTAB_FUNC(notifier_err_inject_init, "_gpl", "");

SYMBOL_CRC(notifier_err_inject_dir, 0x30fbb933, "_gpl");
SYMBOL_CRC(notifier_err_inject_init, 0x64b42f47, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x51cd0202, "debugfs_create_file" },
	{ 0xc76f9d9a, "simple_attr_open" },
	{ 0x8656f320, "debugfs_remove" },
	{ 0x3e0f9d5b, "generic_file_llseek" },
	{ 0x32dd09d, "simple_attr_read" },
	{ 0x8c795b64, "simple_attr_write_signed" },
	{ 0x42499514, "simple_attr_release" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8b0ac9d7, "debugfs_create_dir" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

