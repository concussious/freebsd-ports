PORTNAME=	Crypt-OpenPGP
PORTVERSION=	1.19
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Pure-Perl OpenPGP-compatible PGP implementation
WWW=		https://metacpan.org/release/Crypt-OpenPGP

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE_GPLv1+ =	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Alt-Crypt-RSA-BigInt>=0:security/p5-Alt-Crypt-RSA-BigInt \
		p5-Bytes-Random-Secure>=0:security/p5-Bytes-Random-Secure \
		p5-Crypt-Blowfish>=0:security/p5-Crypt-Blowfish \
		p5-Crypt-CAST5_PP>=0:security/p5-Crypt-CAST5_PP \
		p5-Crypt-DES_EDE3>=0:security/p5-Crypt-DES_EDE3 \
		p5-Crypt-DSA>=1.17:security/p5-Crypt-DSA \
		p5-Crypt-IDEA>=0:security/p5-Crypt-IDEA \
		p5-Crypt-RIPEMD160>=0.05:security/p5-Crypt-RIPEMD160 \
		p5-Crypt-Rijndael>=0:security/p5-Crypt-Rijndael \
		p5-Crypt-Twofish>=0:security/p5-Crypt-Twofish \
		p5-Data-Buffer>=0.04:misc/p5-Data-Buffer \
		p5-File-HomeDir>=0:devel/p5-File-HomeDir \
		p5-libwww>=0:www/p5-libwww \
		p5-URI>=0:net/p5-URI
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
