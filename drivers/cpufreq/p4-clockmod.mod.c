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
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x75184727, "cpufreq_unregister_driver" },
	{ 0x23d1b90, "wrmsr_on_cpu" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa6729c43, "cpu_info" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd7ab2c0c, "speedstep_detect_processor" },
	{ 0xc9216a82, "recalibrate_cpu_khz" },
	{ 0x2b67f096, "speedstep_get_frequency" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xc289e46d, "cpufreq_generic_frequency_table_verify" },
	{ 0xc320d616, "cpufreq_generic_attr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x66283031, "x86_match_cpu" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xccdec5, "cpufreq_register_driver" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "speedstep-lib");

