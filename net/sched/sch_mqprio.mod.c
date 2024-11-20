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
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfa042227, "gnet_stats_add_basic" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0xd0c643c3, "netdev_txq_to_tc" },
	{ 0x131e6bcb, "dev_deactivate" },
	{ 0x42f724f1, "dev_activate" },
	{ 0x55fae9ab, "unregister_qdisc" },
	{ 0x42b1c173, "ethtool_dev_mm_supported" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x430baca2, "qdisc_offload_query_caps" },
	{ 0x347b0b56, "mqprio_validate_qopt" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x3ec63207, "pfifo_fast_ops" },
	{ 0xa24f66c1, "default_qdisc_ops" },
	{ 0x45b1b8b8, "qdisc_create_dflt" },
	{ 0x8901b2b8, "netdev_set_tc_queue" },
	{ 0x8f717072, "mqprio_qopt_reconstruct" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0xf5c15708, "mq_change_real_num_tx" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x799b7b46, "register_qdisc" },
	{ 0x8f39c0ce, "dev_graft_qdisc" },
	{ 0x85fddb68, "qdisc_put" },
	{ 0xb2d37e5e, "qdisc_hash_add" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0474a95, "netdev_set_num_tc" },
	{ 0xa59d46b5, "mqprio_fp_to_offload" },
	{ 0x94eee8bc, "gnet_stats_copy_basic" },
	{ 0x49efda31, "gnet_stats_copy_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "sch_mqprio_lib");

