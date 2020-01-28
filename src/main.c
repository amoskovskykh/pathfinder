#include "path.h"

int main(int argc, char **argv) {
    if (argc != 2)
        mx_error(wrong_usage, NULL);
        
    mx_create_graph(mx_error_handling(mx_file_to_str(argv[1])));

}

