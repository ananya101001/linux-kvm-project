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

KSYMTAB_FUNC(mrp_request_join, "_gpl", "");
KSYMTAB_FUNC(mrp_request_leave, "_gpl", "");
KSYMTAB_FUNC(mrp_init_applicant, "_gpl", "");
KSYMTAB_FUNC(mrp_uninit_applicant, "_gpl", "");
KSYMTAB_FUNC(mrp_register_application, "_gpl", "");
KSYMTAB_FUNC(mrp_unregister_application, "_gpl", "");

SYMBOL_CRC(mrp_request_join, 0x335e88e1, "_gpl");
SYMBOL_CRC(mrp_request_leave, 0xd17c7323, "_gpl");
SYMBOL_CRC(mrp_init_applicant, 0x89f7b0cd, "_gpl");
SYMBOL_CRC(mrp_uninit_applicant, 0x7a06f668, "_gpl");
SYMBOL_CRC(mrp_register_application, 0xc5bce0ca, "_gpl");
SYMBOL_CRC(mrp_unregister_application, 0x721f1431, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3cab8e4a, "dev_add_pack" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb64d2547, "dev_remove_pack" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x26b65873, "skb_queue_tail" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x37a0cba, "kfree" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x1b1a9ed4, "dev_mc_add" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x523d13e7, "__dev_queue_xmit" },
	{ 0xf7157488, "skb_dequeue" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0xd3a4257, "dev_mc_del" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0xa542eb90, "skb_clone" },
	{ 0xe065f55b, "consume_skb" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

