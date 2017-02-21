#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf897c635, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xdc3b4748, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x84d60b54, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x59e6c064, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x39f1dea4, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x6993cd4b, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x7d6dd7c5, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x87adfc51, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x12d61aa5, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x3784a76d, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xc55cae50, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xc6b09c2c, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x3bd92272, __VMLINUX_SYMBOL_STR(find_task_by_vpid) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{        0, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E1C5BCF4C6DD972420E73DE");
