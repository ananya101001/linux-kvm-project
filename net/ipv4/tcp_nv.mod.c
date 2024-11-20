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
	{ 0xeee14fb8, "tcp_slow_start" },
	{ 0xfa5471ac, "tcp_cong_avoid_ai" },
	{ 0x2430fb9c, "cgroup_bpf_enabled_key" },
	{ 0x7f9525bd, "__cgroup_bpf_run_filter_sock_ops" },
	{ 0xeb5329e2, "tcp_reno_undo_cwnd" },
	{ 0x1477c4a7, "param_ops_int" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x513562ed, "tcp_register_congestion_control" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7a492395, "tcp_unregister_congestion_control" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8824F5C666B7820140FFAD2");
