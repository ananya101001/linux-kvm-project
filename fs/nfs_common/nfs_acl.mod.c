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

KSYMTAB_FUNC(nfsacl_encode, "_gpl", "");
KSYMTAB_FUNC(nfs_stream_encode_acl, "_gpl", "");
KSYMTAB_FUNC(nfsacl_decode, "_gpl", "");
KSYMTAB_FUNC(nfs_stream_decode_acl, "_gpl", "");

SYMBOL_CRC(nfsacl_encode, 0x0c636dfb, "_gpl");
SYMBOL_CRC(nfs_stream_encode_acl, 0x080d7d63, "_gpl");
SYMBOL_CRC(nfsacl_decode, 0x2b79749b, "_gpl");
SYMBOL_CRC(nfs_stream_decode_acl, 0xaf2a04c4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc1f0e49d, "make_kuid" },
	{ 0xb7c0f443, "sort" },
	{ 0x95bfe643, "posix_acl_alloc" },
	{ 0x38dd5b75, "from_kgid" },
	{ 0x1678131f, "from_kuid" },
	{ 0xd792889, "xdr_encode_word" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc7f28969, "posix_acl_init" },
	{ 0xa3951d2b, "make_kgid" },
	{ 0x24d2973b, "xdr_reserve_space" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xba69f5fd, "xdr_encode_array2" },
	{ 0x7919d80, "init_user_ns" },
	{ 0x15bd6e18, "xdr_decode_word" },
	{ 0x3dd7d95c, "xdr_stream_pos" },
	{ 0x638975e, "xdr_decode_array2" },
	{ 0xb0e602eb, "memmove" },
	{ 0xb8bd5570, "xdr_inline_decode" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "sunrpc");

