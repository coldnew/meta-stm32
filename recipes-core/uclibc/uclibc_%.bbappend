FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

EXTRASITECONFIG_append_stm32f7-discovery = " CFLAGS='${CFLAGS} -mfix-cortex-m7-ldrd' "
