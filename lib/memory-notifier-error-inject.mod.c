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
	{ 0xa770832, "register_memory_notifier" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8656f320, "debugfs_remove" },
	{ 0x26e298e0, "unregister_memory_notifier" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x30fbb933, "notifier_err_inject_dir" },
	{ 0x64b42f47, "notifier_err_inject_init" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "notifier-error-inject");

