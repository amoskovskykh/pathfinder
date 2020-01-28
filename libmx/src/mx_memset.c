#include "../inc/libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    for (char * s = b; len-- > 0; *(s++) = c);
    return b;
}

// int main(void)
// {
//     char b[13];
//     printf("%s\n", mx_memset(b, 33, 2));
// }
