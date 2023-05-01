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

//Windows Platform:
#ifdef _WIN32
#define SYSTEM_WINDOWS 1
#endif
#ifdef WIN32
#define SYSTEM_WINDOWS 1
#endif

//Linux Platform:
#ifdef __linux__
#define SYSTEM_LINUX 1
#endif

//C++ Language:
#ifdef __cplusplus
#define SYSTEM_CXX 1
#endif

#endif