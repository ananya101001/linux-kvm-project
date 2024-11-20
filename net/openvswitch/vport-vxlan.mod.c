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
	{ 0x36cd5f26, "nla_put" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xcd279169, "nla_find" },
	{ 0xf6fe270c, "ovs_vport_alloc" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8a1490c2, "vxlan_dev_create" },
	{ 0xbabd7d63, "dev_change_flags" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x78409324, "rtnl_delete_link" },
	{ 0xc6372da8, "ovs_vport_free" },
	{ 0x4e87782e, "ovs_netdev_link" },
	{ 0x35165a08, "ovs_netdev_tunnel_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x555d764b, "__ovs_vport_ops_register" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0x6a9f2baa, "ovs_vport_ops_unregister" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "openvswitch,vxlan");

