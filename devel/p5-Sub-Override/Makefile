# $NetBSD: Makefile,v 1.10 2015/06/12 10:49:45 wiz Exp $

DISTNAME=	Sub-Override-0.09
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Sub/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Sub-Override/
COMMENT=	Perl 5 module for easily overriding subroutines
LICENSE=	${PERL5_LICENSE}

USE_LANGUAGES=	# empty
PERL5_PACKLIST=	auto/Sub/Override/.packlist

BUILD_DEPENDS+=	p5-Sub-Uplevel-[0-9]*:../../devel/p5-Sub-Uplevel
BUILD_DEPENDS+=	p5-Test-Fatal>=0.013:../../devel/p5-Test-Fatal

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
