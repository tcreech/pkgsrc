# $NetBSD: Makefile,v 1.48 2014/10/09 13:44:37 wiz Exp $

META_PACKAGE=	# empty

.include "Makefile.common"
PKGREVISION=	2


DEPENDS+=	${DISTNAME:S/-/-base-/}{,nb[0-9]*}:../../devel/libtool-base
DEPENDS+=	${DISTNAME:S/-/-fortran-/}{,nb[0-9]*}:../../devel/libtool-fortran
DEPENDS+=	${DISTNAME:S/-/-info-/}{,nb[0-9]*}:../../devel/libtool-info

# There is no libltdl dependency here; this is deliberate, so that libltdl
# can be updated independently of the rest of libtool.

COMMENT=	Generic shared library support script

.include "../../mk/bsd.pkg.mk"
