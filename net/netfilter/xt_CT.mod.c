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
	{ 0x7affc372, "nf_ct_netns_get" },
	{ 0xc97cfd53, "nf_ct_tmpl_alloc" },
	{ 0x369490a9, "nf_ct_ecache_ext_add" },
	{ 0xf38a1a13, "nf_ct_tmpl_free" },
	{ 0xa916b694, "strnlen" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x64261cc1, "nf_ct_l4proto_find" },
	{ 0x66ae4279, "nf_ct_set_timeout" },
	{ 0x24574fc9, "nf_conntrack_helper_try_module_get" },
	{ 0xbdd4326c, "nf_ct_helper_ext_add" },
	{ 0x122c3a7e, "_printk" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc2d5d571, "xt_register_targets" },
	{ 0x9d47a039, "xt_unregister_targets" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x824aae3f, "nf_conntrack_helper_put" },
	{ 0x26040007, "nf_ct_netns_put" },
	{ 0xa02efb9e, "nf_ct_destroy_timeout" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,x_tables");

