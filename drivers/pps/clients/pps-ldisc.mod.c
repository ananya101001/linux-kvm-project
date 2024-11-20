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
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5ddc7d95, "pps_lookup_dev" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x498233, "pps_unregister_source" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x17092ff0, "pps_register_source" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc32874e4, "ktime_get_snapshot" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xaa29a62f, "pps_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6cc72ac6, "__dynamic_dev_dbg" },
	{ 0x25f8d481, "tty_unregister_ldisc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x72026d14, "n_tty_inherit_ops" },
	{ 0x17f46c1f, "tty_register_ldisc" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "pps_core");

