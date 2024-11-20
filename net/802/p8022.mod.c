#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(register_8022_client, "", "");
KSYMTAB_FUNC(unregister_8022_client, "", "");

SYMBOL_CRC(register_8022_client, 0x636ff24f, "");
SYMBOL_CRC(unregister_8022_client, 0x7884e802, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3df8b9c2, "llc_build_and_send_ui_pkt" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0x541a86af, "llc_sap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x42bd4e3c, "llc_sap_close" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "llc");

