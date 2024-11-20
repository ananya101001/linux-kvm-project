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
	{ 0x2ec2bf40, "register_netdev" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x1b6287cd, "alloc_netdev_mqs" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4efaf33e, "noop_qdisc" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xabd1812a, "neigh_lookup" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x3e47caf6, "softnet_data" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf2315624, "__neigh_event_send" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x63db0b8c, "neigh_destroy" },
	{ 0x2d9c8262, "__neigh_create" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe065f55b, "consume_skb" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x1ba6c3be, "netif_tx_wake_queue" },
	{ 0x2beb13a8, "skb_queue_purge_reason" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x5ad11a13, "qdisc_reset" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0xe4937ea3, "unregister_netdev" },
	{ 0x56d691a8, "free_netdev" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

