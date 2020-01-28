#include "libmx.h"

int mx_count_words(const char *str, char delimiter) {
	if (str == NULL) 
		return -1;
	if (delimiter == '\0') 
		return 1;
	int rez = 0;
	
	for (int i = 0; str[i]; i++)
		if (str[i] != delimiter)
			for (rez++; (str[i + 1] != delimiter) && str[i + 1]; i++);
	return rez;
}

// int main(void)
// {
// 	char *s = "sdfsdfs";
// 	printf("%d", mx_count_words(s, '\0'));
// }
