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
	{ 0xb80be06, "netdev_rx_handler_unregister" },
	{ 0x8cd6dbe, "tap_del_queues" },
	{ 0x6e62f1c, "ipvlan_link_delete" },
	{ 0xe55c4f13, "ipvlan_count_rx" },
	{ 0x390d57cf, "netdev_update_features" },
	{ 0x6d64943f, "ipvlan_link_setup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbd642ced, "tap_get_minor" },
	{ 0x20c2b7b, "tap_queue_resize" },
	{ 0x7b68bebe, "sysfs_remove_link" },
	{ 0x50785e75, "device_destroy" },
	{ 0x4982144b, "tap_free_minor" },
	{ 0x5d480ef3, "device_create" },
	{ 0x5cad8430, "sysfs_create_link" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc748bccf, "rtnl_link_unregister" },
	{ 0xb7cedf82, "tap_handle_frame" },
	{ 0xd87d68eb, "netdev_rx_handler_register" },
	{ 0x261079b3, "ipvlan_link_new" },
	{ 0xce38b843, "net_ns_type_operations" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5c668d91, "tap_create_cdev" },
	{ 0x4a958e37, "class_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0xa8e14a2a, "tap_destroy_cdev" },
	{ 0xe6393c04, "ipvlan_link_register" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "tap,ipvlan");

