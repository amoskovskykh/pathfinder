#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str) {
	if (str == NULL) 
		return NULL;
	char *r = mx_strnew(mx_strlen(str));
	for (int i = 0, j = 0; str[i] != '\0'; r[j++] = str[i++])
		if (mx_isspace(str[i]))
			for (r[j++] = ' '; mx_isspace(str[i]); i++);
	char *s = mx_strtrim(r);
	free(r); 
	return s;
}

// int main()
// {
// 	char *name = "\f My name... is \r Neo \t\n ";
// 	printf("%s\n",mx_del_extra_spaces(name)); //returns "My name... is Neo"
// 	return 0;
// }
