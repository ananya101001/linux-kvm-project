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

KSYMTAB_FUNC(chacha20poly1305_encrypt, "", "");
KSYMTAB_FUNC(xchacha20poly1305_encrypt, "", "");
KSYMTAB_FUNC(chacha20poly1305_decrypt, "", "");
KSYMTAB_FUNC(xchacha20poly1305_decrypt, "", "");
KSYMTAB_FUNC(chacha20poly1305_encrypt_sg_inplace, "", "");
KSYMTAB_FUNC(chacha20poly1305_decrypt_sg_inplace, "", "");

SYMBOL_CRC(chacha20poly1305_encrypt, 0x147c3f2e, "");
SYMBOL_CRC(xchacha20poly1305_encrypt, 0xce15a526, "");
SYMBOL_CRC(chacha20poly1305_decrypt, 0xc20134e7, "");
SYMBOL_CRC(xchacha20poly1305_decrypt, 0x521c7102, "");
SYMBOL_CRC(chacha20poly1305_encrypt_sg_inplace, 0x6c713da5, "");
SYMBOL_CRC(chacha20poly1305_decrypt_sg_inplace, 0x916491ac, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8988704a, "sg_miter_next" },
	{ 0xe1df0e1b, "poly1305_init_arch" },
	{ 0x35b0ea3, "sg_miter_stop" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x4c3d8970, "sg_miter_start" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xc62611e1, "scatterwalk_map_and_copy" },
	{ 0xdd8ec6bd, "hchacha_block_arch" },
	{ 0xdc94f829, "chacha_init_arch" },
	{ 0xd9ec23eb, "poly1305_update_arch" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xdf9734a7, "sg_nents" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x43babd19, "sg_init_one" },
	{ 0xfaeb41b2, "poly1305_final_arch" },
	{ 0x220b49ab, "chacha_crypt_arch" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "poly1305-x86_64,chacha-x86_64");

