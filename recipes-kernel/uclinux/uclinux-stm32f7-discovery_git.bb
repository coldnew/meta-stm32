SUMMARY = "ucinux kernel for stm32f7-discovery"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"

SRCBRANCH ??= "linux-cortexm-1.14.1"

SRC_URI = "git://github.com/EmcraftSystems/linux-emcraft.git;branch=${SRCBRANCH}"