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

KSYMTAB_FUNC(od_register_powersave_bias_handler, "_gpl", "");
KSYMTAB_FUNC(od_unregister_powersave_bias_handler, "_gpl", "");

SYMBOL_CRC(od_register_powersave_bias_handler, 0x7e6ef8a4, "_gpl");
SYMBOL_CRC(od_unregister_powersave_bias_handler, 0x0626da5f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x20eeddd3, "cpufreq_cpu_get_raw" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xf2a96fad, "cpufreq_register_governor" },
	{ 0x693ab5b8, "cpufreq_unregister_governor" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x7b9793a2, "get_cpu_idle_time_us" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xd488562, "cpufreq_table_index_unsorted" },
	{ 0x1b29891e, "sampling_rate_store" },
	{ 0xc89c5fb6, "cpufreq_dbs_governor_init" },
	{ 0xcc5c0213, "cpufreq_dbs_governor_exit" },
	{ 0x51d6126d, "cpufreq_dbs_governor_start" },
	{ 0x2986dbe3, "cpufreq_dbs_governor_stop" },
	{ 0x41c1896e, "cpufreq_dbs_governor_limits" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d2b0c9c, "dbs_update" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6e2b11aa, "__cpufreq_driver_target" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x529346de, "gov_update_cpu_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

