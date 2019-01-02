DEFAULTTUNE ?= "cortexm4"

require conf/machine/include/arm/arch-armv7a.inc

TUNEVALID[cortexm4] = "Enable Cortex-M4 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "cortexm4", " -mtune=cortex-m4", "", d)}"

TUNEVALID[armv4m] = "Enable Cortex-M4 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "armv4m", " -march=armv4-m", "", d)}"

AVAILTUNES += "cortexm4"
ARMPKGARCH_tune-cortexm4 ?= "armv4m"
TUNE_FEATURES_tune-cortexm4 ?= "armv4m vfp cortexm4 thumb"
PACKAGE_EXTRA_ARCHS_tune-cortexm4 = "${PACKAGE_EXTRA_ARCHS_tune-armv4at} armv4m-vfp armv4mt2-vfp"