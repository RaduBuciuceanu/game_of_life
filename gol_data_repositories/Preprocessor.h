#pragma once

#include <QtCore/qglobal.h>

#if defined(GOL_DATA_REPOSITORIES_LIBRARY)
#define GOL_DATA_REPOSITORIES_API Q_DECL_EXPORT
#else
#define GOL_DATA_REPOSITORIES_API Q_DECL_IMPORT
#endif
