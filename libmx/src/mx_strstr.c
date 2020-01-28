#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
	int m = mx_strlen(needle);
	int n = mx_strlen(haystack) - m + 1;
	
	if (needle == NULL) 
		return (char *) haystack;
	for (int i = 0; i < n; i++)
		if (mx_strncmp(&haystack[i], needle, m) == 0)
			return (char *) &haystack[i];
	return NULL;
}

// int main(void) {
// 	char *s = "01234";
// 	char *str = "123";
// 	printf("%s",mx_strstr(s, str));
// }
