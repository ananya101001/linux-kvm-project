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
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xccdec5, "cpufreq_register_driver" },
	{ 0x9493fc86, "node_states" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x7cd6f042, "cpufreq_get_current_driver" },
	{ 0x754d539c, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x5a921311, "strncmp" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c07a7e0, "acpi_processor_unregister_performance" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xe787698f, "acpi_processor_register_performance" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa9785b49, "cpu_core_map" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x345fcf98, "acpi_processor_notify_smm" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xaece47df, "cpufreq_freq_transition_begin" },
	{ 0x19db05f2, "cpufreq_freq_transition_end" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc289e46d, "cpufreq_generic_frequency_table_verify" },
	{ 0xbc2031de, "acpi_processor_get_bios_limit" },
	{ 0xc320d616, "cpufreq_generic_attr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc2d55962, "work_on_cpu_key" },
	{ 0x75184727, "cpufreq_unregister_driver" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0002fam000Fmod*:feature:*");
