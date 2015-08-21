SUMMARY = "ucinux kernel for stm32f7-discovery"
DESCRIPTION = "ucinux kernel for stm32f7-discovery"
SECTION = "kernel"

DEPENDS += "libgcc"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"

KBRANCH ??= "linux-cortexm-1.14.1"

SRC_URI = "git://github.com/EmcraftSystems/linux-emcraft.git;branch=${KBRANCH}"

S = "${WORKDIR}/git"

# Mark archs/machines that this kernel supports
COMPATIBLE_MACHINE = "stm32f7-discovery"