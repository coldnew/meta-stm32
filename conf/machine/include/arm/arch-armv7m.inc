DEFAULTTUNE ?= "armv7m"

TUNEVALID[armv7m] = "Enable instructions for ARMv7-a"
TUNECONFLICTS[armv7m] = "armv4 armv5 armv6 armv7 armv7a"
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "armv7m", " -march=armv7-m", "", d)}"
MACHINEOVERRIDES =. "${@bb.utils.contains("TUNE_FEATURES", "armv7m", "armv7m:", "" ,d)}"

require conf/machine/include/arm/arch-armv6.inc
# require conf/machine/include/arm/feature-arm-thumb.inc

# Little Endian base configs
AVAILTUNES += "armv7m"
ARMPKGARCH_tune-armv7m ?= "armv7m"
TUNE_FEATURES_tune-armv7m ?= "arm armv7m"
PACKAGE_EXTRA_ARCHS_tune-armv7m = "${PACKAGE_EXTRA_ARCHS_tune-armv6} armv7m"