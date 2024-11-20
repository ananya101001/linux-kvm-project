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
	{ 0x4336fcca, "ucs2_as_utf8" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x5a3c9dbb, "efivar_get_variable" },
	{ 0x6bd88b5, "ucs2_strnlen" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0xa336852c, "efivar_get_next_variable" },
	{ 0x68937864, "pstore_register" },
	{ 0x1fa48995, "efivar_supports_writes" },
	{ 0x2303b915, "efivar_lock" },
	{ 0x2cb79e0f, "pstore_unregister" },
	{ 0x95e07442, "param_set_bool" },
	{ 0xaf2cecc6, "param_get_bool" },
	{ 0x566b7206, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11940489, "efivar_set_variable" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xdceb5362, "efi_status_to_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2cfcd2e, "efivar_trylock" },
	{ 0xefc77711, "efivar_set_variable_locked" },
	{ 0xc961bff7, "efivar_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

