#include "path.h"

t_island *mx_create_gnode(void *name) {
    t_island *p = (t_island *) malloc (sizeof(t_island));
    p -> name = name;
    p -> array = NULL;
    p -> next = NULL;
}
