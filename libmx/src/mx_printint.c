#include "../inc/libmx.h"

void mx_printint(int n) {
    unsigned int m = n; 
    int v;
    
    if (n < 0) {
        mx_printchar('-');
        m = -n;
    }
    for (v = 1; m / v >= 10; v *= 10);
    for (; v > 0; v /= 10)
        mx_printchar((m / v) % 10 + '0');
}

// void mx_printint(int n) {
//     unsigned int m = (n < 0) ? -n : n; 
//     int v;
//     mx_printstr((n < 0) ? "-" : "");
//     for (v = 1; m / v >= 10; v *= 10);
//     for (; v > 0; v /= 10)
//         mx_printchar((m / v) % 10 + '0');
// }

// int main(void)
// {
//     mx_printint(-2147483647);
//     return 0;
// }
