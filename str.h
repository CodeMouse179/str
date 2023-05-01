//      +--------------------------------------------------------------------------------+
//      |                                      str                                       |
//      |  Modified Date : 2023/5/1                                                      |
//      |  Introduction : str                                                            |
//      |  License : MIT                                                                 |
//      |  Platform : Windows, Linux, macOS                                              |
//      |  C Required Version : C 11                                                     |
//      |  API Family : https://github.com/CodeMouse179/sys                              |
//      |  Repository : https://github.com/CodeMouse179/str                              |
//      |                                                                                |
//      |                             Designer : CodeMouse179                            |
//      |  Email : codemouse179@gmail.com                                                |
//      |  Github : https://github.com/CodeMouse179                                      |
//      |  Bilibili : https://space.bilibili.com/3461577785215838                        |
//      +--------------------------------------------------------------------------------+

#ifndef STR_H
#define STR_H

#define STR_VERSION_MAJOR 0
#define STR_VERSION_MINOR 0
#define STR_VERSION_PATCH 0
#define STR_VERSION (STR_VERSION_MAJOR << 16 | STR_VERSION_MINOR << 8 | STR_VERSION_PATCH)
#define STR_VERSION_STRING "0.0.0"

//--------------------sys.h START--------------------

#define SYS_VERSION_MAJOR 1
#define SYS_VERSION_MINOR 0
#define SYS_VERSION_PATCH 0
#define SYS_VERSION (SYS_VERSION_MAJOR << 16 | SYS_VERSION_MINOR << 8 | SYS_VERSION_PATCH)
#define SYS_VERSION_STRING "1.0.0"

//Microsoft C/C++ Compiler:
#if defined(_MSC_VER) && !defined(__clang__)
#define SYSTEM_MSC 1
#endif

//GNU C/C++ Compiler:
#if defined(__GNUC__) && !defined(__clang__)
#define SYSTEM_GCC 1
#endif

//Clang C/C++ Compiler:
#if defined(__clang__)
#define SYSTEM_CLA 1
#endif

//Standard C/C++ Compiler:
#if defined(SYSTEM_GCC) || defined(SYSTEM_CLA)
#define SYSTEM_SCC 1
#endif

//Windows Platform:
#if defined(WIN32) || defined(_WIN32)
#define SYSTEM_WINDOWS 1
#endif

//Linux Platform:
#if defined(__linux__)
#define SYSTEM_LINUX 1
#endif

//macOS Platform:
#if defined(__APPLE__) && defined(__MACH__)
#define SYSTEM_MACOS 1
#elif defined(__APPLE__)
#define SYSTEM_MACOS 2
#endif

//POSIX Platform:
#if defined(SYSTEM_LINUX) || defined(SYSTEM_MACOS)
#define SYSTEM_POSIX 1
#endif

//C Language(Microsoft C/C++ Compiler):
#if defined(SYSTEM_MSC)
#if defined(__STDC_VERSION__) && !defined(__cplusplus)
#define SYSTEM_C 1
#elif !defined(__cplusplus)
#define SYSTEM_C 2
#endif
#endif

//C Language(Standard C/C++ Compiler):
#if defined(SYSTEM_SCC)
#if defined(__STDC__) && !defined(__cplusplus)
#define SYSTEM_C 1
#elif !defined(__cplusplus)
#define SYSTEM_C 2
#endif
#endif

//C Version Definition(Microsoft C/C++ Compiler):
#if defined(SYSTEM_MSC) && defined(SYSTEM_C)
#if !defined(__STDC_VERSION__)
#define SYSTEM_C_90 1
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199409L)
#define SYSTEM_C_90 1
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
#define SYSTEM_C_99 1
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L)
#define SYSTEM_C_11 1
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201710L)
#define SYSTEM_C_17 1
#endif
#endif

//C Version Definition(Standard C/C++ Compiler):
#if defined(SYSTEM_SCC) && defined(SYSTEM_C)
#if defined(__STDC__) && !defined(__STDC_VERSION__)
#define SYSTEM_C_90 1
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199409L)
#define SYSTEM_C_90 1
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
#define SYSTEM_C_99 1
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L)
#define SYSTEM_C_11 1
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201710L)
#define SYSTEM_C_17 1
#endif
#endif

//C++ Language:
#if defined(__cplusplus)
#define SYSTEM_CXX 1
#endif

//C++ Version Definition(Windows):
#if defined(SYSTEM_WINDOWS) && defined(_MSVC_LANG)
#if (_MSVC_LANG >= 199711L)
#define SYSTEM_CXX_98 1
#endif
#if (_MSVC_LANG >= 201103L)
#define SYSTEM_CXX_11 1
#endif
#if (_MSVC_LANG >= 201402L)
#define SYSTEM_CXX_14 1
#endif
#if (_MSVC_LANG >= 201703L)
#define SYSTEM_CXX_17 1
#endif
#if (_MSVC_LANG >= 202002L)
#define SYSTEM_CXX_20 1
#endif
#endif

//C++ Version Definition(POSIX):
#if defined(SYSTEM_POSIX) && defined(__cplusplus)
#if (__cplusplus >= 199711L)
#define SYSTEM_CXX_98 1
#endif
#if (__cplusplus >= 201103L)
#define SYSTEM_CXX_11 1
#endif
#if (__cplusplus >= 201402L)
#define SYSTEM_CXX_14 1
#endif
#if (__cplusplus >= 201703L)
#define SYSTEM_CXX_17 1
#endif
#if (__cplusplus >= 202002L)
#define SYSTEM_CXX_20 1
#endif
#endif

//--------------------sys.h END--------------------

#ifndef NULL
#define NULL ((void*)0)
#endif

int slen(const char* s);

#endif