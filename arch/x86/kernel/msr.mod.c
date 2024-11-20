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
	{ 0x4a958e37, "class_register" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xb66eb73f, "__cpuhp_setup_state" },
	{ 0x9901bc1d, "class_unregister" },
	{ 0x122c3a7e, "_printk" },
	{ 0xaab744b7, "__cpuhp_remove_state" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x77bc13a0, "strim" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x127d83ea, "security_locked_down" },
	{ 0xeb6eb87, "add_taint" },
	{ 0xb9e276cf, "wrmsr_safe_regs_on_cpu" },
	{ 0x3a2d1dfa, "rdmsr_safe_regs_on_cpu" },
	{ 0x804af87c, "wrmsr_safe_on_cpu" },
	{ 0xca45892d, "no_seek_end_llseek" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x50785e75, "device_destroy" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5d480ef3, "device_create" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xc6cbbc89, "capable" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4d8e509f, "__register_chrdev" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

