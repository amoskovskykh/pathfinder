#include "../inc/libmx.h"

char *mx_strcpy(char *dst, const char *src) {
    dst[0] = src[0];
    for (int i = 0; src[i++]; dst[i] = src[i]);
    return dst;
}

// int main(void)
// {
//     char *s = "hello";
//     char c;
//     printf("%s", mx_strcpy(&c, s));
//     return 0;
// }
