PORTNAME=	commons-configuration
PORTVERSION=	1.10
PORTREVISION=	1
CATEGORIES=	devel java
MASTER_SITES=	APACHE_COMMONS_BINARIES
PKGNAMEPREFIX=	apache-
DISTNAME=	${PORTNAME}-${PORTVERSION}-bin

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Java package for the reading of configuration/preferences files
WWW=		https://commons.apache.org/proper/commons-configuration/

LICENSE=	APACHE20

RUN_DEPENDS=	${JAVALIBDIR}/commons-beanutils.jar:java/apache-commons-beanutils \
		${JAVALIBDIR}/commons-lang.jar:java/apache-commons-lang \
		${JAVALIBDIR}/commons-logging.jar:java/apache-commons-logging

USES=		java

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

OPTIONS_DEFINE=	DOCS

NO_BUILD=	yes

PORTDOCS=	*
PLIST_FILES+=	%%JAVAJARDIR%%/${PORTNAME}.jar

do-install:
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}-${PORTVERSION}.jar \
		${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar
	cd ${WRKSRC}/apidocs && ${FIND} . -type d -exec ${MKDIR} \
		${STAGEDIR}${DOCSDIR}/{} \;
	cd ${WRKSRC}/apidocs && ${FIND} . -type f -exec ${INSTALL_DATA} {} \
		${STAGEDIR}${DOCSDIR}/{} \;

.include <bsd.port.mk>
