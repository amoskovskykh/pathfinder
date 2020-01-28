#include "libmx.h"

int mx_exp_search(char **arr, int size, const char *s) {
    if(mx_strcmp(arr[0], s) == 0)
        return 0;
    int i = 1;
    for(; i < size && mx_strcmp(arr[i], s) <= 0; i *= 2);
    return mx_bin_search(arr, i/2, (i < size) ? i : size, s);
}


// int main(void) {
//     char *arr[6] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//     int count = 0;
//     printf("%d\n", mx_exp_search(arr, 6, "z"));  //returns 3 and count = 3
//     printf("%d", mx_binary_search(arr, 6, "z", &count));
//     printf("\ncount: %d\n", count);  //returns 2 and count = 1
// }
