FILESEXTRAPATHS_prepend := "${THISDIR}/patches:"
MENDER_UBOOT_AUTO_CONFIGURE = "0"

SRC_URI_append += " \
            file://0100-fix-sunxi-common-for-seamless-mender-integration.patch \
            "
