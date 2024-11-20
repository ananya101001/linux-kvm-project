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

KSYMTAB_FUNC(tpm_chip_start, "_gpl", "");
KSYMTAB_FUNC(tpm_chip_stop, "_gpl", "");
KSYMTAB_FUNC(tpm_try_get_ops, "_gpl", "");
KSYMTAB_FUNC(tpm_put_ops, "_gpl", "");
KSYMTAB_FUNC(tpm_default_chip, "_gpl", "");
KSYMTAB_FUNC(tpm_chip_alloc, "_gpl", "");
KSYMTAB_FUNC(tpmm_chip_alloc, "_gpl", "");
KSYMTAB_FUNC(tpm_chip_bootstrap, "_gpl", "");
KSYMTAB_FUNC(tpm_chip_register, "_gpl", "");
KSYMTAB_FUNC(tpm_chip_unregister, "_gpl", "");
KSYMTAB_FUNC(tpm_calc_ordinal_duration, "_gpl", "");
KSYMTAB_FUNC(tpm_transmit_cmd, "_gpl", "");
KSYMTAB_FUNC(tpm_get_timeouts, "_gpl", "");
KSYMTAB_FUNC(tpm_is_tpm2, "_gpl", "");
KSYMTAB_FUNC(tpm_pcr_read, "_gpl", "");
KSYMTAB_FUNC(tpm_pcr_extend, "_gpl", "");
KSYMTAB_FUNC(tpm_pm_suspend, "_gpl", "");
KSYMTAB_FUNC(tpm_pm_resume, "_gpl", "");
KSYMTAB_FUNC(tpm_get_random, "_gpl", "");
KSYMTAB_FUNC(tpm1_getcap, "_gpl", "");
KSYMTAB_FUNC(tpm1_do_selftest, "_gpl", "");
KSYMTAB_FUNC(tpm2_flush_context, "_gpl", "");
KSYMTAB_FUNC(tpm2_get_tpm_pt, "_gpl", "");
KSYMTAB_FUNC(tpm2_probe, "_gpl", "");
KSYMTAB_FUNC(tpm2_get_cc_attrs_tbl, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_init, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_reset, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_init_sized, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_reset_sized, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_destroy, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_length, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_append, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_append_u8, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_append_u16, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_append_u32, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_read_u8, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_read_u16, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_read_u32, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_append_name, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_append_hmac_session, "_gpl", "");
KSYMTAB_FUNC(tpm_buf_fill_hmac_session, "", "");
KSYMTAB_FUNC(tpm_buf_check_hmac_response, "", "");
KSYMTAB_FUNC(tpm2_end_auth_session, "", "");
KSYMTAB_FUNC(tpm2_start_auth_session, "", "");
KSYMTAB_FUNC(tpm2_sessions_init, "", "");

SYMBOL_CRC(tpm_chip_start, 0x3294a176, "_gpl");
SYMBOL_CRC(tpm_chip_stop, 0x76d94bd4, "_gpl");
SYMBOL_CRC(tpm_try_get_ops, 0x51de2bc0, "_gpl");
SYMBOL_CRC(tpm_put_ops, 0x8c7a71a3, "_gpl");
SYMBOL_CRC(tpm_default_chip, 0x11aaf3c1, "_gpl");
SYMBOL_CRC(tpm_chip_alloc, 0xf67f255e, "_gpl");
SYMBOL_CRC(tpmm_chip_alloc, 0x8edbdaa3, "_gpl");
SYMBOL_CRC(tpm_chip_bootstrap, 0x64fe6428, "_gpl");
SYMBOL_CRC(tpm_chip_register, 0x3c3001c3, "_gpl");
SYMBOL_CRC(tpm_chip_unregister, 0x7693a0ac, "_gpl");
SYMBOL_CRC(tpm_calc_ordinal_duration, 0x6afd7822, "_gpl");
SYMBOL_CRC(tpm_transmit_cmd, 0xb2c82a11, "_gpl");
SYMBOL_CRC(tpm_get_timeouts, 0x5f00791b, "_gpl");
SYMBOL_CRC(tpm_is_tpm2, 0x813e3cb7, "_gpl");
SYMBOL_CRC(tpm_pcr_read, 0xaa18602b, "_gpl");
SYMBOL_CRC(tpm_pcr_extend, 0x7cc4ec0e, "_gpl");
SYMBOL_CRC(tpm_pm_suspend, 0xdde2ffa0, "_gpl");
SYMBOL_CRC(tpm_pm_resume, 0x81781854, "_gpl");
SYMBOL_CRC(tpm_get_random, 0xeed464b0, "_gpl");
SYMBOL_CRC(tpm1_getcap, 0xc8d99e9c, "_gpl");
SYMBOL_CRC(tpm1_do_selftest, 0x433bc463, "_gpl");
SYMBOL_CRC(tpm2_flush_context, 0xb4a09ffd, "_gpl");
SYMBOL_CRC(tpm2_get_tpm_pt, 0x09431275, "_gpl");
SYMBOL_CRC(tpm2_probe, 0x6b250dda, "_gpl");
SYMBOL_CRC(tpm2_get_cc_attrs_tbl, 0x4c99dfec, "_gpl");
SYMBOL_CRC(tpm_buf_init, 0xe8654fd8, "_gpl");
SYMBOL_CRC(tpm_buf_reset, 0xd4bc1eb7, "_gpl");
SYMBOL_CRC(tpm_buf_init_sized, 0x178620bf, "_gpl");
SYMBOL_CRC(tpm_buf_reset_sized, 0x5ae32fa2, "_gpl");
SYMBOL_CRC(tpm_buf_destroy, 0x87456965, "_gpl");
SYMBOL_CRC(tpm_buf_length, 0x697d4548, "_gpl");
SYMBOL_CRC(tpm_buf_append, 0x110924e4, "_gpl");
SYMBOL_CRC(tpm_buf_append_u8, 0x77d59315, "_gpl");
SYMBOL_CRC(tpm_buf_append_u16, 0x033fad6c, "_gpl");
SYMBOL_CRC(tpm_buf_append_u32, 0x0e3cc3b0, "_gpl");
SYMBOL_CRC(tpm_buf_read_u8, 0x1e16a71e, "_gpl");
SYMBOL_CRC(tpm_buf_read_u16, 0x63a2e7d2, "_gpl");
SYMBOL_CRC(tpm_buf_read_u32, 0x35de3c53, "_gpl");
SYMBOL_CRC(tpm_buf_append_name, 0x229d7423, "_gpl");
SYMBOL_CRC(tpm_buf_append_hmac_session, 0xf75d83b2, "_gpl");
SYMBOL_CRC(tpm_buf_fill_hmac_session, 0xb3d53574, "");
SYMBOL_CRC(tpm_buf_check_hmac_response, 0x63701d71, "");
SYMBOL_CRC(tpm2_end_auth_session, 0x59e7056c, "");
SYMBOL_CRC(tpm2_start_auth_session, 0x352ebc6c, "");
SYMBOL_CRC(tpm2_sessions_init, 0xcaf1f0bb, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x558b281d, "aes_expandkey" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x5698c163, "crypto_destroy_tfm" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x66b9bb71, "crypto_alloc_kpp" },
	{ 0x59f0318e, "cdev_device_add" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xca844bc7, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x92b99a33, "acpi_put_table" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x9ad3e50, "aescfb_decrypt" },
	{ 0x5c9d418e, "devm_kmemdup" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xfddeb056, "efi" },
	{ 0x57bc19d2, "down_write" },
	{ 0xcca3419f, "devm_kfree" },
	{ 0x1fa6d5d3, "_dev_err" },
	{ 0xce807a25, "up_write" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x7b68bebe, "sysfs_remove_link" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x5db87f6c, "seq_putc" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdf914ea8, "hash_digest_size" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x603d0d51, "acpi_os_map_iomem" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb230d2ec, "crypto_ecdh_encode_key" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cf0e521, "_dev_warn" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x668b19a1, "down_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0xa7ab7bcc, "securityfs_remove" },
	{ 0x5c4440b5, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe9e8faeb, "efi_tpm_final_log_size" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x7b5b8f31, "sha256_update" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x22199426, "param_ops_bool" },
	{ 0x3d1a1b7b, "seq_write" },
	{ 0xe39b2ea5, "sha256" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x377214d3, "seq_printf" },
	{ 0x3ec2784d, "devm_krealloc" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x3e672d5a, "seq_open" },
	{ 0xdd18a993, "acpi_check_dsm" },
	{ 0x61e272c9, "sha256_final" },
	{ 0xe9bb6414, "__devm_add_action" },
	{ 0x754d539c, "strlen" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x53b954a2, "up_read" },
	{ 0x6b3ae022, "acpi_os_unmap_iomem" },
	{ 0x4a958e37, "class_register" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x5d64dd4d, "cdev_init" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x552c1e8b, "securityfs_create_file" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7475be8e, "crypto_ecdh_key_len" },
	{ 0x79095771, "aescfb_encrypt" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x87b76953, "devm_kmalloc" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc6f15b39, "dev_set_name" },
	{ 0x7c6eb6d0, "seq_release" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x49298bb9, "compat_only_sysfs_link_entry_to_kobj" },
	{ 0xf1a86b0f, "cdev_device_del" },
	{ 0x96848186, "scnprintf" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0xac02ff59, "securityfs_create_dir" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xe7fa695f, "device_initialize" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x43babd19, "sg_init_one" },
	{ 0xc520b851, "seq_lseek" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3131271a, "get_device" },
	{ 0x4d924f20, "memremap" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "libaescfb,ecdh_generic");


MODULE_INFO(srcversion, "31130AC0517D1B79A614719");
