#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(virtio_max_dma_size, "_gpl", "");
KSYMTAB_FUNC(virtqueue_add_sgs, "_gpl", "");
KSYMTAB_FUNC(virtqueue_add_outbuf, "_gpl", "");
KSYMTAB_FUNC(virtqueue_add_inbuf, "_gpl", "");
KSYMTAB_FUNC(virtqueue_add_inbuf_ctx, "_gpl", "");
KSYMTAB_FUNC(virtqueue_dma_dev, "_gpl", "");
KSYMTAB_FUNC(virtqueue_kick_prepare, "_gpl", "");
KSYMTAB_FUNC(virtqueue_notify, "_gpl", "");
KSYMTAB_FUNC(virtqueue_kick, "_gpl", "");
KSYMTAB_FUNC(virtqueue_get_buf_ctx, "_gpl", "");
KSYMTAB_FUNC(virtqueue_get_buf, "_gpl", "");
KSYMTAB_FUNC(virtqueue_disable_cb, "_gpl", "");
KSYMTAB_FUNC(virtqueue_enable_cb_prepare, "_gpl", "");
KSYMTAB_FUNC(virtqueue_poll, "_gpl", "");
KSYMTAB_FUNC(virtqueue_enable_cb, "_gpl", "");
KSYMTAB_FUNC(virtqueue_enable_cb_delayed, "_gpl", "");
KSYMTAB_FUNC(virtqueue_detach_unused_buf, "_gpl", "");
KSYMTAB_FUNC(vring_interrupt, "_gpl", "");
KSYMTAB_FUNC(vring_create_virtqueue, "_gpl", "");
KSYMTAB_FUNC(vring_create_virtqueue_dma, "_gpl", "");
KSYMTAB_FUNC(virtqueue_resize, "_gpl", "");
KSYMTAB_FUNC(virtqueue_set_dma_premapped, "_gpl", "");
KSYMTAB_FUNC(virtqueue_reset, "_gpl", "");
KSYMTAB_FUNC(vring_new_virtqueue, "_gpl", "");
KSYMTAB_FUNC(vring_del_virtqueue, "_gpl", "");
KSYMTAB_FUNC(vring_notification_data, "_gpl", "");
KSYMTAB_FUNC(vring_transport_features, "_gpl", "");
KSYMTAB_FUNC(virtqueue_get_vring_size, "_gpl", "");
KSYMTAB_FUNC(__virtqueue_break, "_gpl", "");
KSYMTAB_FUNC(__virtqueue_unbreak, "_gpl", "");
KSYMTAB_FUNC(virtqueue_is_broken, "_gpl", "");
KSYMTAB_FUNC(virtio_break_device, "_gpl", "");
KSYMTAB_FUNC(__virtio_unbreak_device, "_gpl", "");
KSYMTAB_FUNC(virtqueue_get_desc_addr, "_gpl", "");
KSYMTAB_FUNC(virtqueue_get_avail_addr, "_gpl", "");
KSYMTAB_FUNC(virtqueue_get_used_addr, "_gpl", "");
KSYMTAB_FUNC(virtqueue_get_vring, "_gpl", "");
KSYMTAB_FUNC(virtqueue_dma_map_single_attrs, "_gpl", "");
KSYMTAB_FUNC(virtqueue_dma_unmap_single_attrs, "_gpl", "");
KSYMTAB_FUNC(virtqueue_dma_mapping_error, "_gpl", "");
KSYMTAB_FUNC(virtqueue_dma_need_sync, "_gpl", "");
KSYMTAB_FUNC(virtqueue_dma_sync_single_range_for_cpu, "_gpl", "");
KSYMTAB_FUNC(virtqueue_dma_sync_single_range_for_device, "_gpl", "");

SYMBOL_CRC(virtio_max_dma_size, 0xc5229c9b, "_gpl");
SYMBOL_CRC(virtqueue_add_sgs, 0x77482155, "_gpl");
SYMBOL_CRC(virtqueue_add_outbuf, 0x85ed6502, "_gpl");
SYMBOL_CRC(virtqueue_add_inbuf, 0x99f39293, "_gpl");
SYMBOL_CRC(virtqueue_add_inbuf_ctx, 0xa5b869c2, "_gpl");
SYMBOL_CRC(virtqueue_dma_dev, 0x28e345ce, "_gpl");
SYMBOL_CRC(virtqueue_kick_prepare, 0xbea2ee27, "_gpl");
SYMBOL_CRC(virtqueue_notify, 0xf138f40a, "_gpl");
SYMBOL_CRC(virtqueue_kick, 0x894f890d, "_gpl");
SYMBOL_CRC(virtqueue_get_buf_ctx, 0x6ece9ba7, "_gpl");
SYMBOL_CRC(virtqueue_get_buf, 0x9213582c, "_gpl");
SYMBOL_CRC(virtqueue_disable_cb, 0x43316af5, "_gpl");
SYMBOL_CRC(virtqueue_enable_cb_prepare, 0xa5b7f01d, "_gpl");
SYMBOL_CRC(virtqueue_poll, 0xc43cfec9, "_gpl");
SYMBOL_CRC(virtqueue_enable_cb, 0xeea2de2a, "_gpl");
SYMBOL_CRC(virtqueue_enable_cb_delayed, 0x933d1af2, "_gpl");
SYMBOL_CRC(virtqueue_detach_unused_buf, 0xefceedf8, "_gpl");
SYMBOL_CRC(vring_interrupt, 0xff05fa13, "_gpl");
SYMBOL_CRC(vring_create_virtqueue, 0xdd878a8b, "_gpl");
SYMBOL_CRC(vring_create_virtqueue_dma, 0xfdcc9d45, "_gpl");
SYMBOL_CRC(virtqueue_resize, 0x5c016c76, "_gpl");
SYMBOL_CRC(virtqueue_set_dma_premapped, 0x15ae7676, "_gpl");
SYMBOL_CRC(virtqueue_reset, 0x8120636f, "_gpl");
SYMBOL_CRC(vring_new_virtqueue, 0x8a8c37aa, "_gpl");
SYMBOL_CRC(vring_del_virtqueue, 0x242da41b, "_gpl");
SYMBOL_CRC(vring_notification_data, 0xc55f8efa, "_gpl");
SYMBOL_CRC(vring_transport_features, 0x56bc433d, "_gpl");
SYMBOL_CRC(virtqueue_get_vring_size, 0x07e9de5c, "_gpl");
SYMBOL_CRC(__virtqueue_break, 0xac4594c9, "_gpl");
SYMBOL_CRC(__virtqueue_unbreak, 0x43633f18, "_gpl");
SYMBOL_CRC(virtqueue_is_broken, 0xe20d375a, "_gpl");
SYMBOL_CRC(virtio_break_device, 0x32ae7222, "_gpl");
SYMBOL_CRC(__virtio_unbreak_device, 0xfc4ad68c, "_gpl");
SYMBOL_CRC(virtqueue_get_desc_addr, 0x83bc98ea, "_gpl");
SYMBOL_CRC(virtqueue_get_avail_addr, 0x549b9af5, "_gpl");
SYMBOL_CRC(virtqueue_get_used_addr, 0x9622d79c, "_gpl");
SYMBOL_CRC(virtqueue_get_vring, 0xe1be2032, "_gpl");
SYMBOL_CRC(virtqueue_dma_map_single_attrs, 0xa5c67917, "_gpl");
SYMBOL_CRC(virtqueue_dma_unmap_single_attrs, 0x13644e13, "_gpl");
SYMBOL_CRC(virtqueue_dma_mapping_error, 0xf2cb1783, "_gpl");
SYMBOL_CRC(virtqueue_dma_need_sync, 0xaf31bac8, "_gpl");
SYMBOL_CRC(virtqueue_dma_sync_single_range_for_cpu, 0x7e4952ca, "_gpl");
SYMBOL_CRC(virtqueue_dma_sync_single_range_for_device, 0xf13c43b1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x204033c7, "dma_unmap_page_attrs" },
	{ 0xfb578fc5, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x7f67ab4, "__dma_sync_single_for_cpu" },
	{ 0x5dcfb0c6, "__dma_sync_single_for_device" },
	{ 0xcc6f3cad, "__dma_need_sync" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x28beaeee, "dma_map_page_attrs" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xeeb9f651, "dma_max_mapping_size" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0x54c15cee, "dma_free_attrs" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x896c3e8, "alloc_pages_exact_noprof" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x25d9a822, "dma_alloc_attrs" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xee99c7ef, "dev_driver_string" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

