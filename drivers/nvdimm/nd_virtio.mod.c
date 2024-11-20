#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(virtio_pmem_host_ack, "_gpl", "");
KSYMTAB_FUNC(async_pmem_flush, "_gpl", "");

SYMBOL_CRC(virtio_pmem_host_ack, 0x9a04a614, "_gpl");
SYMBOL_CRC(async_pmem_flush, 0x84d6282e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe2964344, "__wake_up" },
	{ 0x9213582c, "virtqueue_get_buf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4c398cf1, "kmalloc_caches" },
	{ 0xe11f6bd, "__kmalloc_cache_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x77482155, "virtqueue_add_sgs" },
	{ 0x5a549f7, "_dev_info" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x894f890d, "virtqueue_kick" },
	{ 0x37a0cba, "kfree" },
	{ 0xed0b2833, "fs_bio_set" },
	{ 0x9737feb5, "bio_alloc_bioset" },
	{ 0x5a9b373f, "bio_clone_blkg_association" },
	{ 0xeb692a57, "bio_chain" },
	{ 0xbf9308e3, "submit_bio" },
	{ 0x8a02d2d4, "module_layout" },
};

MODULE_INFO(depends, "virtio_ring");

