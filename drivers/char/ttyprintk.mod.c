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
	{ 0x9ab9e1c0, "tty_port_link_device" },
	{ 0x5e7bf0ab, "tty_register_driver" },
	{ 0x20514d2c, "register_console" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6fe3ff27, "tty_driver_kref_put" },
	{ 0x797c4b20, "tty_port_destroy" },
	{ 0x51b6df8e, "unregister_console" },
	{ 0xa49a09f5, "tty_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6e40165a, "tty_port_hangup" },
	{ 0x2e21addf, "tty_port_close" },
	{ 0xfd78449b, "tty_port_open" },
	{ 0xef412bea, "__tty_alloc_driver" },
	{ 0xc3a19086, "tty_port_init" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

