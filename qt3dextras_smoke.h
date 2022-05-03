#ifndef QT3D_SMOKE_H
#define QT3D_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtsvg_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qt3dextras_Smoke;
extern "C" SMOKE_EXPORT void init_qt3dextras_Smoke();
extern "C" SMOKE_EXPORT void delete_qt3extras_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
