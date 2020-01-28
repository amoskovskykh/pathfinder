#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    if (str == NULL || sub == NULL)
        return -1;
    if (sub[0] == '\0')
        return 0;
    int count = 0;
    int m = mx_strlen(str) - mx_strlen(sub) + 1;
    int n = mx_strlen(sub);

    for (int i = 0; i < m; i++)        
        if (mx_strncmp(&str[i], sub, n) == 0) {
            count++;
            i += n - 1;
        }
    return count;
}

// int main(void)
// {
// 	char *s = "123";
// 	char *str = "\0";
// 	printf("%d", mx_count_substr(s, str));
// }
