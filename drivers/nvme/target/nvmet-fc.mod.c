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

KSYMTAB_FUNC(nvmet_fc_register_targetport, "_gpl", "");
KSYMTAB_FUNC(nvmet_fc_invalidate_host, "_gpl", "");
KSYMTAB_FUNC(nvmet_fc_unregister_targetport, "_gpl", "");
KSYMTAB_FUNC(nvmet_fc_rcv_ls_req, "_gpl", "");
KSYMTAB_FUNC(nvmet_fc_rcv_fcp_req, "_gpl", "");
KSYMTAB_FUNC(nvmet_fc_rcv_fcp_abort, "_gpl", "");

SYMBOL_CRC(nvmet_fc_register_targetport, 0xbe7a99c5, "_gpl");
SYMBOL_CRC(nvmet_fc_invalidate_host, 0x4a013682, "_gpl");
SYMBOL_CRC(nvmet_fc_unregister_targetport, 0x9ef76d99, "_gpl");
SYMBOL_CRC(nvmet_fc_rcv_ls_req, 0x0b98123d, "_gpl");
SYMBOL_CRC(nvmet_fc_rcv_fcp_req, 0x7bfa9497, "_gpl");
SYMBOL_CRC(nvmet_fc_rcv_fcp_abort, 0x6ff62dab, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5e934fc7, "sgl_alloc" },
	{ 0x246e7f1a, "nvmet_unregister_transport" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd69c226b, "nvmet_req_init" },
	{ 0x7f67ab4, "__dma_sync_single_for_cpu" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4904be9, "nvmet_register_transport" },
	{ 0xffb7c514, "ida_free" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1c2d99b4, "nvmet_sq_init" },
	{ 0x5dcfb0c6, "__dma_sync_single_for_device" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x4836cf95, "dma_unmap_sg_attrs" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7f62eaa4, "sgl_free" },
	{ 0x3e0ef07a, "nvmet_wq" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x909396f0, "dma_map_sg_attrs" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe3c191d3, "nvmet_req_complete" },
	{ 0x204033c7, "dma_unmap_page_attrs" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x3131271a, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xee99c7ef, "dev_driver_string" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc8e628a2, "nvmet_sq_destroy" },
	{ 0x28beaeee, "dma_map_page_attrs" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xca844bc7, "put_device" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xa916b694, "strnlen" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nvmet");

