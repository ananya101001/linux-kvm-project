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

KSYMTAB_FUNC(hchacha_block_arch, "", "");
KSYMTAB_FUNC(chacha_init_arch, "", "");
KSYMTAB_FUNC(chacha_crypt_arch, "", "");

SYMBOL_CRC(hchacha_block_arch, 0xdd8ec6bd, "");
SYMBOL_CRC(chacha_init_arch, 0xdc94f829, "");
SYMBOL_CRC(chacha_crypt_arch, 0x220b49ab, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xaaa4b9bc, "hchacha_block_generic" },
	{ 0x58e8de37, "skcipher_walk_virt" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x3520dd75, "crypto_register_skciphers" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xfdbba811, "skcipher_walk_done" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0xfeca761, "crypto_unregister_skciphers" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0xcec122d7, "chacha_crypt_generic" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "libchacha");

