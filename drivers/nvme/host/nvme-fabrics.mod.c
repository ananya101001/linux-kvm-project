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

KSYMTAB_FUNC(nvmf_get_address, "_gpl", "");
KSYMTAB_FUNC(nvmf_reg_read32, "_gpl", "");
KSYMTAB_FUNC(nvmf_reg_read64, "_gpl", "");
KSYMTAB_FUNC(nvmf_reg_write32, "_gpl", "");
KSYMTAB_FUNC(nvmf_subsystem_reset, "_gpl", "");
KSYMTAB_FUNC(nvmf_connect_admin_queue, "_gpl", "");
KSYMTAB_FUNC(nvmf_connect_io_queue, "_gpl", "");
KSYMTAB_FUNC(nvmf_should_reconnect, "_gpl", "");
KSYMTAB_FUNC(nvmf_register_transport, "_gpl", "");
KSYMTAB_FUNC(nvmf_unregister_transport, "_gpl", "");
KSYMTAB_FUNC(nvmf_set_io_queues, "_gpl", "");
KSYMTAB_FUNC(nvmf_map_queues, "_gpl", "");
KSYMTAB_FUNC(nvmf_ip_options_match, "_gpl", "");
KSYMTAB_FUNC(nvmf_free_options, "_gpl", "");

SYMBOL_CRC(nvmf_get_address, 0xd7f43a5c, "_gpl");
SYMBOL_CRC(nvmf_reg_read32, 0x8884974e, "_gpl");
SYMBOL_CRC(nvmf_reg_read64, 0x41d99322, "_gpl");
SYMBOL_CRC(nvmf_reg_write32, 0x26ab7aa5, "_gpl");
SYMBOL_CRC(nvmf_subsystem_reset, 0xedcae7ad, "_gpl");
SYMBOL_CRC(nvmf_connect_admin_queue, 0x913f9309, "_gpl");
SYMBOL_CRC(nvmf_connect_io_queue, 0x5530581a, "_gpl");
SYMBOL_CRC(nvmf_should_reconnect, 0x88dfc4d9, "_gpl");
SYMBOL_CRC(nvmf_register_transport, 0xbb065a5f, "_gpl");
SYMBOL_CRC(nvmf_unregister_transport, 0x02f195f8, "_gpl");
SYMBOL_CRC(nvmf_set_io_queues, 0xc009010e, "_gpl");
SYMBOL_CRC(nvmf_map_queues, 0x71fbbe0f, "_gpl");
SYMBOL_CRC(nvmf_ip_options_match, 0xf61c73ed, "_gpl");
SYMBOL_CRC(nvmf_free_options, 0xfcb2b86b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xca844bc7, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x7f1fd79f, "module_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x24d0565a, "key_put" },
	{ 0x69e683de, "uuid_gen" },
	{ 0x57bc19d2, "down_write" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x4e3567f7, "match_int" },
	{ 0x5d480ef3, "device_create" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5db87f6c, "seq_putc" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x5a1fa181, "__nvme_submit_sync_cmd" },
	{ 0x4229fc42, "nvme_try_sched_reset" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0xea43f98d, "misc_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb67fec0e, "uuid_parse" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x5c4440b5, "seq_read" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x3d1a1b7b, "seq_write" },
	{ 0x44e9a829, "match_token" },
	{ 0x50785e75, "device_destroy" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x377214d3, "seq_printf" },
	{ 0xb2fa093e, "blk_mq_map_queues" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xd4f9fdc4, "single_release" },
	{ 0x3e5729be, "nvme_wait_reset" },
	{  0xfeccb, "__seq_puts" },
	{ 0x754d539c, "strlen" },
	{ 0x50472d9a, "single_open" },
	{ 0x53b954a2, "up_read" },
	{ 0x4a958e37, "class_register" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x1f7fdb27, "try_module_get" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x96848186, "scnprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

