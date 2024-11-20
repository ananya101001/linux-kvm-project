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
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x686c835b, "nf_dup_ipv6" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x37a0cba, "kfree" },
	{ 0xd3fcc511, "xt_tee_enabled" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0x4220e9cc, "nf_dup_ipv4" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x79cf879a, "dev_get_by_name" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x2c834418, "static_key_slow_inc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0xc2d5d571, "xt_register_targets" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x9d47a039, "xt_unregister_targets" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_dup_ipv6,x_tables,nf_dup_ipv4");

