PORTNAME=	lxtask
PORTVERSION=	0.1.10
PORTREVISION=	2
CATEGORIES=	sysutils gnome
MASTER_SITES=	SF/lxde/LXTask%20%28task%20manager%29/LXTask%200.1.x/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Lightweight desktop-independent task manager
WWW=		https://wiki.lxde.org/en/LXTask

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		gmake gnome iconv pkgconfig tar:xz
USE_GNOME=	cairo gdkpixbuf gtk20 intlhack
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share

CFLAGS+=	-fcommon

PORTDOCS=	AUTHORS README

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes

NLS_USES=	gettext localbase
NLS_USES_OFF=	gettext-tools

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
