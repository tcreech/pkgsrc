# $NetBSD: Makefile,v 1.23 2016/04/11 19:01:40 ryoon Exp $

DISTNAME=	qtquick1-opensource-src-${QTVERSION}
PKGNAME=	qt5-qtquick1-${QTVERSION}
PKGREVISION=	4
COMMENT=	Qt5 module for Quick1

BUILD_TARGET=		sub-tools
MAKE_ENV+=		QTDIR=${QTDIR}

INSTALL_ENV+=		INSTALL_ROOT=${DESTDIR}
INSTALLATION_DIRS+=	lib/pkgconfig

.include "../../x11/qt5-qtbase/Makefile.common"

post-install:
.for i in Qt5Declarative.pc
	cd ${DESTDIR}${PREFIX}/lib/pkgconfig && \
	ln -f -s ${QTPREFIX}/lib/pkgconfig/${i} ${i}
.endfor

.include "../../x11/qt5-qtscript/buildlink3.mk"
.include "../../x11/qt5-qttools/buildlink3.mk"
.include "../../x11/qt5-qtwebkit/buildlink3.mk"
.include "../../x11/qt5-qtxmlpatterns/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
