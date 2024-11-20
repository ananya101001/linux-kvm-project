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
	{ 0xf1a68107, "acpi_processor_preregister_performance" },
	{ 0xa6729c43, "cpu_info" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xccdec5, "cpufreq_register_driver" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x63f835ba, "on_each_cpu_cond_mask" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xbb13595e, "smp_call_function_many" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x20eeddd3, "cpufreq_cpu_get_raw" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xe787698f, "acpi_processor_register_performance" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xfb578fc5, "memset" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0x4c07a7e0, "acpi_processor_unregister_performance" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9785b49, "cpu_core_map" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x85b15444, "arch_set_max_freq_ratio" },
	{ 0x345fcf98, "acpi_processor_notify_smm" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe70221d7, "cppc_get_perf_caps" },
	{ 0xd6b33026, "cpu_khz" },
	{ 0xf824a3cf, "amd_get_boost_ratio_numerator" },
	{ 0xe37056dc, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x6b6b50b6, "cpufreq_freq_attr_scaling_available_freqs" },
	{ 0xc289e46d, "cpufreq_generic_frequency_table_verify" },
	{ 0xbc2031de, "acpi_processor_get_bios_limit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2b8a076f, "__platform_driver_probe" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x1ee5532, "smp_call_function_any" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbe49252c, "acpi_os_write_port" },
	{ 0xb654ef65, "acpi_os_read_port" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbc60dc37, "cpufreq_show_cpus" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x75184727, "cpufreq_unregister_driver" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x7cd6f042, "cpufreq_get_current_driver" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x618911fc, "numa_node" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

