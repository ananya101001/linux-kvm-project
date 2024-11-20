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
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xcca5839d, "xen_vcpu_id" },
	{ 0x6da9ca52, "evtchn_make_refcounted" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xea5cbce, "xen_irq_lateeoi" },
	{ 0x3403f878, "fasync_helper" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe007edf, "xen_evtchn_nr_channels" },
	{ 0xa2af54b3, "irq_from_evtchn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xea43f98d, "misc_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0x72b8410a, "stream_open" },
	{ 0xf7866b4f, "bind_evtchn_to_irqhandler_lateeoi" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xccf69887, "get_free_pages_noprof" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa23d56ab, "kill_fasync" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

