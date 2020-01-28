#include "../inc/libmx.h"

void mx_del_strarr(char ***arr) {
    for (int i = 0; (*arr)[i] != NULL; i++)
        mx_strdel(&((*arr)[i]));
    free(*arr);
    *arr = NULL;
}

// int main(){
//     char **arr = malloc(sizeof(char*)*5);
//     arr[4] = NULL;
//     for (int i = 0; i < 4; i++)
//         arr[i] = mx_strnew(3);
//     mx_strcpy(arr[0], "qw");
//     mx_strcpy(arr[1], "qw2");
//     mx_strcpy(arr[2], "q");
//     mx_strcpy(arr[3], "123");
//     for (int i = 0; i<4 ;i++)
//         printf("%s\n", arr[i]);
//     mx_del_strarr(&arr);
//     return 0;
// }
