#include "path.h"

static _Bool mx_node_check(t_island **list, void *name) {
    t_island *last = *list;

    if (mx_strcmp(last -> name, name) == 0)
        return false;
    while (last -> next != NULL) {
        if (mx_strcmp(last -> name, name) == 0)
             return false; 
        last = last -> next;
    }
    return true;
}

mx_create_graph(char **arr) {
    int count = 0;
    t_island *p = (t_island *) malloc (sizeof(t_island));
    p = NULL;
    int k = 0;
    int j;

    for (int i = 1; arr[i]; i++) {
        for (j = 0; is_alpha(arr[i][k + j]); j++);
        char *name = mx_strncpy(mx_strnew(j), &arr[i][k], j);
        if (mx_node_check(&p, name))
            mx_push_gback(&p, name);
            k = j + 1;
        free(name);
        for (j = 0; is_alpha(arr[i][k + j]); j++);
        


    }
}