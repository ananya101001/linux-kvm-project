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
	{ 0x26a3a33d, "nf_log_set" },
	{ 0x55d5f0df, "dev_get_by_index_rcu" },
	{ 0x29b1344e, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe5590ebd, "init_net" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0x191ca54a, "nf_log_register" },
	{ 0xbd5a4c72, "nf_log_unregister" },
	{ 0x122c3a7e, "_printk" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe7b15685, "nf_log_unset" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x7919d80, "init_user_ns" },
	{ 0x9102cff1, "from_kgid_munged" },
	{ 0xc0b8681e, "from_kuid_munged" },
	{ 0xcd6f2dc9, "nf_log_buf_add" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

