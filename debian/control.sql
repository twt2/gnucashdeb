Source: gnucash
Section: utils
Priority: extra
Maintainer: James A. Treacy <treacy@debian.org>
Standards-Version: 3.5.6
Build-Depends: automake1.5, libofx-dev (>= 0.6.2-7), libfinance-quote-perl, libguppi-dev (>= 0.40.2-3), guile1.4-slib, guile1.4, libghttp-dev, m4, gettext, libtool, libgnome-dev, libgwrapguile-dev (>= 1.3.4-1), libdb3-dev, slib, swig, libglib1.2-dev, libgnomeprint-dev, libguile-dev (>= 1.4), libxml-dev, debhelper, libgal-dev (>= 0.19), libgtkhtml-dev, zlib1g-dev, libjpeg62-dev, libgconf-dev, python2.2, liborbit-dev, postgresql-dev, libungif4-dev

Package: gnucash
Architecture: any
Depends: ${shlibs:Depends}, slib, guile1.4-slib, libfinance-quote-perl, libdate-manip-perl
Suggests: gnucash-sql, gnucash-docs
Description: A personal finance tracking program
 Gnucash can track finances in multiple accounts, keeping running
 and reconciled balances. It has an X based graphical user interface,
 double entry, a hierarchy of accounts, expense accounts (categories),
 and can import Quicken QIF files.

Package: gnucash-sql
Architecture: any
Depends: ${shlibs:Depends}
Suggests: postgresql
Description: A personal finance tracking program
 Gnucash can track finances in multiple accounts, keeping running
 and reconciled balances. It has an X based graphical user interface,
 double entry, a hierarchy of accounts, expense accounts (categories),
 and can import Quicken QIF files.
 .
 This package adds SQL support (using postgresql) to the gnucash package.

Package: gnucash-hbci
Architecture: any
Depends: ${shlibs:Depends}
Description: A personal finance tracking program
 Gnucash can track finances in multiple accounts, keeping running
 and reconciled balances. It has an X based graphical user interface,
 double entry, a hierarchy of accounts, expense accounts (categories),
 and can import Quicken QIF files.
 .
 This package adds support for hbci, a home banking standard used in
 Germany.
