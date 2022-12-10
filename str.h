//     +--------------------------------------------------------------------------------+
//     |                                      str                                       |
//     |  Introduction : Better string converter and utils for C11                      |
//     |  Modified Date : 2022/12/10                                                    |
//     |  License : MIT                                                                 |
//     |  Source Code : https://github.com/CodeMouse179/str                             |
//     |  Readme : https://github.com/CodeMouse179/str/blob/main/README.md              |
//     |                                                                                |
//     |                             Designer : CodeMouse179                            |
//     |  Email : codemouse179@gmail.com                                                |
//     |  Github : https://github.com/CodeMouse179                                      |
//     |  Bilibili : https://space.bilibili.com/3461577785215838                        |
//     +--------------------------------------------------------------------------------+

#ifndef CODEMOUSE_STR_H
#define CODEMOUSE_STR_H

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