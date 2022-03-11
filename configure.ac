AC_INIT([helloworld], [1.0], [gautric@redhat.com])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CC
#
AC_CONFIG_MACRO_DIRS([m4])
AC_CONFIG_HEADERS([config.h])
ACLOCAL_AMFLAGS([-I m4])
AC_CONFIG_FILES([
 Makefile
 lib/Makefile
 src/Makefile
])
AM_PROG_AR
LT_INIT(shared)
AC_OUTPUT