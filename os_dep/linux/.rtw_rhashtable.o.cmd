cmd_/home/igor/drivers/wifi/rtl8811CU/v5.8.1-patched/os_dep/linux/rtw_rhashtable.o := gcc -Wp,-MMD,/home/igor/drivers/wifi/rtl8811CU/v5.8.1-patched/os_dep/linux/.rtw_rhashtable.o.d -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/11/include  -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -Iubuntu/include  -include ./include/linux/compiler_types.h -D__KERNEL__ -fmacro-prefix-map=./= -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -std=gnu89 -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -fcf-protection=none -m64 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=kernel -DCONFIG_X86_X32_ABI -Wno-sign-compare -fno-asynchronous-unwind-tables -mindirect-branch=thunk-extern -mindirect-branch-register -fno-jump-tables -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 -fno-allow-store-data-races -Wframe-larger-than=1024 -fstack-protector-strong -Wimplicit-fallthrough -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-stack-clash-protection -g -gdwarf-4 -pg -mrecord-mcount -mfentry -DCC_USING_FENTRY -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-stringop-truncation -Wno-zero-length-bounds -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -fno-strict-overflow -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -Wno-packed-not-aligned -O1 -Wno-unused-variable -Wno-date-time -I/home/igor/drivers/wifi/rtl8811CU/v5.8.1-patched/include -I/home/igor/drivers/wifi/rtl8811CU/v5.8.1-patched/platform -I/home/igor/drivers/wifi/rtl8811CU/v5.8.1-patched/hal/btc -DCONFIG_MP_INCLUDED -DCONFIG_BT_COEXIST -DCONFIG_EFUSE_CONFIG_FILE -DEFUSE_MAP_PATH=\"/system/etc/wifi/wifi_efuse_8821cu.map\" -DWIFIMAC_PATH=\"/data/wifimac.txt\" -DCONFIG_LOAD_PHY_PARA_FROM_FILE -DREALTEK_CONFIG_PATH=\"/lib/firmware/\" -DCONFIG_TXPWR_BY_RATE=0 -DCONFIG_TXPWR_BY_RATE_EN=0 -DCONFIG_TXPWR_LIMIT=0 -DCONFIG_TXPWR_LIMIT_EN=0 -DCONFIG_RTW_ADAPTIVITY_EN=0 -DCONFIG_RTW_ADAPTIVITY_MODE=0 -DCONFIG_IEEE80211W -DHIGH_ACTIVE_HST2DEV=0 -DCONFIG_BR_EXT '-DCONFIG_BR_EXT_BRNAME="'br0'"' -DCONFIG_WIFI_MONITOR -DCONFIG_RTW_NAPI -DCONFIG_RTW_GRO -DCONFIG_RTW_NETIF_SG -DCONFIG_MP_VHT_HW_TX_MODE -mhard-float -DCONFIG_RTW_DEBUG -DRTW_LOG_LEVEL=3 -DCONFIG_PROC_DEBUG -DCONFIG_RTW_UP_MAPPING_RULE=0 -DDM_ODM_SUPPORT_TYPE=0x04 -DCONFIG_LITTLE_ENDIAN -DCONFIG_IOCTL_CFG80211 -DRTW_USE_CFG80211_STA_EVENT -I/home/igor/drivers/wifi/rtl8811CU/v5.8.1-patched/hal/phydm -DCONFIG_RTL8821C  -DMODULE  -DKBUILD_BASENAME='"rtw_rhashtable"' -DKBUILD_MODNAME='"8821cu"' -D__KBUILD_MODNAME=kmod_8821cu -c -o /home/igor/drivers/wifi/rtl8811CU/v5.8.1-patched/os_dep/linux/rtw_rhashtable.o /home/igor/drivers/wifi/rtl8811CU/v5.8.1-patched/os_dep/linux/rtw_rhashtable.c

source_/home/igor/drivers/wifi/rtl8811CU/v5.8.1-patched/os_dep/linux/rtw_rhashtable.o := /home/igor/drivers/wifi/rtl8811CU/v5.8.1-patched/os_dep/linux/rtw_rhashtable.c

deps_/home/igor/drivers/wifi/rtl8811CU/v5.8.1-patched/os_dep/linux/rtw_rhashtable.o := \
    $(wildcard include/config/RTW_MESH) \
    $(wildcard include/config/MMU) \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  include/linux/compiler_types.h \
    $(wildcard include/config/HAVE_ARCH_COMPILER_H) \
    $(wildcard include/config/CC_HAS_ASM_INLINE) \
  include/linux/compiler_attributes.h \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/RETPOLINE) \
    $(wildcard include/config/ARCH_USE_BUILTIN_BSWAP) \
    $(wildcard include/config/KCOV) \

/home/igor/drivers/wifi/rtl8811CU/v5.8.1-patched/os_dep/linux/rtw_rhashtable.o: $(deps_/home/igor/drivers/wifi/rtl8811CU/v5.8.1-patched/os_dep/linux/rtw_rhashtable.o)

$(deps_/home/igor/drivers/wifi/rtl8811CU/v5.8.1-patched/os_dep/linux/rtw_rhashtable.o):
