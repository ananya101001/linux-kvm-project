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
	{ 0x16f123e, "sg_copy_to_buffer" },
	{ 0x12627f15, "curve25519_generic" },
	{ 0xdcbeba1d, "sg_copy_from_buffer" },
	{ 0x7e6fdbfc, "curve25519_base_point" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4a5a8811, "curve25519_null_point" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x742578a5, "wait_for_random_bytes" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xbf470b5a, "crypto_unregister_kpp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xcd5b28ef, "crypto_register_kpp" },
	{ 0xbac8aeea, "sg_nents_for_len" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "libcurve25519-generic");

