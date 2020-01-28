#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *p = mx_create_node(data);
    if ((p == NULL) || (list == NULL))
        return;
    p -> data = data;
    p -> next = NULL;
    if(*list == NULL)
        *list = p;
    else {
        t_list *last = *list;
        while(last -> next != NULL)
            last = last -> next;
        last -> next = p;
    }
}

// int main(void) {
//     char *s1 = "Wake";
//     char *s2 = " up,";
//     char *s3 = "Neo"; 
//     t_list *p1 = mx_create_node(s2);
//     mx_push_front(&p1, s1);
//     mx_push_back(&p1, s3);
//     mx_printlist(p1);
//     return 0;
// }
