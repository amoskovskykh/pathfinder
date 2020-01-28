SRC = printchar \
print_unicode \
printstr \
print_strarr \
printint \
pow \
sqrt \
nbr_to_hex \
hex_to_nbr \
itoa \
foreach \
binary_search \
bubble_sort \
quicksort \
\
strlen \
swap_char \
str_reverse \
strdel \
del_strarr \
get_char_index \
strdup \
strndup \
strcpy \
strncpy \
strcmp \
strcat \
strstr \
get_substr_index \
count_substr \
count_words \
strnew \
strtrim \
del_extra_spaces \
strsplit \
strjoin \
file_to_str \
read_line \
replace_substr \
\
memset \
memcpy \
memccpy \
memcmp \
memchr \
memrchr \
memmem \
memmove \
realloc \
\
create_node \
push_front \
push_back \
pop_front \
pop_back \
list_size \
sort_list \
\
isspace \
strncmp \
printlist \
exp_search \
bin_search \
memjoin \
strchr \
\
atoi \
isdigit \
printerr \
lib_main \
\

SRCS = $(addsuffix .c, $(addprefix mx_, $(SRC)))
INC = libmx.h
OBJS = $(SRCS:.c=.o)
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install

install:
	@cp $(addprefix src/, $(SRCS)) .
	@cp $(addprefix inc/, $(INC)) .
	@clang $(CFLAGS) -c $(SRCS) -I $(INC)
	@ar -rc libmx.a $(OBJS)
	@mkdir obj
	@mv $(OBJS) obj

uninstall: clean
	@rm -rf libmx.a

clean:
	@rm -rf ./obj
	@rm -rf $(INC)
	@rm -rf $(SRCS)

reinstall: uninstall install
