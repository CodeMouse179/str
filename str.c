#include "str.h"

int slen(const char* s)
{
    if (s == NULL) return 0;
    int len = 0;
    while (*(s + len) != 0) len++;
    return len;
}