#include "path.h"

void mx_error(int num, char *message) {
    char *start[] = {
        "usage: ./pathfinder [filename]", 
        "error: invalid number of islands"
        "error: file ", "error: file ", 
        "error: line "
    };

    char *end[] = {"\n", "\n", " does not exist\n",
        " is empty\n", " is not valid\n"
    };

    write(2, start[num], mx_strlen(start[num]));
	if (message) {
		write(2, message, mx_strlen(message));
		if (num == 4) // check it than
			free(message);
	}
	write(2, end[num], mx_strlen(end[num]));
	exit(1);
}