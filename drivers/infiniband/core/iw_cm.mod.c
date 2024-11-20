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

KSYMTAB_FUNC(iwcm_reject_msg, "", "");
KSYMTAB_FUNC(iw_create_cm_id, "", "");
KSYMTAB_FUNC(iw_cm_disconnect, "", "");
KSYMTAB_FUNC(iw_destroy_cm_id, "", "");
KSYMTAB_FUNC(iw_cm_listen, "", "");
KSYMTAB_FUNC(iw_cm_reject, "", "");
KSYMTAB_FUNC(iw_cm_accept, "", "");
KSYMTAB_FUNC(iw_cm_connect, "", "");
KSYMTAB_FUNC(iw_cm_init_qp_attr, "", "");

SYMBOL_CRC(iwcm_reject_msg, 0xf3df871f, "");
SYMBOL_CRC(iw_create_cm_id, 0x731cef0b, "");
SYMBOL_CRC(iw_cm_disconnect, 0xdfd3ebcb, "");
SYMBOL_CRC(iw_destroy_cm_id, 0xa10ceb4b, "");
SYMBOL_CRC(iw_cm_listen, 0xec3e76a1, "");
SYMBOL_CRC(iw_cm_reject, 0x5cf757a4, "");
SYMBOL_CRC(iw_cm_accept, 0xd188e758, "");
SYMBOL_CRC(iw_cm_connect, 0xad0f32a2, "");
SYMBOL_CRC(iw_cm_init_qp_attr, 0x98623a86, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92540fbf, "finish_wait" },
	{ 0xcf2a6966, "up" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa4f84056, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa916b694, "strnlen" },
	{ 0xeee92169, "rdma_nl_unicast" },
	{ 0x75a729a0, "rdma_nl_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5eb4668b, "rdma_nl_multicast" },
	{ 0xe5590ebd, "init_net" },
	{ 0x6626afca, "down" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xae7e1f5f, "ibnl_put_attr" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbcad99e6, "__netdev_alloc_skb" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb8334e12, "ib_modify_qp" },
	{ 0x3d56bfb6, "rdma_nl_unicast_wait" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xf943375f, "proc_dointvec" },
	{ 0x5ac8c04c, "unregister_net_sysctl_table" },
	{ 0x754d539c, "strlen" },
	{ 0x1c8d9b8e, "dev_kfree_skb_any_reason" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xe0b5c48c, "rdma_nl_register" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf2f6ddd5, "ibnl_put_msg" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x3d1059ea, "__nla_validate" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "ib_core");

