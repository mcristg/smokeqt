#ifndef QT3DLOGIC_SMOKE_H
#define QT3DLOGIC_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtsvg_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qt3dlogic_Smoke;
extern "C" SMOKE_EXPORT void init_qt3dlogic_Smoke();
extern "C" SMOKE_EXPORT void delete_qt3logic_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
