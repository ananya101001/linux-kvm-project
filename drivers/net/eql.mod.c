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
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x37a0cba, "kfree" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xbd9af465, "netdev_info" },
	{ 0x24d273d1, "add_timer" },
	{ 0xe4937ea3, "unregister_netdev" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe5590ebd, "init_net" },
	{ 0x6e697614, "__dev_get_by_name" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1b6287cd, "alloc_netdev_mqs" },
	{ 0x2ec2bf40, "register_netdev" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x56d691a8, "free_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

