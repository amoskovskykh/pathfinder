#include "../inc/libmx.h"


void mx_pop_front(t_list **list) {
    if (list == NULL || *list == NULL)
        return;
    t_list * p = (*list) -> next;
    free(*list);
    *list = p;
}

// void mx_pop_front(t_list **head)
// {
//     if (head == NULL || *head == NULL)
//         return;
//     t_list *first = *head;
//     if(first->next == NULL)
//     {
//         free(*head);
//         *head = NULL;
//         return;
//     }
//     first = first->next;
//     free(*head);
//     *head = first;
// }

// int main(void) {
//     char *s1 = "Wake";
//     char *s3 = "Neo"; 
//     char *s2 = " up,";
//     t_list *p1 = mx_create_node(s2);
//     mx_push_front(&p1, s1);
//     mx_push_back(&p1, s3);
//     mx_printlist(p1);
//     mx_pop_front(&p1);
//     mx_printlist(p1);
//     return 0;
// }
