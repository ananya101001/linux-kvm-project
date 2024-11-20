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
	{ 0x37a0cba, "kfree" },
	{ 0x693ab5b8, "cpufreq_unregister_governor" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf2a96fad, "cpufreq_register_governor" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6e2b11aa, "__cpufreq_driver_target" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

