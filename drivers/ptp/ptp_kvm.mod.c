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
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x686a1b5, "__free_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4c49f1de, "hv_clock_per_cpu" },
	{ 0xbbff2fb6, "ptp_clock_register" },
	{ 0x8677f369, "pvclock_get_pvti_cpu0_va" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x905d0ff9, "ptp_clock_unregister" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc683da81, "set_memory_decrypted" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4263fdc5, "cc_platform_has" },
	{ 0x30cf804f, "slow_virt_to_phys" },
	{ 0xd5f3bb7b, "set_memory_encrypted" },
	{ 0xaf2aa4f7, "get_device_system_crosststamp" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xe9ce931a, "kvm_para_available" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ptp");

