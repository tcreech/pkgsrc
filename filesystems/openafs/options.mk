.include "../../mk/bsd.prefs.mk"

PKG_OPTIONS_VAR=        PKG_OPTIONS.openafs
PKG_SUPPORTED_OPTIONS+= server bitmap-later kernel-module supergroups namei rename-kpasswd
.if ${MACHINE_ARCH} != "x86_64"
PKG_SUPPORTED_OPTIONS+= pam
.endif
PKG_SUGGESTED_OPTIONS=  server -bitmap-later namei -kernel-module supergroups rename-kpasswd

.include "../../mk/bsd.options.mk"

.if !empty(PKG_OPTIONS:Msupergroups)
CONFIGURE_ARGS+=        --enable-supergroups
.endif
.if !empty(PKG_OPTIONS:Mbitmap-later)
CONFIGURE_ARGS+=        --enable-bitmap-later
.endif
.if !empty(PKG_OPTIONS:Mkernel-module)
CONFIGURE_ARGS+=        --enable-kernel-module
PLIST_SRC+=				${.CURDIR}/PLIST.kernel
.else
CONFIGURE_ARGS+=        --disable-kernel-module
.endif
.if !empty(PKG_OPTIONS:Mnamei)
CONFIGURE_ARGS+=        --enable-namei-fileserver
.endif
.if !empty(PKG_OPTIONS:Mpam)
CONFIGURE_ARGS+=        --enable-pam
.include "../../mk/pam.buildlink3.mk"
PLIST_SRC+=             ${.CURDIR}/PLIST.pam
.else
CONFIGURE_ARGS+=        --disable-pam
.endif
.if !empty(PKG_OPTIONS:Mrename-kpasswd)
PLIST_SRC+=				${.CURDIR}/PLIST.rename-kpasswd
.else
PLIST_SRC+=				${.CURDIR}/PLIST.no-rename-kpasswd
.endif
