FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

EXTRASITECONFIG_append_stm32f7-discovery = " CFLAGS='${CFLAGS} -mfix-cortex-m3-ldrd' "

SRCREV = "0aaf783f8d0c2748aee458ecd5b846be595c3068"
SRCBRANCH = "0.9.33"

SRC_URI += "file://fragment.cfg \
            file://0001-Fix-build-error-for-Cortex-M3-build.patch \
            file://0002-Fixed-clone-for-Cortex-M3.patch \
            file://0003-Implemented-testandset-for-Cortex-M3.patch \
            git://uclibc.org/uClibc.git;branch=${SRCBRANCH}"

SRC_URI_remove = "git://uclibc.org/uClibc.git;branch=master \
                  file://0002-Add-implementation-for-copysignl-for-ppc.patch \
		  file://0003-Add-argp-implementation.patch \
		  file://0005-Always-use-O2-for-compiling-fork.c.patch \
		  file://0006-ldso-limited-support-for-ORIGIN-in-rpath.patch"
