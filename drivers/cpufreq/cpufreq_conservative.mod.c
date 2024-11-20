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
	{ 0x41c1896e, "cpufreq_dbs_governor_limits" },
	{ 0x1b29891e, "sampling_rate_store" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf2a96fad, "cpufreq_register_governor" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d2b0c9c, "dbs_update" },
	{ 0x6e2b11aa, "__cpufreq_driver_target" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x529346de, "gov_update_cpu_data" },
	{ 0x693ab5b8, "cpufreq_unregister_governor" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xc89c5fb6, "cpufreq_dbs_governor_init" },
	{ 0xcc5c0213, "cpufreq_dbs_governor_exit" },
	{ 0x51d6126d, "cpufreq_dbs_governor_start" },
	{ 0x2986dbe3, "cpufreq_dbs_governor_stop" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

