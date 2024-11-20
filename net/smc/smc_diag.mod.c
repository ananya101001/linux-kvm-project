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
	{ 0xb1400caf, "sock_diag_unregister" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0xb15aa180, "sock_diag_save_cookie" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x42bf3d6e, "sock_i_uid" },
	{ 0xc0b8681e, "from_kuid_munged" },
	{ 0xc732619, "sock_i_ino" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xdd88fd36, "smc_proto" },
	{ 0x3a9367f6, "smc_proto6" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x92697d62, "sock_diag_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x753e172b, "__netlink_dump_start" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "smc");

