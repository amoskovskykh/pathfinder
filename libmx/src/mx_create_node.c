#include "libmx.h"

t_list *mx_create_node(void *data) {
    t_list *p = (t_list *) malloc(sizeof(t_list));
    p -> data = data;
    p -> next = NULL;
    return p;
}

// int main(void) {
//     char *s1 = "Wake";
//     // char *s2 = " up,";
//     // char *s3 = "Neo"; 
//     t_list *p1 = mx_create_node(s1);
//     mx_printlist(p1);
//     return 0;
// }

