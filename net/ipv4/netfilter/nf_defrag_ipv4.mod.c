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

KSYMTAB_FUNC(nf_defrag_ipv4_enable, "_gpl", "");
KSYMTAB_FUNC(nf_defrag_ipv4_disable, "_gpl", "");

SYMBOL_CRC(nf_defrag_ipv4_enable, 0x9c9a9f36, "_gpl");
SYMBOL_CRC(nf_defrag_ipv4_disable, 0x55ecc4c2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x380ce666, "nf_register_net_hooks" },
	{ 0xdd56e691, "pcpu_hot" },
	{ 0xf34a82b4, "ip_defrag" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7d511f68, "nf_unregister_net_hooks" },
	{ 0x20548812, "register_pernet_subsys" },
	{ 0xd69b6e6c, "nf_defrag_v4_hook" },
	{ 0x279ed4c, "unregister_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "");

