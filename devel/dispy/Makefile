PORTNAME=	dispy
PORTVERSION=	4.10.6
PORTREVISION=	2
CATEGORIES=	devel net
MASTER_SITES=	SF/${PORTNAME}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@virtual-estates.net
COMMENT=	Distributed and Parallel Computing with/for Python
WWW=		http://dispy.sourceforge.net/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycos>=4.8.0:devel/pycos@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils
NO_ARCH=	yes

.include <bsd.port.mk>
