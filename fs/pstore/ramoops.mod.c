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
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xeb2f825c, "init_rs_gfp" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xfd4a5a9c, "platform_device_unregister" },
	{ 0x3199fbeb, "mem_section" },
	{ 0x81547437, "vmap" },
	{ 0xde80cd09, "ioremap" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xfb578fc5, "memset" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0xee3f884, "param_ops_charp" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x716072ec, "reserve_mem_find_by_name" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xbc1252bb, "__platform_driver_register" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xfd581da1, "free_rs" },
	{ 0xd081dfa2, "platform_device_register_full" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x2cb79e0f, "pstore_unregister" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x77358855, "iomem_resource" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x7e5db80b, "pstore_name_to_type" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x85bd1608, "__request_region" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x6f4b9c2d, "param_ops_ullong" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xde8c1673, "param_ops_ulong" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x63adbf92, "encode_rs8" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1d29b9e1, "decode_rs8" },
	{ 0xa553201f, "platform_driver_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x68937864, "pstore_register" },
	{ 0x96848186, "scnprintf" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xedc03953, "iounmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "reed_solomon");

MODULE_ALIAS("of:N*T*Cramoops");
MODULE_ALIAS("of:N*T*CramoopsC*");
