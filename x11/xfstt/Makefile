# $NetBSD: Makefile,v 1.40 2015/07/04 16:18:43 joerg Exp $

DISTNAME=		xfstt-1.9.1
CATEGORIES=		x11 net fonts
MASTER_SITES=		http://archive.hadrons.org/software/xfstt/
EXTRACT_SUFX=		.tar.xz

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://www.hadrons.org/software/xfstt/
COMMENT=		TrueType font server for X11
LICENSE=		gnu-gpl-v2

USE_LANGUAGES=		c c++
USE_TOOLS+=		gmake pkg-config
GNU_CONFIGURE=		YES

# There isn't really any l10n yet, only some preliminary i18n support.
CONFIGURE_ARGS+=	--disable-nls

CXXFLAGS+=		-fomit-frame-pointer -ffast-math

LDFLAGS.SunOS+=		-lsocket -lnsl

RCD_SCRIPTS=		xfstt
INSTALLATION_DIRS=	bin			\
			${PKGMANDIR}/man1	\
			share/fonts/X11/TTF	\
			share/doc/xfstt		\
			share/examples/xfstt

SUBST_CLASSES+=		paths
SUBST_FILES.paths=	doc/FAQ
SUBST_SED.paths=	-e 's,/usr,${PREFIX},g'
SUBST_STAGE.paths=	post-patch

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/xfstt ${DESTDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/doc/xfstt.1x \
		${DESTDIR}${PREFIX}/${PKGMANDIR}/man1/xfstt.1
	cd ${WRKSRC} && (					\
	    ${INSTALL_DATA} doc/FAQ TODO THANKS		\
		${DESTDIR}${PREFIX}/share/doc/xfstt/ ;		\
	    ${INSTALL_DATA} doc/examples/font.properties	\
		 ${DESTDIR}${PREFIX}/share/examples/xfstt/	\
	)

.include "../../x11/fontsproto/buildlink3.mk"
.include "../../x11/xproto/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
