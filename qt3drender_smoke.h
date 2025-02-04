#ifndef QT3DRENDER_SMOKE_H
#define QT3DRENDER_SMOKE_H
#include <qrenderapi.h>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtsvg_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qt3drender_Smoke;
extern "C" SMOKE_EXPORT void init_qt3drender_Smoke();
extern "C" SMOKE_EXPORT void delete_qt3render_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
