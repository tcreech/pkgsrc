# $NetBSD: Makefile,v 1.38 2016/05/03 10:54:53 wiz Exp $

DISTNAME=	Expect-1.32
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Expect/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Expect/
COMMENT=	Perl version of the TCL "expect" tool
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-IO-Stty-[0-9]*:../../devel/p5-IO-Stty
DEPENDS+=	p5-IO-tty-[0-9]*:../../devel/p5-IO-Tty

CONFLICTS+=	p5-expect-[0-9]*

PERL5_PACKLIST=		auto/Expect/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
