#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    return mx_strncpy(mx_strnew((mx_strlen(s1) > (int) n) ? n : mx_strlen(s1)), s1, n); 
}

// int main(void)
// {
//     char *s = "1234567";
//     printf("%s",mx_strndup(s,89));
// }
