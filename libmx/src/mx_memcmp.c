#include "../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    if (n == 0)
		return 0;
	const char *d1 = s1, *d2 = s2;
    int i = 0;
    
	while (d1[i] && d1[i] == d2[i] && (--n > 0))
        i++;
    return d1[i] - d2[i];
}

// int main(void)
// {
//     unsigned char src3[15]="12345678907";
// 	unsigned char dst3[15]="12305678904";
//     printf("%d\n", mx_memcmp(src3, dst3, 10));
// }
