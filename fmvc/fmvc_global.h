#ifndef FMVC_GLOBAL_H
#define FMVC_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(FMVC_LIBRARY)
#  define FMVCSHARED_EXPORT Q_DECL_EXPORT
#else
#  define FMVCSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // FMVC_GLOBAL_H
