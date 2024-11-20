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
	{ 0x377214d3, "seq_printf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5db87f6c, "seq_putc" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x3d1a1b7b, "seq_write" },
	{ 0x4c7ece16, "l2tp_session_put" },
	{ 0xbf78f9ac, "l2tp_tunnel_put" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xdf40ccce, "const_pcpu_hot" },
	{ 0x7f5f2b64, "get_net_ns_by_pid" },
	{ 0x3e672d5a, "seq_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x92104429, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7c6eb6d0, "seq_release" },
	{ 0x88ddfabb, "l2tp_session_get_next" },
	{ 0xd231a7ba, "l2tp_tunnel_get_next" },
	{ 0xc520b851, "seq_lseek" },
	{ 0x5c4440b5, "seq_read" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8b0ac9d7, "debugfs_create_dir" },
	{ 0x51cd0202, "debugfs_create_file" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8656f320, "debugfs_remove" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "3D7047D98FEC2C145A452B8");
