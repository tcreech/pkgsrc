# $NetBSD: Makefile,v 1.7 2015/05/03 17:52:39 wiz Exp $

DISTNAME=	hyphen-coptic
PKGNAME=	tex-${DISTNAME}-2013
PKGREVISION=	1
TEXLIVE_REV=	23085

MAINTAINER=	minskim@NetBSD.org
COMMENT=	Hyphenation patterns for Coptic

CONFLICTS+=	teTeX-texmf<=3.0nb12
DEPENDS+=	tex-hyph-utf8-[0-9]*:../../print/tex-hyph-utf8

TEX_HYPHEN_DAT+=	coptic loadhyph-cop.tex
TEX_HYPHEN_DEF+=	\\addlanguage{coptic}{loadhyph-cop.tex}{}{1}{1}
TEX_HYPHEN_LUA+=	['coptic']={ \
			  loader='loadhyph-cop.tex', \
			  lefthyphenmin=1, \
			  righthyphenmin=1, \
			  synonyms={}, \
			  patterns='hyph-cop.pat.txt', \
			  hyphenation='', \
			},

.include "../../print/texlive/package.mk"
.include "../../mk/bsd.pkg.mk"
