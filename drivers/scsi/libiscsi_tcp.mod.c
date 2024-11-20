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

KSYMTAB_FUNC(iscsi_tcp_segment_unmap, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_segment_done, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_dgst_header, "_gpl", "");
KSYMTAB_FUNC(iscsi_segment_init_linear, "_gpl", "");
KSYMTAB_FUNC(iscsi_segment_seek_sg, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_hdr_recv_prep, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_cleanup_task, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_recv_segment_is_hdr, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_recv_skb, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_task_init, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_task_xmit, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_conn_setup, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_conn_teardown, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_r2tpool_alloc, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_r2tpool_free, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_set_max_r2t, "_gpl", "");
KSYMTAB_FUNC(iscsi_tcp_conn_get_stats, "_gpl", "");

SYMBOL_CRC(iscsi_tcp_segment_unmap, 0x5bcbf45c, "_gpl");
SYMBOL_CRC(iscsi_tcp_segment_done, 0xe092437e, "_gpl");
SYMBOL_CRC(iscsi_tcp_dgst_header, 0x0b498176, "_gpl");
SYMBOL_CRC(iscsi_segment_init_linear, 0x052693a4, "_gpl");
SYMBOL_CRC(iscsi_segment_seek_sg, 0x05b0f3ef, "_gpl");
SYMBOL_CRC(iscsi_tcp_hdr_recv_prep, 0x16f45d67, "_gpl");
SYMBOL_CRC(iscsi_tcp_cleanup_task, 0x137ff1fb, "_gpl");
SYMBOL_CRC(iscsi_tcp_recv_segment_is_hdr, 0x120a2215, "_gpl");
SYMBOL_CRC(iscsi_tcp_recv_skb, 0x8af5b3c7, "_gpl");
SYMBOL_CRC(iscsi_tcp_task_init, 0x87317c44, "_gpl");
SYMBOL_CRC(iscsi_tcp_task_xmit, 0xe721d989, "_gpl");
SYMBOL_CRC(iscsi_tcp_conn_setup, 0xb424318c, "_gpl");
SYMBOL_CRC(iscsi_tcp_conn_teardown, 0x5fc11e8b, "_gpl");
SYMBOL_CRC(iscsi_tcp_r2tpool_alloc, 0xacdff021, "_gpl");
SYMBOL_CRC(iscsi_tcp_r2tpool_free, 0xbbe536ca, "_gpl");
SYMBOL_CRC(iscsi_tcp_set_max_r2t, 0xc33aa51c, "_gpl");
SYMBOL_CRC(iscsi_tcp_conn_get_stats, 0x333d8702, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x768271bf, "iscsi_dbg_trace" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe3a61ac6, "_dev_printk" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x2e51c17d, "crypto_ahash_digest" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x808e15ac, "crypto_ahash_init" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8245dc1d, "iscsi_prep_data_out_pdu" },
	{ 0x4942a86a, "iscsi_put_task" },
	{ 0x614bc5b7, "iscsi_conn_failure" },
	{ 0x8340d788, "iscsi_conn_setup" },
	{ 0xd3165d5b, "iscsi_conn_teardown" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x3bef2f73, "iscsi_pool_init" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x8d303b1b, "iscsi_pool_free" },
	{ 0xda76bf58, "__tracepoint_iscsi_dbg_tcp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa8c4b5e1, "__SCT__tp_func_iscsi_dbg_tcp" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x10f8b997, "crypto_ahash_update" },
	{ 0x3b945a2a, "crypto_ahash_final" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7921021a, "skb_prepare_seq_read" },
	{ 0xfc8a0568, "skb_seq_read" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf4250f18, "skb_abort_seq_read" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x86ed146d, "iscsi_complete_pdu" },
	{ 0xc23448bb, "iscsi_verify_itt" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9aa0a7ba, "iscsi_itt_to_ctask" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7708e4c4, "iscsi_get_task" },
	{ 0x7a625706, "iscsi_update_cmdsn" },
	{ 0x8d89c788, "__iscsi_complete_pdu" },
	{ 0x3743e1d0, "iscsi_requeue_task" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xdc68284a, "__SCK__tp_func_iscsi_dbg_tcp" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "scsi_transport_iscsi,libiscsi");

