PORTNAME=	qoauth
PORTVERSION=	2.0.0
DISTVERSIONPREFIX=	v
PORTREVISION=	7
CATEGORIES=	net devel security
PKGNAMESUFFIX=	-qt5

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt5 support for OAuth-powered network services
WWW=		https://github.com/ayoy/qoauth

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libqca-qt5.so:devel/qca@qt5

USES=		compiler:c++11-lang qmake:outsource qt:5
USE_LDCONFIG=	yes
USE_QT=		core network testlib buildtools:build qmake:build

USE_GITHUB=	yes
GH_ACCOUNT=	ayoy

.include <bsd.port.mk>
