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
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x122c3a7e, "_printk" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xaad21b46, "pci_enable_device" },
	{ 0xec0e3281, "pci_request_region" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xea43f98d, "misc_register" },
	{ 0xd79a07ea, "pci_unregister_driver" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xe893d918, "__module_get" },
	{ 0xc81ce80d, "compat_ptr_ioctl" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0x22199426, "param_ops_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x423a7b8f, "__pci_register_driver" },
	{ 0xf80d81c2, "misc_deregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa85ba472, "pci_release_region" },
	{ 0x544253f5, "pci_disable_device" },
	{ 0x72b8410a, "stream_open" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000494Fd000022C0sv*sd*bc*sc*i*");
