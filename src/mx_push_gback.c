#include "path.h"

void mx_push_gback(t_island **list, void *name) {
    t_island *p = mx_create_gnode(name);

    if (p == NULL || list == NULL)
        return;
    if (*list == NULL)
        *list = p;
    else {
        t_island *last = *list;
        while(last -> next != NULL)
            last = last -> next;
        last -> next = p;
    }
}