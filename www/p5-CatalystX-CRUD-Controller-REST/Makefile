# $NetBSD: Makefile,v 1.5 2016/01/17 14:02:21 mef Exp $

DISTNAME=	CatalystX-CRUD-Controller-REST-0.005
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	www perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=CatalystX/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/CatalystX-CRUD-Controller-REST/
COMMENT=	Catalyst::Controller::REST with CRUD
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-CatalystX-CRUD>=0.54:../../databases/p5-CatalystX-CRUD
DEPENDS+=	p5-Catalyst-Action-REST-[0-9]*:../../www/p5-Catalyst-Action-REST
DEPENDS+=	p5-Catalyst-Plugin-Static-Simple-[0-9]*:../../www/p5-Catalyst-Plugin-Static-Simple
DEPENDS+=	p5-JSON>=2:../../converters/p5-JSON

USE_LANGUAGES=	# empty
PERL5_PACKLIST=	auto/CatalystX/CRUD/Controller/REST/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
