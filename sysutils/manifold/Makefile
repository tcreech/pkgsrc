# $NetBSD: Makefile,v 1.4 2015/12/05 21:25:59 adam Exp $

PKGNAME=	${DISTNAME:S/^M/m/}
DISTNAME=	Manifold-0.2.0
CATEGORIES=	sysutils
MASTER_SITES=	http://pypi.python.org/packages/source/M/Manifold/

MAINTAINER=	filip@joyent.com
HOMEPAGE=	http://code.google.com/p/manifold/
COMMENT=	SMF service manifest creation tool
LICENSE=	mit

DEPENDS+=	${PYPKGPREFIX}-genshi-[0-9]*:../../www/py-genshi

USE_LANGUAGES=	# none

PYTHON_VERSIONS_INCOMPATIBLE=  33 34 35 # not yet ported as of 0.2.0

post-extract:
	${CHMOD} -R g-w ${WRKSRC}/*

.include "../../lang/python/distutils.mk"
.include "../../mk/bsd.pkg.mk"
