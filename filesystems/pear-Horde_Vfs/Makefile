PORTNAME=	Horde_Vfs
PORTVERSION=	2.4.2
CATEGORIES=	filesystems sysutils www pear
PKGNAMEPREFIX=	${PEAR_PKGNAMEPREFIX}

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Virtual File System API
WWW=		https://pear.horde.org

USE_HORDE_RUN=	Horde_Exception \
		Horde_Translation \
		Horde_Util

OPTIONS_DEFINE=	FTP
FTP_DESC=	Depend on FTP PHP extension

USES=	horde

FTP_USES=	php
FTP_USE=	PHP=ftp

CONFLICTS_INSTALL=	php*-pear-Horde_Vfs # bin/horde-vfs

.include <bsd.port.mk>
