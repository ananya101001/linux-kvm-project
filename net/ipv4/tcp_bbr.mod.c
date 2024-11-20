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
	{ 0x513562ed, "tcp_register_congestion_control" },
	{ 0x7a492395, "tcp_unregister_congestion_control" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb911bb58, "minmax_running_max" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x1626cdd3, "register_btf_kfunc_id_set" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

