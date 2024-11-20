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
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6639204c, "tcp_get_info" },
	{ 0xb74b2ed3, "inet_diag_dump_one_icsk" },
	{ 0xe2869f36, "inet_diag_dump_icsk" },
	{ 0x81a3e0b3, "inet_diag_unregister" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xa916b694, "strnlen" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x4dc8c704, "nla_reserve" },
	{ 0xfb578fc5, "memset" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c0fa8b1, "inet_diag_register" },
	{ 0xa8e522f8, "inet_diag_find_one_icsk" },
	{ 0x1aa41078, "sock_diag_destroy" },
	{ 0xe81c35d8, "sock_gen_put" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "inet_diag");

