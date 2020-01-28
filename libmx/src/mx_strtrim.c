#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {
	if (str == NULL)
		return NULL;
	int i, j;

	for (i = 0; mx_isspace(str[i]); i++);
	for (j = mx_strlen(str); (j > 0) && mx_isspace(str[j - 1]); j--);
	return mx_strndup(&str[i], j - i);
}

// int main()
// {
// 	char *s = "";
// 	printf("%s", mx_strtrim(s));
// }
