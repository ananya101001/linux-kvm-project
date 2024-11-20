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
	{ 0x67c13ea0, "acpi_read" },
	{ 0x7bb50b88, "acpi_write" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x68f52a85, "processors" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x37a0cba, "kfree" },
	{ 0x7cd6f042, "cpufreq_get_current_driver" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x5322663e, "acpi_get_handle" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xde80cd09, "ioremap" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x122c3a7e, "_printk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0xccdec5, "cpufreq_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0xb19b445, "ioread8" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0x75184727, "cpufreq_unregister_driver" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xaece47df, "cpufreq_freq_transition_begin" },
	{ 0x19db05f2, "cpufreq_freq_transition_end" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2b8a076f, "__platform_driver_probe" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5BE8965B46332FA44F30816");
