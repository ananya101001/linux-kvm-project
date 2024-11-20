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

KSYMTAB_DATA(__tracepoint_bcache_request_start, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_request_start, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_request_start, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_request_start, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_request_end, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_request_end, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_request_end, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_request_end, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_bypass_sequential, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_bypass_sequential, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_bypass_sequential, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_bypass_sequential, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_bypass_congested, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_bypass_congested, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_bypass_congested, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_bypass_congested, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_read, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_read, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_read, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_read, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_write, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_write, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_write, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_write, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_read_retry, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_read_retry, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_read_retry, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_read_retry, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_cache_insert, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_cache_insert, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_cache_insert, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_cache_insert, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_journal_replay_key, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_journal_replay_key, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_journal_replay_key, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_journal_replay_key, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_journal_write, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_journal_write, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_journal_write, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_journal_write, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_journal_full, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_journal_full, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_journal_full, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_journal_full, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_journal_entry_full, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_journal_entry_full, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_journal_entry_full, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_journal_entry_full, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_cache_cannibalize, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_cache_cannibalize, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_cache_cannibalize, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_btree_cache_cannibalize, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_read, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_read, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_read, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_btree_read, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_write, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_write, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_write, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_btree_write, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_node_alloc, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_node_alloc, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_node_alloc, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_btree_node_alloc, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_node_alloc_fail, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_node_alloc_fail, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_node_alloc_fail, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_btree_node_alloc_fail, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_node_free, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_node_free, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_node_free, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_btree_node_free, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_gc_coalesce, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_gc_coalesce, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_gc_coalesce, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_btree_gc_coalesce, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_gc_start, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_gc_start, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_gc_start, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_gc_start, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_gc_end, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_gc_end, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_gc_end, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_gc_end, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_gc_copy, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_gc_copy, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_gc_copy, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_gc_copy, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_gc_copy_collision, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_gc_copy_collision, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_gc_copy_collision, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_gc_copy_collision, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_insert_key, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_insert_key, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_insert_key, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_btree_insert_key, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_node_split, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_node_split, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_node_split, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_btree_node_split, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_node_compact, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_node_compact, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_node_compact, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_btree_node_compact, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_btree_set_root, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_btree_set_root, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_btree_set_root, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_btree_set_root, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_invalidate, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_invalidate, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_invalidate, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_invalidate, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_alloc_fail, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_alloc_fail, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_alloc_fail, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_alloc_fail, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_writeback, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_writeback, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_writeback, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_writeback, "_gpl", "");
KSYMTAB_DATA(__tracepoint_bcache_writeback_collision, "_gpl", "");
KSYMTAB_FUNC(__traceiter_bcache_writeback_collision, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_bcache_writeback_collision, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_bcache_writeback_collision, "_gpl", "");

SYMBOL_CRC(__tracepoint_bcache_request_start, 0x3b3c9e9a, "_gpl");
SYMBOL_CRC(__traceiter_bcache_request_start, 0x7c8ec43d, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_request_start, 0xfded29a9, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_request_start, 0xd7a7fbec, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_request_end, 0x2f82bed0, "_gpl");
SYMBOL_CRC(__traceiter_bcache_request_end, 0x4f748b80, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_request_end, 0x4c7f4dbf, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_request_end, 0xfce76b1e, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_bypass_sequential, 0xd9697432, "_gpl");
SYMBOL_CRC(__traceiter_bcache_bypass_sequential, 0xc61dd367, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_bypass_sequential, 0x11c25833, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_bypass_sequential, 0xf57f81ae, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_bypass_congested, 0xc4696850, "_gpl");
SYMBOL_CRC(__traceiter_bcache_bypass_congested, 0x5aa95304, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_bypass_congested, 0xb814e962, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_bypass_congested, 0x7f252e00, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_read, 0x10ac7cf3, "_gpl");
SYMBOL_CRC(__traceiter_bcache_read, 0x6116a376, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_read, 0x088b9a58, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_read, 0xedf90bb3, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_write, 0x1b592a61, "_gpl");
SYMBOL_CRC(__traceiter_bcache_write, 0x01c93255, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_write, 0x5a4577e7, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_write, 0x5dd80bd5, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_read_retry, 0x7ede5fa0, "_gpl");
SYMBOL_CRC(__traceiter_bcache_read_retry, 0x5b77e1b1, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_read_retry, 0x8541e9bd, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_read_retry, 0x787810b2, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_cache_insert, 0xb8e650f3, "_gpl");
SYMBOL_CRC(__traceiter_bcache_cache_insert, 0xb5a62a8c, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_cache_insert, 0x6588d1c9, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_cache_insert, 0x752f7fa4, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_journal_replay_key, 0x3897d30a, "_gpl");
SYMBOL_CRC(__traceiter_bcache_journal_replay_key, 0x2766fb04, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_journal_replay_key, 0x4f5848b0, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_journal_replay_key, 0xb7e5379d, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_journal_write, 0x2d0c8f7f, "_gpl");
SYMBOL_CRC(__traceiter_bcache_journal_write, 0x8787eedd, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_journal_write, 0xebdd384c, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_journal_write, 0x287090dc, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_journal_full, 0x433bebdf, "_gpl");
SYMBOL_CRC(__traceiter_bcache_journal_full, 0xe43a3cff, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_journal_full, 0x9e556ae5, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_journal_full, 0xdb0682eb, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_journal_entry_full, 0xd23098e2, "_gpl");
SYMBOL_CRC(__traceiter_bcache_journal_entry_full, 0xcb53603a, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_journal_entry_full, 0xa5ff0358, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_journal_entry_full, 0xf7a5edc7, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_cache_cannibalize, 0xe77edbb1, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_cache_cannibalize, 0xba86bfb9, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_cache_cannibalize, 0x2dc593ed, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_btree_cache_cannibalize, 0x822db771, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_read, 0x2debe93e, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_read, 0x63cac74b, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_read, 0xd6745f23, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_btree_read, 0xce451ad8, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_write, 0xfeb1d3f9, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_write, 0x569655e6, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_write, 0x9d4c2096, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_btree_write, 0x629c9180, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_node_alloc, 0x6ce1c835, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_node_alloc, 0x792a50f2, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_node_alloc, 0x109c4907, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_btree_node_alloc, 0x21b87a42, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_node_alloc_fail, 0xa7cec16d, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_node_alloc_fail, 0x679fb3a3, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_node_alloc_fail, 0xf669362c, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_btree_node_alloc_fail, 0x297e0da3, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_node_free, 0xf03a97c1, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_node_free, 0x81fc6e76, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_node_free, 0x5154120f, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_btree_node_free, 0x817ad796, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_gc_coalesce, 0xd41520d6, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_gc_coalesce, 0x1c599ebe, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_gc_coalesce, 0x1cbe0cd7, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_btree_gc_coalesce, 0xa15bd7c4, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_gc_start, 0x588f2f1c, "_gpl");
SYMBOL_CRC(__traceiter_bcache_gc_start, 0x3628eac0, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_gc_start, 0xa6233739, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_gc_start, 0x6677ebf0, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_gc_end, 0x2212926d, "_gpl");
SYMBOL_CRC(__traceiter_bcache_gc_end, 0x7ea7c2a2, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_gc_end, 0x2688a825, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_gc_end, 0xd7a376b3, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_gc_copy, 0x9de7bf46, "_gpl");
SYMBOL_CRC(__traceiter_bcache_gc_copy, 0xad6440b4, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_gc_copy, 0xe5e4ecde, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_gc_copy, 0x36f317a4, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_gc_copy_collision, 0xab4779f7, "_gpl");
SYMBOL_CRC(__traceiter_bcache_gc_copy_collision, 0xec29e22a, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_gc_copy_collision, 0x63ec55f6, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_gc_copy_collision, 0xd30206ff, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_insert_key, 0x5924d7a6, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_insert_key, 0xdc0df858, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_insert_key, 0x25595694, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_btree_insert_key, 0x972aa384, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_node_split, 0x86e1e902, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_node_split, 0x51ca5466, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_node_split, 0xfa9c6830, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_btree_node_split, 0x9d28d153, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_node_compact, 0x849e5f14, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_node_compact, 0x8e62eb2e, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_node_compact, 0xf351c4ae, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_btree_node_compact, 0xa784e073, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_btree_set_root, 0x31d6f66e, "_gpl");
SYMBOL_CRC(__traceiter_bcache_btree_set_root, 0x0ccfd8f1, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_btree_set_root, 0x8ec046cf, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_btree_set_root, 0x25cacb14, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_invalidate, 0xc36f2461, "_gpl");
SYMBOL_CRC(__traceiter_bcache_invalidate, 0xf354352d, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_invalidate, 0x38f0927c, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_invalidate, 0xc73e0c99, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_alloc_fail, 0xcaaa8397, "_gpl");
SYMBOL_CRC(__traceiter_bcache_alloc_fail, 0x224550b0, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_alloc_fail, 0x3135358a, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_alloc_fail, 0x300c8ff4, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_writeback, 0x2047df2f, "_gpl");
SYMBOL_CRC(__traceiter_bcache_writeback, 0x17a83e40, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_writeback, 0x6bbda770, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_writeback, 0xfb767f16, "_gpl");
SYMBOL_CRC(__tracepoint_bcache_writeback_collision, 0x31391e05, "_gpl");
SYMBOL_CRC(__traceiter_bcache_writeback_collision, 0x64e39418, "_gpl");
SYMBOL_CRC(__SCK__tp_func_bcache_writeback_collision, 0x1afa8b0c, "_gpl");
SYMBOL_CRC(__SCT__tp_func_bcache_writeback_collision, 0x4543b49b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x736b97bd, "bio_endio" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x9cb54e2f, "perf_trace_run_bpf_submit" },
	{ 0xf8835fbf, "__bio_advance" },
	{ 0x37712435, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe6217930, "kobject_add" },
	{ 0xce807a25, "up_write" },
	{ 0xb7c0f443, "sort" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x7b68bebe, "sysfs_remove_link" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xd7be87d8, "set_capacity" },
	{ 0xa3f8266f, "submit_bio_noacct" },
	{ 0xd9a162ba, "closure_put" },
	{ 0x6626afca, "down" },
	{ 0x2ee80b5f, "bpf_trace_run5" },
	{ 0x1b2fa1a9, "vmalloc_noprof" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x8656f320, "debugfs_remove" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0xde6889d3, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xffb7c514, "ida_free" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf1e046cc, "panic" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x5f765fd5, "zero_fill_bio_iter" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x59c98678, "del_gendisk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb5f4750d, "__put_devmap_managed_folio_refs" },
	{ 0x585258e2, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf7ce1c17, "bdev_file_open_by_dev" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x23b7ae50, "read_cache_page_gfp" },
	{ 0x11089ac7, "_ctype" },
	{ 0x95a052b1, "bpf_trace_run1" },
	{ 0xe3c17af1, "__closure_wake_up" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0xae66f0b2, "bd_unlink_disk_holder" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3ffd487f, "bio_init" },
	{ 0x43ec262e, "bio_alloc_clone" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xa384a8c, "closure_sub" },
	{ 0xe5854a98, "bio_reset" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xece784c2, "rb_first" },
	{ 0x9207278f, "__kmem_cache_create_args" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x59f073a6, "kobject_create_and_add" },
	{ 0x668b19a1, "down_read" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x34c7cdbc, "lookup_bdev" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x91200d75, "bio_free_pages" },
	{ 0xc03f042e, "kthread_create_on_node" },
	{ 0xd8bb697, "bpf_trace_run3" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x51cd0202, "debugfs_create_file" },
	{ 0x999e8297, "vfree" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0xf24e5dec, "kobject_del" },
	{ 0x3c7a51a5, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x94601fc4, "bioset_init" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x94c1bfc3, "__folio_put" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0xf22d65a9, "sysfs_create_files" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x7bb80e77, "bd_link_disk_holder" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0x3bed80a1, "file_bdev" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf2d95916, "mempool_init_noprof" },
	{ 0xc29bf967, "strspn" },
	{ 0x754d539c, "strlen" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x8b0ac9d7, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x9737feb5, "bio_alloc_bioset" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x53b954a2, "up_read" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x968f7967, "kobject_get" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x7ac1254b, "local_clock" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x6c90184e, "kmem_cache_destroy" },
	{ 0x3501b0d3, "bio_split" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0xbd566832, "blkdev_issue_discard" },
	{ 0x7ab30f45, "kobject_put" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0xec16a055, "bio_associate_blkg" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xfac73ba8, "set_disk_ro" },
	{ 0xf8cbbf1d, "__blk_alloc_disk" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe6d35498, "bdev_file_open_by_path" },
	{ 0x8cfdcc81, "shrinker_alloc" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xdfccba41, "__bio_add_page" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xb6671de9, "bpf_trace_run4" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd7e56a4e, "simple_strtoll" },
	{ 0xa08e2d34, "bio_copy_data" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x77bc13a0, "strim" },
	{ 0x4ec8d88, "vmalloc_to_page" },
	{ 0xb0e602eb, "memmove" },
	{ 0x69e9c1d7, "device_add_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc1cc4ef1, "trace_raw_output_prep" },
	{ 0x83d726fc, "bio_init_clone" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xca9360b5, "rb_next" },
	{ 0x2bd8a8bb, "blk_fill_rwbs" },
	{ 0xc5597d14, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x825be683, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xcf2a6966, "up" },
	{ 0x9016047c, "closure_wait" },
	{ 0x7be0f43, "kobject_init" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xaf437a95, "trace_event_raw_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0xcf8e538f, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xeaf3cb23, "crc64_be" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xe893d918, "__module_get" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x30e8e3ee, "__closure_sync" },
	{ 0x709b4480, "bio_end_io_acct_remapped" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x16d30c75, "wake_up_process" },
	{ 0xacb0f234, "shrinker_free" },
	{ 0x6d9e9eae, "trace_event_buffer_commit" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x5a9b373f, "bio_clone_blkg_association" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x122c3a7e, "_printk" },
	{ 0x80131ca2, "put_disk" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x887a9c16, "fs_kobj" },
	{ 0xa916b694, "strnlen" },
	{ 0x2c3368b2, "shrinker_register" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x686a1b5, "__free_pages" },
	{ 0xbf9308e3, "submit_bio" },
	{ 0x7f1fd79f, "module_put" },
	{ 0xf616b605, "bio_start_io_acct" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5cad8430, "sysfs_create_link" },
	{ 0xb35ee0d2, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xfeb343d1, "mempool_alloc_noprof" },
	{ 0xf818ae8e, "kobject_uevent_env" },
	{ 0xeff5e7af, "bio_put" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

