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
	{ 0x2c82c36a, "security_secmark_relabel_packet" },
	{ 0x2f03fc4b, "security_secmark_refcount_inc" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x19bd383b, "security_secmark_refcount_dec" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9d47a039, "xt_unregister_targets" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc2d5d571, "xt_register_targets" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa916b694, "strnlen" },
	{ 0xf9c1f9ab, "security_secctx_to_secid" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "x_tables");

