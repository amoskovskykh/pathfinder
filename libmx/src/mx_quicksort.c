#include "../inc/libmx.h"

int mx_quicksort(char **arr, int left, int right) 
{
    if (arr == NULL && *arr == NULL)
        return -1;

    int swap = 0;
    int shelf = 0;
    int low = left, high = right;
    char *middle = arr[(low + high) / 2];

    while (low < high) {
        while (mx_strlen(arr[low]) < mx_strlen(middle) && low < right) low++;
        while (mx_strlen(arr[high]) > mx_strlen(middle) && high > left) high--;
        if (low < high) {
            if (mx_strlen(arr[low]) > mx_strlen(arr[high])) {
                shelf++;
                char *tmp = arr[low];
                arr[low] = arr[high];
                arr[high] = tmp;
            }
            low++;
            high--;
        }
    }

    if (!mx_strcmp(arr[low], middle) && low < right)
         low++;
    if (left != high) {
        swap += shelf;
        mx_quicksort(arr, left, high);
    }
    if (low != right) {
        swap += shelf;
        mx_quicksort(arr, low, right);
    }
    return swap;
}



// #include <time.h>

// int main() {
//     srand(time(NULL));
//     // char *arr[4] = {"4444", "333", "22", "1"};  
//     // printf("Start\n"); //
//     // for(int i = 0; i < 4; i++)
//     //     printf("%s\n", arr[i]);
//     // printf("\n");

//     char **arr = (char **)malloc(sizeof(char *) * 100);
//     for (int i = 0; i < 100; ++i) {
//         arr[i] = mx_strnew(99);

//         for (int j = 0; j < rand() % 100; ++j)
//             for (int k = 0; k < j; ++k)
//                 arr[i][k] = 65 + rand() % 26;
//     }

//     int j = mx_quicksort(arr, 0, 99);

//     printf("\n%d\n", j);

//     printf("Sorted array:\n");
//     for(int i = 0; i < 100; i++)
//         printf("%s\n", arr[i]);
        
// }

// // printf("interation\n"); //
// // for (int i = 0; i < 4; i++) //
// //     printf("%s \n", arr[i]); //
// // printf("\n"); ///s
