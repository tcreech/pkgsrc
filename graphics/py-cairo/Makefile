# $NetBSD: Makefile,v 1.48 2015/12/05 21:25:45 adam Exp $

DISTNAME=		py2cairo-1.10.0
PKGNAME=		${PYPKGPREFIX}-${DISTNAME:S/py2//}
PKGREVISION=		4
CATEGORIES=		graphics
MASTER_SITES=		http://cairographics.org/releases/
EXTRACT_SUFX=		.tar.bz2

MAINTAINER=		leuzi@trash.net
HOMEPAGE=		http://cairographics.org/pycairo/
COMMENT=		Python bindings for cairo (python-2.x version)
LICENSE=		gnu-lgpl-v2.1 OR mpl-1.1

USE_PKGLOCALEDIR=	yes
USE_LIBTOOL=		yes
USE_TOOLS+=		aclocal automake pkg-config
GNU_CONFIGURE=		yes
CONFIGURE_ENV+=		PYTHON=${PYTHONBIN:Q}

PKGCONFIG_OVERRIDE+=	pycairo.pc.in
PY_PATCHPLIST=		yes
PYTHON_VERSIONS_INCOMPATIBLE=	33 34 35

post-extract:
	cd ${WRKSRC} && touch ChangeLog && aclocal && automake -a

.include "../../mk/compiler.mk"

.if !empty(CC_VERSION:Mgcc-2*) || \
    ${OPSYS} == "SunOS"
BUILDLINK_TRANSFORM+=	rm:-std=c99
.endif

.include "../../lang/python/extension.mk"
BUILDLINK_API_DEPENDS.cairo+=	cairo>=1.10
.include "../../graphics/cairo/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
