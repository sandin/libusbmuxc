/**
 * NOTE: there two rules to import this file:
 * 1. IT IS OK to import this file in any "*.cpp" files.
 * 2. TRY NOT TO import this file in any "*.h/hpp" header files. If you have to do it,  please
 * import the "macro_undef.h" file at the end of the header file to avoid bringing these macro
 * definitions to other files.
 */
// clang-format off
#ifndef USBMUXC_MACRO_DEF_H
#define USBMUXC_MACRO_DEF_H

// DEBUG 
#ifdef NDEBUG
#define USBMUXC_DEBUG 0
#else
#define USBMUXC_DEBUG 1
#endif

// LOG 
#define USBMUXC_LOG_LEVEL 2
#if USBMUXC_LOG_LEVEL >= 0
#define USBMUXC_LOG_E(fmt, ...) \
  fprintf(stderr, "[ERROR] %s:%d:%s(): " fmt, __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__)
#else
#define USBMUXC_LOG_E(fmt, ...)
#endif
#if USBMUXC_LOG_LEVEL >= 1
#define USBMUXC_LOG_I(fmt, ...) \
  printf("[INFO] %s:%d:%s(): " fmt, __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__)
#else
#define USBMUXC_LOG_I(fmt, ...)
#endif
#if USBMUXC_LOG_LEVEL >= 2
#define USBMUXC_LOG_D(fmt, ...) \
  printf("[DEBUG] %s:%d:%s(): " fmt, __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__)
#else
#define USBMUXC_LOG_D(fmt, ...)
#endif
#if USBMUXC_LOG_LEVEL >= 3
#define USBMUXC_LOG_V(fmt, ...) \
  printf("[VERBOSE] %s:%d:%s(): " fmt, __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__)
#else
#define USBMUXC_LOG_V(fmt, ...)
#endif

// ASSERT
#define USBMUXC_ASSERT(exp, fmt, ...) if (!(exp)) { USBMUXC_LOG_E(fmt, ##__VA_ARGS__); } assert(exp)

#endif // USBMUXC_MACRO_DEF_H
// clang-format on
