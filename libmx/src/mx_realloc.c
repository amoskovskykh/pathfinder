#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
	if (!ptr)
		return malloc(size);
	if (size == 0) {
		free(ptr);
		return NULL;
	}
	size_t len = ((int) size > mx_strlen((char *) ptr)) ? size : mx_strlen(ptr);

	void *dst = malloc(len);
	if (!dst)
		return dst;
	mx_memmove(dst, ptr, (len < malloc_size(ptr)) ? len : malloc_size(ptr)); // malloc_size shows how much memory was actually allocated
	free(ptr);
	return dst;
}

// int main(void)
// {
//     char *srcv = (char *) malloc(sizeof(char) * 20);
// 	srcv = "12345690";
// 	printf ("old one: %s\n",srcv);
// 	mx_realloc(srcv,10);
// 	printf ("after realloc: %s\n",srcv);
// }
