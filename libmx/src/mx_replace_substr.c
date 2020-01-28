#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    if (str == NULL || sub == NULL || replace == NULL)
        return NULL;

    int m = mx_strlen(str);
    int n = mx_strlen(sub);
    int l = mx_strlen(replace);
    int count = mx_count_substr(str, sub);
    char * s = mx_strnew(m - (n - l) * count);
    int j = 0;
    int i = 0;
    int x;

    for (int k = 0; k < count; k++) {
        x = j;
        j = mx_get_substr_index(&str[x], sub) + x;
        mx_strncpy(&s[i], &str[x], j - x);
        mx_strcat(s, replace);
        i += (j - x + l);
        j += n; 
    }
    mx_strcat(s, &str[j]);
    return s;
}

// int main(void)
// {
//     // char *s1 = "bacankoac";
//     // char *s2 = "ac";
//     // char *s3 = "++++++++";
//     // printf("%s\n", );
//     printf("%s\n", mx_replace_substr("Ururu turu", "ru", "ta"));
//     return 0;
// }
