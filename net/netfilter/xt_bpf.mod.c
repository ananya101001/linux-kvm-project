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
	{ 0x53569707, "this_cpu_off" },
	{ 0x49608959, "migrate_disable" },
	{ 0x4d7272e4, "migrate_enable" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2e62920b, "xt_unregister_matches" },
	{ 0xa916b694, "strnlen" },
	{ 0xc81c17f1, "bpf_prog_get_type_path" },
	{ 0xf4d50f3e, "bpf_prog_create" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6238493f, "bpf_prog_get_type_dev" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb99fd232, "xt_register_matches" },
	{ 0x9685ea8b, "bpf_prog_destroy" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "x_tables");

