PORTNAME=	qdldl
PORTVERSION=	0.1.7.post5
PORTREVISION=	1
CATEGORIES=	math python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	QDLDL free LDL factorization routine for linear systems: Ax = b
WWW=		https://github.com/oxfordcontrol/qdldl-python/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_armv7=	error: no matching function for call to 'amd_l_order', see https://github.com/oxfordcontrol/qdldl-python/issues/15
BROKEN_i386=	error: no matching function for call to 'amd_l_order', see https://github.com/oxfordcontrol/qdldl-python/issues/15

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pybind11>0:devel/py-pybind11@${PY_FLAVOR} \
		cmake:devel/cmake-core
RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}scipy>=0.13.2:science/py-scipy@${PY_FLAVOR}
TEST_DEPENDS=	pytest:devel/py-pytest@${PY_FLAVOR}

USES=		compiler:c++11-lang python
USE_PYTHON=	distutils autoplist

TEST_ENV=	${MAKE_ENV} PYTHONPATH=${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/qdldl.cpython-*.so

do-test: install # this is required for some reason, and TEST_ENV doesn't work
	@cd ${WRKSRC} && pytest

# tests as of 0.1.7.post5: 4 failed, 5 passed in 12.28s, see https://github.com/osqp/qdldl-python/issues/53

.include <bsd.port.mk>
