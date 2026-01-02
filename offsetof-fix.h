// Override offsetof to use clang's __builtin_offsetof which is constexpr-compatible
// This must be included BEFORE qplugin.h to take effect
#ifdef __clang__
#undef offsetof
#define offsetof(type, member) __builtin_offsetof(type, member)

// Also prevent qplugin.h metadata structures from being parsed - they're internal
#define QPLUGIN_METADATA_V2_DISABLED
#endif
