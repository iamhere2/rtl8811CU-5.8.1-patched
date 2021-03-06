#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb08d359a, "module_layout" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x10403917, "usb_register_driver" },
	{ 0x46dc4dcc, "__napi_schedule" },
	{ 0x85df9b6c, "strsep" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x90503d84, "eth_type_trans" },
	{ 0x24392860, "cfg80211_external_auth_request" },
	{ 0x72514f12, "napi_gro_receive" },
	{ 0x8161f9e0, "single_release" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9762a8f0, "napi_enable" },
	{ 0x754d539c, "strlen" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xbb99883a, "skb_queue_tail" },
	{ 0x8d8a7e45, "cfg80211_rx_mgmt_khz" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xa93ee222, "cfg80211_mgmt_tx_status" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfa7b8c58, "proc_mkdir_data" },
	{ 0x9f23b06b, "dev_get_by_name" },
	{ 0xb455668f, "wiphy_apply_custom_regulatory" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x637165bc, "kern_path" },
	{ 0x4c16a1ac, "napi_disable" },
	{ 0xd746fd6b, "pv_ops" },
	{ 0xb25660bf, "free_netdev" },
	{ 0x6a1ee809, "__cfg80211_alloc_reply_skb" },
	{ 0x2be3e426, "unregister_netdevice_queue" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x75a62216, "__pskb_copy_fclone" },
	{ 0x65bdf6e9, "usb_submit_urb" },
	{ 0x8b12165, "netif_receive_skb" },
	{ 0x760a0f4f, "yield" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x29148e9b, "alloc_etherdev_mqs" },
	{ 0x6d00661, "usb_free_urb" },
	{ 0xf7dab2fc, "cfg80211_new_sta" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x392bdc9a, "unregister_netdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ea0e1aa, "flush_signals" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x6f9ed430, "cfg80211_inform_bss_frame_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x9bef3c5a, "dev_alloc_name" },
	{ 0x8d5673d6, "usb_kill_urb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xde5fef4b, "netif_carrier_on" },
	{ 0x97d93769, "cfg80211_unlink_bss" },
	{ 0x7c7c885b, "__dev_kfree_skb_any" },
	{ 0xdbbad285, "proc_create_data" },
	{ 0x66a80f82, "find_vpid" },
	{ 0x692bfda2, "usb_alloc_coherent" },
	{ 0x1000e51, "schedule" },
	{ 0x6fdf54bc, "skb_push" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xbbc19f2a, "single_open_size" },
	{ 0x1f2471fa, "kill_pid" },
	{ 0x6d5a377e, "skb_trim" },
	{ 0x34812b0c, "cfg80211_connect_done" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf24805e3, "current_task" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x2e5a1981, "netif_napi_add" },
	{ 0xcf2a6966, "up" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3c1e104, "register_netdev" },
	{ 0x93d15161, "cfg80211_put_bss" },
	{ 0x920c4ebe, "cfg80211_roamed" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xecde0a85, "remove_proc_entry" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xb42e2002, "cfg80211_scan_done" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x860f4155, "napi_complete_done" },
	{ 0xc2c48ac8, "seq_read" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xe3dd066c, "netif_carrier_off" },
	{ 0xeaeb5ea5, "usb_get_dev" },
	{ 0x14280d98, "param_ops_uint" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x2b03747, "kthread_create_on_node" },
	{ 0x33c7c7d9, "wake_up_process" },
	{ 0x8127a812, "register_netdevice" },
	{ 0xb11a5073, "seq_lseek" },
	{ 0xedcac8a1, "PDE_DATA" },
	{ 0x818bb245, "skb_copy" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x191605b8, "param_ops_charp" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x77727974, "skb_copy_bits" },
	{ 0x9166fada, "strncpy" },
	{ 0x393e3445, "cfg80211_ibss_joined" },
	{ 0x4302113d, "netif_rx" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xfe81baa6, "usb_deregister" },
	{ 0x1c52dba9, "skb_dequeue" },
	{ 0x35bc5ec6, "cfg80211_michael_mic_failure" },
	{ 0x6240b8e7, "netif_tx_wake_queue" },
	{ 0x26cc73c3, "complete_and_exit" },
	{ 0x61683d91, "cfg80211_disconnected" },
	{ 0x81e30dc9, "kernel_write" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xad9484b6, "kthread_stop" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xd758fbbb, "init_net" },
	{ 0x6b7d1c4c, "__cfg80211_send_event_skb" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x349cba85, "strchr" },
	{ 0x37a0cba, "kfree" },
	{ 0xa634acda, "seq_printf" },
	{ 0xa6257a2f, "complete" },
	{ 0x91716f73, "cfg80211_get_bss" },
	{ 0x868543aa, "wiphy_new_nm" },
	{ 0x64e576e9, "param_array_ops" },
	{ 0xd3b5ddb2, "wiphy_free" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7905016a, "device_init_wakeup" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x2ba03676, "seq_open" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x4d8560, "__netif_napi_del" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xb1a7e18f, "proc_get_parent_data" },
	{ 0xa916b694, "strnlen" },
	{ 0x269bb876, "kernel_read" },
	{ 0xe489f62e, "skb_put" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x9f984513, "strrchr" },
	{ 0x449f3fc6, "cfg80211_ready_on_channel" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe9c0bc61, "skb_clone" },
	{ 0x5a921311, "strncmp" },
	{ 0x2dced4f, "ieee80211_get_channel_khz" },
	{ 0x63e0dbcb, "cfg80211_ch_switch_started_notify" },
	{ 0xa91aadb5, "usb_put_dev" },
	{ 0xe7135c70, "filp_close" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb0e602eb, "memmove" },
	{ 0x86f0791a, "cfg80211_ch_switch_notify" },
	{ 0xb2c04520, "usb_control_msg" },
	{ 0xe590368e, "param_ops_int" },
	{ 0x579c4d27, "napi_schedule_prep" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4e3773aa, "single_open" },
	{ 0xfb578fc5, "memset" },
	{ 0x92f7b18a, "__pskb_pull_tail" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xca47bf78, "usb_alloc_urb" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x87786ec1, "filp_open" },
	{ 0x5849db69, "usb_autopm_get_interface" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcd0baccc, "wiphy_unregister" },
	{ 0xb3ec4acc, "seq_release" },
	{ 0xbf4e73aa, "netif_tx_stop_all_queues" },
	{ 0x6602daa6, "cfg80211_del_sta_sinfo" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x3966376f, "cfg80211_vendor_cmd_reply" },
	{ 0xb42b2bc9, "usb_autopm_put_interface" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x1af98ce1, "__netdev_alloc_skb" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0xc5850110, "printk" },
	{ 0xadeb0eb, "nla_put_nohdr" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xc3043081, "cfg80211_remain_on_channel_expired" },
	{ 0xfa9a9593, "nla_put" },
	{ 0x11d129b0, "wiphy_register" },
	{ 0x8016acfb, "__cfg80211_alloc_event_skb" },
	{ 0x999e8297, "vfree" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x75b3f2e6, "usb_free_coherent" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x3fd6ba85, "skb_pull" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v0BDApB82Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB820d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC821d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC820d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC82Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC82Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC811d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8811d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp2006d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p331Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C467D7E173D57EF3DA1AB28");
