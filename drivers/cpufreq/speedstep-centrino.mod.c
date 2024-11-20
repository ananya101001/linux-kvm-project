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
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa6729c43, "cpu_info" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0x23d1b90, "wrmsr_on_cpu" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xb6cb556a, "_find_first_and_bit" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x75184727, "cpufreq_unregister_driver" },
	{ 0xc289e46d, "cpufreq_generic_frequency_table_verify" },
	{ 0xc320d616, "cpufreq_generic_attr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0xccdec5, "cpufreq_register_driver" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

