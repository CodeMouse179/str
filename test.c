#include "str.h"
#include <stdio.h>

int main()
{
    int len = slen("asd");
    printf("%d\n", len);

    int len2 = slen(NULL);
    printf("%d\n", len2);

    return 0;
}