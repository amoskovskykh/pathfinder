#include "path.h"

static void mx_check_file(const char *str) {
    if (str == NULL)
        mx_error(file_does_not_exist, str);
    if (str[0] == '\0')
        mx_error(empty_file, str);
}

static void mx_valid_line(const char *str, int j) 
{
    int m = mx_strlen(str);
    int i;

    for (i = 0; mx_isalpha(str[i]); i++);
    if (str[i] != '-' || i == 0)
        mx_error(invalid_line, mx_itoa(j));
    i++;

    for (; mx_isalpha(str[i]); i++);
    if (str[i] != ',' || !mx_isalpha(str[i - 1]))
        mx_error(invalid_line, mx_itoa(j));
    i++;

    for (; mx_isdigit(str[i]); i++);
    if (str[i] != '\0' || !mx_isdigit(str[i - 1]))
        mx_error(invalid_line, mx_itoa(j));
}

char **mx_error_handling(const char *str) 
{
    mx_check_file(str);

    char **lines = mx_strsplit(str, '\n');
    int n = mx_strlen(lines[0]);
    
    for (int i = 0; i < n; i++)
        if (!mx_isdigit(lines[0][i]))
            mx_error(invalid_line, 1);
    if (lines[1] == NULL)
        exit(0);
    for (int i = 1; lines[i]; i++)
        mx_valid_line(lines[i], i + 1);
    return lines;
}
