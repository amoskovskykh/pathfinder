#include "../inc/libmx.h"

void *mx_memchr(const void *s, int c, size_t n)
{
    size_t i;
    const char *str = s;
    for (i = 0; (i < n) && (str[i] != c); i++);
    if (str[i] == c)
        return (void *)&str[i];
    return NULL;
}

// int main(void)
// {
//     unsigned char src4[15] = "1234567890";
//     printf("%s\n", (char *)mx_memchr(src4, '4', 4));
// }
