#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([libebpf], [0.1], [suchakrapani.sharma@polymtl.ca])
AM_INIT_AUTOMAKE([foreign dist-bzip2])
AC_OUTPUT(Makefile src/Makefile)
AC_CONFIG_MACRO_DIR([m4])

AC_CONFIG_SRCDIR([src/core.c])
#AC_CONFIG_HEADERS([config.h])
LT_INIT

# Checks for programs.
AM_PROG_CC_C_O
AC_PROG_LIBTOOL

# For assembler sources
AM_PROG_AS

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stddef.h stdlib.h string.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE

# Checks for library functions.
AC_FUNC_MALLOC
AC_CHECK_FUNCS([getpagesize memset])

AC_OUTPUT
