PORTNAME=	deskmenu
PORTVERSION=	1.4.5
PORTREVISION=	2
CATEGORIES=	x11
MASTER_SITES=	DEBIAN
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	matt@peterson.org
COMMENT=	X11 application launcher
WWW=		https://www.oroborus.org/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		pkgconfig gnome
USE_GNOME=	gtk20

GNU_CONFIGURE=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

PLIST_FILES=	bin/deskmenu share/man/man1/deskmenu.1.gz \
		@sample\ etc/deskmenurc.sample
PORTDOCS=	AUTHORS ChangeLog

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's,-O2 -g ,,' ${WRKSRC}/src/Makefile.in
	@${REINPLACE_CMD} -e 's,/etc/deskmenurc,${ETCDIR}rc,' \
		${WRKSRC}/example_rc ${WRKSRC}/src/deskmenu.c
	@${LN} -sf debian/changelog ${WRKSRC}/ChangeLog

post-install:
	${INSTALL_DATA} ${WRKSRC}/example_rc ${STAGEDIR}${ETCDIR}rc.sample

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
