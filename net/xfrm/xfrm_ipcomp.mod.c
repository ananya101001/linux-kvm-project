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

KSYMTAB_FUNC(ipcomp_input, "_gpl", "");
KSYMTAB_FUNC(ipcomp_output, "_gpl", "");
KSYMTAB_FUNC(ipcomp_destroy, "_gpl", "");
KSYMTAB_FUNC(ipcomp_init_state, "_gpl", "");

SYMBOL_CRC(ipcomp_input, 0x6e89322a, "_gpl");
SYMBOL_CRC(ipcomp_output, 0xdd766180, "_gpl");
SYMBOL_CRC(ipcomp_destroy, 0x6eb7cd9c, "_gpl");
SYMBOL_CRC(ipcomp_init_state, 0xd5f3fb2f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x999e8297, "vfree" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0xc25d94c1, "pcpu_alloc_noprof" },
	{ 0x618911fc, "numa_node" },
	{ 0x838eb641, "vmalloc_node_noprof" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xa116e62e, "crypto_alloc_base" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x6775c90f, "skb_push" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x24a1403a, "crypto_comp_compress" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x69da51b6, "___pskb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdff865b1, "xfrm_state_delete_tunnel" },
	{ 0x11acba5f, "crypto_comp_decompress" },
	{ 0x5717123e, "alloc_pages_noprof" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "xfrm_algo");

