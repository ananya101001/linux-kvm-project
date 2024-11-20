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
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x6f915a45, "dqstats" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0x484a00b4, "__quota_error" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x57bc19d2, "down_write" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xce807a25, "up_write" },
	{ 0x2bb6099e, "dq_data_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x668b19a1, "down_read" },
	{ 0x53b954a2, "up_read" },
	{ 0x5b0d0f96, "unregister_quota_format" },
	{ 0x122c3a7e, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa4ef0b43, "register_quota_format" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x7919d80, "init_user_ns" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

