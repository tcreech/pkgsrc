# $NetBSD: Makefile,v 1.3 2016/04/09 12:51:48 adam Exp $

PKGNAME=	${DISTNAME:C/-/94-dblink-/}
COMMENT=	Dblink module for remote database connections

DEPENDS+=	postgresql94-server>=${PKGVERSION_NOREV}:../../databases/postgresql94-server

.include "../../databases/postgresql94/Makefile.common"

CONFIGURE_ARGS+=	--with-openssl
BUILD_MAKE_FLAGS=	USE_PGXS=1

BUILD_DIRS=		contrib/dblink

.include "../../databases/postgresql94-client/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
