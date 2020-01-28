#include "../inc/libmx.h"

typedef struct t_read {
    char *data;
    int fs;
} t_read;

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd)
{
	static t_read p = {.data = NULL, .fs = -1000};
	int count = 0;
	int c;

	if (buf_size < 1)
		return -2;
	if (p.fs != fd) {
		free(p.data);
		p.data = NULL;
	}
	p.fs = fd;

	if (p.data) {
		int n = mx_strlen(p.data);
		c = mx_strchr(p.data, delim, n);

		if (c != -1) {
			mx_memjoin(*lineptr, p.data, count, c);
			count += c;
			if (n - c - 1 != 0) {
				char *str = (char *) malloc(sizeof(char) * (n - c - 1));
				for (int i = 0; i < n - c - 1; i++)
					str[i] = p.data[1 + c + i];
				free(p.data);
				p.data = str;
			}
			return count;
		}
		mx_memjoin(*lineptr, p.data, count, n);
		count += n;
		free(p.data);
		p.data = NULL;
	}

	char temp[buf_size];
	int size = read(fd, temp, buf_size);

	if (size == -1) {
		free(p.data);
		p.data = NULL;
		return -2;
	}
	else if (size == 0 && count == 0) {
		return -1;
	}

	while (size > 0) {
		c = mx_strchr(temp, delim, size);
		if (c != -1) {
			mx_memjoin(*lineptr, temp, count, c);
			count += c;
			if (size - c - 1 != 0) {
				p.data = (char *) malloc(sizeof(char) * (size - c - 1));
				for (int i = 0; i < size - c - 1; i++)
					p.data[i] = temp[1 + c + i];
			}
			return count;
		}
		mx_memjoin(*lineptr, temp, count, size);
		count += size;
		size = read(fd, temp, buf_size);
	}
	return count;
}

// int main(void) {
// 	int fd = open("test.txt", O_RDONLY);
// 	char *str = mx_strnew(400);
	
// 	printf("%d\n", mx_read_line(&str, 20, 'f', fd)); //res = 25, str = "The hotel was abandoned a"
// 	printf("%s\n", str);

// 	free(str);
// 	str = mx_strnew(400);

// 	printf("%d\n", mx_read_line(&str, 35, 't', fd)); //res = 25, str = "The hotel was abandoned a"
// 	printf("%s\n", str);

// 	free(str);
// 	str = mx_strnew(400);

// 	printf("%d\n", mx_read_line(&str, 4, '.', fd)); //res = 25, str = "The hotel was abandoned a"
// 	printf("%s\n", str);
// 	free(str);

// 	//free(str);
// 	str = mx_strnew(400);

// 	printf("%d\n", mx_read_line(&str, 4, '.', fd)); //res = 25, str = "The hotel was abandoned a"
// 	printf("%s\n", str);
// 	free(str);
//  	//system("leaks -q aaa");
// 	return 0;
// }
