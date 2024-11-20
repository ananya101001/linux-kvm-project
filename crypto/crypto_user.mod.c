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
	{ 0x53b954a2, "up_read" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x57bc19d2, "down_write" },
	{ 0x981f3190, "crypto_remove_spawns" },
	{ 0xce807a25, "up_write" },
	{ 0xad50959e, "crypto_mod_put" },
	{ 0x3de9cae1, "crypto_remove_final" },
	{ 0xb4ba19d7, "crypto_unregister_instance" },
	{ 0xa88683b8, "crypto_alg_mod_lookup" },
	{ 0xe68a26a4, "__netlink_kernel_create" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x7ef38e38, "__nlmsg_put" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd6e5a44c, "skb_trim" },
	{ 0x1f4733b3, "__alloc_skb" },
	{ 0xe8255b35, "netlink_unicast" },
	{ 0x277d58f3, "sk_skb_reason_drop" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x753e172b, "__netlink_dump_start" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x203b9e03, "netlink_kernel_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1441b7a8, "netlink_rcv_skb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xac9fb508, "netlink_capable" },
	{ 0x5bd0748f, "crypto_del_default_rng" },
	{ 0x36cd5f26, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x35d3dc46, "crypto_alg_sem" },
	{ 0x668b19a1, "down_read" },
	{ 0x457594fa, "crypto_alg_list" },
	{ 0xa916b694, "strnlen" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xca97e3f8, "crypto_mod_get" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

