## LIBOPTS Makefile
MAINTAINERCLEANFILES    = Makefile.in
if INSTALL_LIBOPTS
lib_LTLIBRARIES         = libopts.la
else
noinst_LTLIBRARIES      = libopts.la
endif
libopts_la_SOURCES      = libopts.c
libopts_la_CPPFLAGS     = -I$(top_srcdir)
libopts_la_LIBADD       = $(LTLIBINTL)
libopts_la_LDFLAGS      = -version-info  36:4:11
EXTRA_DIST              = \
    ag-char-map.h           alias.c                 ao-strs.c  \
    ao-strs.h               autoopts/options.h      autoopts/project.h  \
    autoopts/usage-txt.h    autoopts.c              autoopts.h  \
    boolean.c               check.c                 compat/strchr.c  \
    compat/pathfind.c       compat/strdup.c         compat/windows-config.h  \
    compat/snprintf.c       compat/compat.h         configfile.c  \
    cook.c                  COPYING.gplv3           COPYING.lgplv3  \
    COPYING.mbsd            enum.c                  env.c  \
    file.c                  find.c                  genshell.c  \
    genshell.h              load.c                  m4/liboptschk.m4  \
    m4/libopts.m4           MakeDefs.inc            makeshell.c  \
    nested.c                numeric.c               parse-duration.c  \
    parse-duration.h        pgusage.c               proto.h  \
    putshell.c              README                  reset.c  \
    restore.c               save.c                  sort.c  \
    stack.c                 streqvcmp.c             text_mmap.c  \
    time.c                  tokenize.c              usage.c  \
    value-type.c            value-type.h            version.c  \
    xat-attribute.c         xat-attribute.h
