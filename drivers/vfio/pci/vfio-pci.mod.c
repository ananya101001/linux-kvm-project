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
	{ 0x13f6b9e7, "pci_user_read_config_dword" },
	{ 0x37a0cba, "kfree" },
	{ 0x76d0885b, "pci_user_read_config_word" },
	{ 0x4d924f20, "memremap" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3be2ccd0, "pci_read_config_dword" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8b5fbcd4, "vfio_pci_core_register_device" },
	{ 0xca844bc7, "put_device" },
	{ 0xbef200ca, "vfio_pci_core_unregister_device" },
	{ 0x3653b5d9, "vfio_pci_core_request" },
	{ 0x8d1d7d5d, "vfio_pci_core_release_dev" },
	{ 0x9d1e6054, "pci_get_domain_bus_and_slot" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x244d79b4, "vfio_pci_core_disable" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8bd6a344, "vfio_pci_core_read" },
	{ 0xf5ca20b7, "vfio_pci_core_ioctl" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x19a55fde, "param_ops_string" },
	{ 0x8ca2af7a, "vfio_pci_core_sriov_configure" },
	{ 0x92083d5b, "vfio_pci_core_register_dev_region" },
	{ 0x85df9b6c, "strsep" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x1ddcd7ad, "pci_user_read_config_byte" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x315bf962, "pci_add_dynid" },
	{ 0x1b734cbf, "vfio_pci_core_ioctl_feature" },
	{ 0xe2960e5, "vfio_pci_core_close_device" },
	{ 0x754d539c, "strlen" },
	{ 0x316f5af0, "vfio_pci_core_finish_enable" },
	{ 0x9a02ecc5, "vfio_pci_core_err_handlers" },
	{ 0x1c2e160f, "vfio_pci_core_match" },
	{ 0x87b79fa4, "_vfio_alloc_device" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x50f5e60e, "vfio_pci_core_enable" },
	{ 0x166c509b, "vfio_pci_core_write" },
	{ 0xf727c35a, "pci_dev_put" },
	{ 0x4cf699b8, "vfio_pci_core_set_params" },
	{ 0x38ec7678, "vfio_pci_core_mmap" },
	{ 0x8294861a, "vfio_pci_core_init_dev" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "vfio-pci-core,vfio");

MODULE_ALIAS("vfio_pci:v*d*sv*sd*bc*sc*i*");
