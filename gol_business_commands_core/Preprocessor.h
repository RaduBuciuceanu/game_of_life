#pragma once

#include <QtCore/qglobal.h>

#if defined(GOL_BUSINESS_COMMANDS_CORE_LIBRARY)
#define GOL_BUSINESS_COMMANDS_CORE_API Q_DECL_EXPORT
#else
#define GOL_BUSINESS_COMMANDS_CORE_API Q_DECL_IMPORT
#endif