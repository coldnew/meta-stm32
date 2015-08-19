DEFAULTTUNE ?= "cortexm7"

require conf/machine/include/arm/arch-armv7a.inc

TUNEVALID[cortexm7] = "Enable Cortex-M7 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "cortexm7", " -mtune=cortex-m7", "", d)}"

TUNEVALID[armv7m] = "Enable Cortex-M7 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "armv7m", " -march=armv7-m", "", d)}"

AVAILTUNES += "cortexm7"
ARMPKGARCH_tune-cortexm7 ?= "armv7m"
TUNE_FEATURES_tune-cortexm7 ?= "armv7m vfp cortexm7"
PACKAGE_EXTRA_ARCHS_tune-cortexm7 = "${PACKAGE_EXTRA_ARCHS_tune-armv7at} armv7m-vfp"