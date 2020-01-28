#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    int i;
    unsigned long temp = nbr;

    for (i = 0; temp / 16; i++)
        temp /= 16;
    char *res = (char *) malloc(i * sizeof(char));
    for (; i >= 0 ; i--) {
		temp = nbr % 16;
        res[i] = (temp < 10) ? temp + 48 : temp + 87;
		nbr /= 16;
	}
    return res;
}

// int main(){
//     char *r = mx_nbr_to_hex(10);
//     printf("%s\n", r);
//     return 0;
// }
