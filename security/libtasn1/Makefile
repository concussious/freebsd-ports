PORTNAME=	libtasn1
PORTVERSION=	4.20.0
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	GNU \
		GNUPG/gnutls/${PORTNAME}

MAINTAINER=	novel@FreeBSD.org
COMMENT=	ASN.1 structure parser library
WWW=		https://www.gnu.org/software/libtasn1/

LICENSE=	LGPL21+ GPLv3
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cpe libtool pathfix pkgconfig
USE_CSTD=	c99
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-ld-version-script
INSTALL_TARGET=	install-strip
CPE_VENDOR=	gnu

OPTIONS_DEFINE=	DOCS

TEST_TARGET=	check

DOCS=		AUTHORS NEWS README.md THANKS doc/TODO
INFO=		libtasn1

DOCS_CONFIGURE_ENABLE=	gtk-doc
DOCS_BUILD_DEPENDS=	gtkdoc-check:textproc/gtk-doc

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
