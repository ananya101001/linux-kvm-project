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

KSYMTAB_FUNC(poly1305_init_arch, "", "");
KSYMTAB_FUNC(poly1305_update_arch, "", "");
KSYMTAB_FUNC(poly1305_final_arch, "", "");

SYMBOL_CRC(poly1305_init_arch, 0xe1df0e1b, "");
SYMBOL_CRC(poly1305_update_arch, 0xd9ec23eb, "");
SYMBOL_CRC(poly1305_final_arch, 0xfaeb41b2, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xfa406eba, "crypto_register_shash" },
	{ 0x6eef9a09, "crypto_unregister_shash" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0xfb578fc5, "memset" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

