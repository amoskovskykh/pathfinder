#include "libmx.h"

void mx_push_front(t_list **list, void *data) {
    if (list) {
        t_list *p = mx_create_node(data);
        if (p) {
            p->data = data;
            p->next = *list;
            *list = p;
        }
    }
}


// int main(void) {
//     char *s1 = "Wake";
//     char *s2 = " up,";
//     // char *s3 = "Neo"; 
//     t_list *p1 = mx_create_node(s2);
//     mx_push_front(&p1, s1);
//     mx_printlist(p1);
//     return 0;
// }
