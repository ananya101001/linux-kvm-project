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
	{ 0x414a1ad, "inet_del_offload" },
	{ 0x6775c90f, "skb_push" },
	{ 0xb3500586, "esp_input_done2" },
	{ 0x64f4c46e, "__pskb_pull_tail" },
	{ 0x28871427, "skb_eth_gso_segment" },
	{ 0x3c0f2733, "inet_offloads" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe6f295a9, "ipv6_skip_exthdr" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x16c7cb91, "esp_output_head" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0x57a42a8f, "skb_ext_add" },
	{ 0xf43556ff, "esp_output_tail" },
	{ 0x99224b11, "__skb_ext_del" },
	{ 0x7d5b6f92, "xfrm_parse_spi" },
	{ 0x9cc330ea, "secpath_set" },
	{ 0x98942be5, "xfrm_state_lookup" },
	{ 0x2c15205, "xfrm_input" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xaecd4a1b, "__xfrm_state_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1e7ab656, "xfrm_register_type_offload" },
	{ 0xffea2cf3, "inet_add_offload" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5778a6c4, "xfrm_unregister_type_offload" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "esp4");

