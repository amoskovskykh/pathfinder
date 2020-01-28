#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
	if (big_len < little_len || little_len == 0 || big_len == 0)
		return NULL;
    const char *b = big;
	for (; (big_len >= little_len) && (mx_memcmp(b, little, little_len) != 0); b++, big_len--);
	return (big_len >= little_len) ? (void *)b : NULL;
}

// int main(void)
// {
//     char strm1 [11]="0123456789";
// 	char strm2 [2]="9";
// 	printf("%s\n", (char *)mx_memmem(strm1, 10, strm2, 1));
// }
