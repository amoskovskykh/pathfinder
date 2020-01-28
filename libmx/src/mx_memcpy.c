#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    const char *s = src;
	for (char *d = dst; n-- > 0; *(d++) = *(s++));
	return dst;
}

// int main(void) 
// { 
//    char csrc[100] = "Geeksfor"; 
//    mx_memcpy(csrc+5, csrc, strlen(csrc)+1); 
//    printf("%s", csrc); 
//    return 0; 
// } 
