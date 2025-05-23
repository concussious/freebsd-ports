PORTNAME=	outcome
DISTVERSIONPREFIX=	v
DISTVERSION=	2.2.12
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++14 library for reporting and handling function failures
WWW=		https://ned14.github.io/outcome/ \
		https://github.com/ned14/outcome

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/Licence.txt

BUILD_DEPENDS=	${LOCALBASE}/include/quickcpplib/config.hpp:devel/quickcpplib
RUN_DEPENDS=	${LOCALBASE}/include/quickcpplib/config.hpp:devel/quickcpplib

USES=		cmake:testing compiler:c++14-lang

USE_GITHUB=	yes
GH_ACCOUNT=	ned14
GH_TUPLE=	ned14:status-code:85a75b7:status_code/include/outcome/experimental/status-code

CMAKE_OFF=	BUILD_TESTING
CMAKE_TESTING_ON=	BUILD_TESTING OUTCOME_ENABLE_DEPENDENCY_SMOKE_TEST
CMAKE_ARGS=	-Dquickcpplib_DIR=${LOCALBASE}/lib/cmake/quickcpplib

NO_BUILD=	yes
NO_ARCH=	yes

PORTSCOUT=	limit:^.*[0-9]\.[0-9].*

.include <bsd.port.pre.mk>

.if ${ARCH:Marmv?}
pre-configure:
	${FIND} ${WRKDIR} \( -name \*.hpp -o -name \*.h \) -exec ${REINPLACE_CMD} -e 's,@progbits,%progbits,' {} +
.endif

# tests as of 2.2.12: 100% tests passed, 0 tests failed out of 4

.include <bsd.port.post.mk>
