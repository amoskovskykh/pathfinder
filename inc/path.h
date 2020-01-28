#ifndef PATH_H
#define PATH_H

#include "libmx.h"

typedef struct s_island {
    char *name;
    struct subisland *array;
    struct island *next;
} t_island;

typedef struct s_subisland {
    char *name;
    int cost;
    struct subisland *next;
} t_subisland;

enum err_type {
    wrong_usage,
    invalid_islands_number,
    file_does_not_exist,
    empty_file,
    invalid_line,
};

char **mx_error_handling(const char *str);
void mx_error(int num, char *message);


#endif 
