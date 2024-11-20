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

KSYMTAB_FUNC(virtio_pci_admin_has_legacy_io, "_gpl", "");
KSYMTAB_FUNC(virtio_pci_admin_legacy_common_io_write, "_gpl", "");
KSYMTAB_FUNC(virtio_pci_admin_legacy_device_io_write, "_gpl", "");
KSYMTAB_FUNC(virtio_pci_admin_legacy_device_io_read, "_gpl", "");
KSYMTAB_FUNC(virtio_pci_admin_legacy_common_io_read, "_gpl", "");
KSYMTAB_FUNC(virtio_pci_admin_legacy_io_notify_info, "_gpl", "");

SYMBOL_CRC(virtio_pci_admin_has_legacy_io, 0x60ccd031, "_gpl");
SYMBOL_CRC(virtio_pci_admin_legacy_common_io_write, 0xf1a6e592, "_gpl");
SYMBOL_CRC(virtio_pci_admin_legacy_device_io_write, 0xf4ee1937, "_gpl");
SYMBOL_CRC(virtio_pci_admin_legacy_device_io_read, 0xd0f816ac, "_gpl");
SYMBOL_CRC(virtio_pci_admin_legacy_common_io_read, 0x9853a06b, "_gpl");
SYMBOL_CRC(virtio_pci_admin_legacy_io_notify_info, 0xac2ec5fb, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf103cbd4, "vp_modern_queue_address" },
	{ 0xb7ed4798, "virtio_device_restore" },
	{ 0x3be2ccd0, "pci_read_config_dword" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xff05fa13, "vring_interrupt" },
	{ 0x848d372e, "iowrite8" },
	{ 0xb51fc290, "vp_modern_avq_index" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xca844bc7, "put_device" },
	{ 0xcbfbe3ec, "virtio_config_changed" },
	{ 0xca68a267, "vp_legacy_set_status" },
	{ 0x98b31dcc, "vp_modern_get_queue_enable" },
	{ 0xedd0ae27, "vp_modern_config_vector" },
	{ 0x7e9de5c, "virtqueue_get_vring_size" },
	{ 0xa3564bc0, "vp_modern_probe" },
	{ 0x7188fd5f, "pci_find_capability" },
	{ 0xcaa6e63e, "pci_iov_vf_id" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x12de865a, "unregister_virtio_device" },
	{ 0x4f902993, "vp_legacy_queue_vector" },
	{ 0x83bc98ea, "virtqueue_get_desc_addr" },
	{ 0x199c4833, "__irq_apply_affinity_hint" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6bd5f5fe, "vp_legacy_get_queue_enable" },
	{ 0x13976548, "vp_modern_set_queue_size" },
	{ 0x94c3a198, "vp_legacy_probe" },
	{ 0x1b2578ad, "pci_device_is_present" },
	{ 0x797e5068, "pci_read_config_word" },
	{ 0x43316af5, "virtqueue_disable_cb" },
	{ 0x954244a6, "vp_modern_queue_vector" },
	{ 0x78e2f8f0, "virtio_device_freeze" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb82b6f32, "vp_modern_set_queue_reset" },
	{ 0xba94dc21, "vp_modern_generation" },
	{ 0xbfee4f4c, "pci_iounmap" },
	{ 0x77482155, "virtqueue_add_sgs" },
	{ 0xb19b445, "ioread8" },
	{ 0xa29e5d2f, "pci_alloc_irq_vectors_affinity" },
	{ 0x32ae7222, "virtio_break_device" },
	{ 0xb72e7d4e, "pci_set_master" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2c9b27d, "vp_legacy_set_features" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x9213582c, "virtqueue_get_buf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x735f564b, "vp_modern_set_features" },
	{ 0x5862fff7, "pci_find_next_capability" },
	{ 0x9622d79c, "virtqueue_get_used_addr" },
	{ 0x894f890d, "virtqueue_kick" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xba08b402, "register_virtio_device" },
	{ 0x1651d3ce, "pci_disable_sriov" },
	{ 0x11ea0a09, "vp_legacy_get_queue_size" },
	{ 0x3b58ae06, "vp_legacy_get_features" },
	{ 0x544253f5, "pci_disable_device" },
	{ 0xc9d12021, "pci_irq_get_affinity" },
	{ 0x798dd6b1, "pci_read_config_byte" },
	{ 0x2ec464b8, "vp_modern_get_num_queues" },
	{ 0x4f9c66e8, "pci_free_irq_vectors" },
	{ 0xbd268111, "pci_enable_sriov" },
	{ 0x8fd72380, "vp_modern_set_queue_enable" },
	{ 0x242da41b, "vring_del_virtqueue" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc981f133, "pci_iov_get_pf_drvdata" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x56bc433d, "vring_transport_features" },
	{ 0xfeadbddb, "pci_find_ext_capability" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xeea2de2a, "virtqueue_enable_cb" },
	{ 0xde316982, "vp_modern_get_status" },
	{ 0xaad21b46, "pci_enable_device" },
	{ 0x40c8a3b1, "vp_modern_get_queue_reset" },
	{ 0x49588df6, "vp_modern_map_vq_notify" },
	{ 0x156f8079, "vp_legacy_config_vector" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xefceedf8, "virtqueue_detach_unused_buf" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xe20d375a, "virtqueue_is_broken" },
	{ 0x549b9af5, "virtqueue_get_avail_addr" },
	{ 0x9adc3483, "vp_modern_get_queue_size" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc8d6ed0e, "pci_vfs_assigned" },
	{ 0x32d73b3c, "vp_legacy_remove" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x6111a40c, "vp_legacy_set_queue_address" },
	{ 0xe3e6221c, "vp_modern_remove" },
	{ 0xda555aab, "vp_legacy_get_status" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0xdd878a8b, "vring_create_virtqueue" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x75d46ab6, "vp_modern_get_features" },
	{ 0xc6607011, "vp_modern_set_status" },
	{ 0x8bc25944, "pci_irq_vector" },
	{ 0x3131271a, "get_device" },
	{ 0xcde0150b, "vp_modern_avq_num" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0xc55f8efa, "vring_notification_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "virtio_pci_modern_dev,virtio,virtio_ring,virtio_pci_legacy_dev");

MODULE_ALIAS("pci:v00001AF4d*sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "980C7268A22704B16559E83");
