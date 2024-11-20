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
	{ 0x122c3a7e, "_printk" },
	{ 0xf533c480, "md_account_bio" },
	{ 0xb895eb4c, "disk_live" },
	{ 0xec16a055, "bio_associate_blkg" },
	{ 0x176bd70f, "__tracepoint_block_bio_remap" },
	{ 0xa3f8266f, "submit_bio_noacct" },
	{ 0x736b97bd, "bio_endio" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x273aff5c, "__SCT__tp_func_block_bio_remap" },
	{ 0xc6c5f91e, "md_error" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x3501b0d3, "bio_split" },
	{ 0xeb692a57, "bio_chain" },
	{ 0x690a6013, "md_flush_request" },
	{ 0xa821b78a, "md_submit_discard_bio" },
	{ 0xa665aed5, "md_check_no_bitmap" },
	{ 0xff8b936b, "md_set_array_sectors" },
	{ 0x9fc469ff, "md_integrity_register" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xad908a6b, "__SCK__tp_func_block_bio_remap" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf9202446, "register_md_personality" },
	{ 0x37a0cba, "kfree" },
	{ 0x56470118, "__warn_printk" },
	{ 0x377214d3, "seq_printf" },
	{ 0x36370808, "md_init_stacking_limits" },
	{ 0x69ad7a8f, "mddev_stack_rdev_limits" },
	{ 0xc66d95a2, "queue_limits_set" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x96848186, "scnprintf" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe66d1dcb, "unregister_md_personality" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "md-mod");

