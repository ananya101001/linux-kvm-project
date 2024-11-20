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
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0xf2d14359, "xenbus_switch_state" },
	{ 0x88eacb40, "xenbus_dev_fatal" },
	{ 0xe2964344, "__wake_up" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd73653c4, "freezer_active" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0xc85970f2, "freezing_slow_path" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x8edbdaa3, "tpmm_chip_alloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x41eff77b, "xenbus_setup_ring" },
	{ 0x29f4045c, "xenbus_alloc_evtchn" },
	{ 0x9b651e51, "xenbus_teardown_ring" },
	{ 0x37a0cba, "kfree" },
	{ 0x34eab46d, "bind_evtchn_to_irqhandler" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x5f00791b, "tpm_get_timeouts" },
	{ 0x3c3001c3, "tpm_chip_register" },
	{ 0xd6d905eb, "xenbus_dev_error" },
	{ 0x7693a0ac, "tpm_chip_unregister" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6afd7822, "tpm_calc_ordinal_duration" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x85cb2c45, "xen_has_pv_devices" },
	{ 0x7fe4fe4b, "__xenbus_register_frontend" },
	{ 0xdedee727, "xenbus_unregister_driver" },
	{ 0xdedf4785, "device_unregister" },
	{ 0x2d9b1e12, "xenbus_frontend_closed" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "tpm");

