#include "inc/libmx.h"

// printf("%zu\n", malloc_size(mx_strtrim(name)));

// void mx_printlist(t_list *list) {
//     t_list *q = list;
//     while (q->next != NULL) {    
//         mx_printstr(q->data);
//         mx_printstr(" ");
//         q = q->next;
//     }
//     mx_printstr(q->data); 
// }

// int main() {
//     char *s = "yoyoyoyo";
//     char *c = NULL;
//     printf("%d\n", mx_count_substr(s, c));
// }

int main() {
    //char *s = "  follow  *   the  white rabbit ";
    char *s = "";
    printf("%d\n", mx_count_words(s, ' '));
}

// int main() {   
//     t_list *s = mx_create_node("dojo");
//     printf("%s", s->data);
//     return 0;
// }

// int main(void) {
//     char *name = "\f hello hell\t\n ";
//     //char *name = "\f  My name...\n     is  \r \nNeo  \t\n ";
//     char *s = mx_del_extra_spaces(name);
//     printf("\"%s\"\n", s);
//     printf("%zu\n", malloc_size(s));
//     //printf("%c", s[26]);
//     return 0;
// }

// int main(){
//     char *c = "t.txt";
//     printf("%s\n", mx_file_to_str(c));
//     printf("%zu\n", malloc_size(mx_file_to_str(c)));
//     return 0;
// }

// int main () {
//     char *s = "123456";
//     printf("%d\n", mx_get_char_index(s, '5'));
// }

// int main() {
//     char *s = "hello world";
//     char *c = "rld";
//     printf("%d\n", mx_get_substr_index(s, c));
// }

// int main() {
//     int s = 0;
//     printf("%s\n", mx_itoa(s));
//     return 0;
// }

// int main() {
//     char *a = "papa";
//     char *b = "mama";
//     char *c = "ss";
//     t_list *head = mx_create_node(a);
//     t_list *s1 = mx_create_node(b);
//     head->next = s1;
//     t_list *s2 = mx_create_node(c);
//     s1->next = s2;
    
//     int k = mx_list_size(head);
//     printf("%d", k);
//     return 0;
// }

// int main () {
//     char d[] = "987654321987654321";
//     char s[] = "0123456789";
//     printf("%s\n", mx_memccpy(d, s, 's', 7));
//     printf("%s\n", d);
//     return 0;
// }

// int main () {
//     char s1[] = "01234567890123456789";
//     printf("%s\n", mx_memchr(s1, '3', 7));
//     return 0;
// }

// int main () {
//     char s1[] = "01234567890123756789";
//     char s2[] = "01234567890123456789";
//     printf("%d\n", mx_memcmp(s1, s2, 20));
//     return 0;
// }

// int main () {
//     char s[] = "8888888888888888888888";
//     char v[] = "123456";
//     printf("%s\n", mx_memcpy(s, v, 5));
//     return 0;
// }

// int main () {
//     char s1[] = "7R8FeGZJEH9    WEy4i9BcMw1BWsZk";
//     char s2[] = "";
//     int j = 70;
//     int i = 2;
//     printf("%s\n", mx_memmem(s1, j, s2, i));
//     printf("%s\n", memmem(s1, j, s2, i));
//     return 0;
// }

// int main () {
//     char s1[] = "Trinity";
//     printf("%s\n", mx_memmove(&s1[2], &s1[0], 3)); //trity
//     return 0;
// }

// int main () {
//     char s1[] = "Trinitiiiiiyfadlkb";
//     printf("%s\n", mx_memrchr(s1, 'i', 90));
//     return 0;
// }

// int main () {
//     char s[] = "jjjjjooooodddddkkkkk";
//     printf("%s\n", mx_memset(s, '5', 6));
//     return 0;
// }

// int main() {
// 	char *a = "papa";
//     t_list *head = mx_create_node(a);
// 	// char *b = "mama";
//     // t_list *s1 = mx_create_node(b);
//     // head->next = s1;
//     mx_pop_back(&head);
//     mx_printlist(head);
//     return 0;
// }

// int main() {
// 	char *a = "papa";
// 	char *b = "mama";
//     t_list *head = mx_create_node(a);
//     t_list *s1 = mx_create_node(b);
//     head->next = s1;
//     mx_pop_front(&head);
//     mx_printlist(head);
//     return 0;
// }

// int main() {
//     char *s[] = {"mama", "myla", "ramu", "ramu", "myla", "ramu", "ramu", NULL};
//     char delim = '*';
//     mx_print_strarr(s, &delim);

//     return 0;
// }

// int main() {
//     int c = 9733;
//     mx_print_unicode(c);
//     printf("%c",'\n');
//     //wprintf(L"\n%ls\n", c);
//     return 0;
// }

// int main() {
//     char *a = "ma";
//     char *b = "pa";
//     char *c = "ss";
//     t_list *head = mx_create_node(a);
//     t_list *s1 = mx_create_node(b);
//     head->next = s1;
//     mx_push_back(&head, c);
//     mx_printlist(head);
//     return 0;
// }

// int main() {
//     //printf("%s\n", mx_nbr_to_hex(9223372036854775807));
//     printf("%s\n", mx_nbr_to_hex(0));
//     return 0;
// }

// int main() {
//     t_list *t = mx_create_node("mama"); // check for NULL as well
//     mx_push_front(&t, "papa");
//     mx_printlist(t);
//     return 0;
// }

// int main() {
//     //char *s[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
//     char *s[] = {"666666", "333", "999999999", "1", "88888888", "4444", "55555", "7777777", "22"};
//     for (int i = 0; i <= 8; i++) {
//         printf("%s ", s[i]);
//     }
//     printf("%c", '\n');
//     printf("%d\n", mx_quicksort(s, 0, 8));
//     for (int i = 0; i <= 8; i++) {
//         printf("%s ", s[i]);
//     }
//     return 0;
// }

// int main() {
//     int fd = open("frag", O_RDONLY);
//     char *line;

//     int k = mx_read_line(&line, 20, 'f', fd);
//     printf("%d\n", k);
//     printf("%s\n", line);
//     // int o = mx_read_line(&line, 0, '0', fd);
//     // printf("%d\n", o);
//     // printf("%s\n", line);
//     int m = mx_read_line(&line, 35, 't', fd);
//     printf("%d\n", m);
//     printf("%s\n", line);
//     int n = mx_read_line(&line, 4, '.', fd);
//     printf("%d\n", n);
//     printf("%s\n", line);
    
//     // int n = mx_read_line(&line, 4, '}', fd);
//     // printf("%d\n", n);
//     // printf("%s\n", line);
//     // for (int i = 0; line[i]; i++) {
//     //     if (line[i] == '\n') {
//     //         printf("%d", '\n');
//     //     }
//     //     printf("%d/", line[i]);
//     // } 

//     close(fd);
//     return 0;
// }

// int main () {
//     char *ptr;
//     ptr = mx_realloc(NULL, 20);
//     mx_strcpy(ptr, "This first, ");
//     printf("%s\n", ptr);
//     printf("%zu\n", malloc_size(ptr));
//     ptr = mx_realloc(ptr, 40);
//     // for (int i = 0; i < 10; i++) {
//     //     printf("%c", ptr[i]);
//     // }
//     mx_strcat(ptr, "This second, ");    
//     printf("%s\n", ptr);
//     printf("%zu\n", malloc_size(ptr));
//     ptr = mx_realloc(ptr, 0);
//     printf("%s\n", ptr);
//     printf("%zu\n", malloc_size(ptr));
// }

// int main() {
//     printf("%s", mx_replace_substr("Ururuturu", "uru", "5"));
//     return 0;
// }

// int main() {
//     /*char *a = "6";
//     char *b = "4";
//     char *c = "8";
//     char *d = "2";*/
//     t_list *head = mx_create_node("ma");
//     t_list *s1 = mx_create_node("pa");
//     t_list *s2 = mx_create_node("son");
//     t_list *s3 = mx_create_node("daugter");
//     head->next = s1;
//     s1->next = s2;
//     s2->next = s3;
//     mx_printlist(head);
//     printf("\n");
//     t_list *f = mx_sort_list(head, mx_cmp);
//     mx_printlist(f);
//     return 0;
// }

// int main(void) {
//     char str[] = "game _over";
//     //char str[] = "34";
//     printf("\"%s\" - ", str);
//     mx_str_reverse(str);
//     printf(" \"%s\" ", str);
//     return 0;
// }

// int main(void) {
//     char s[20];
//     s[0] = 'H';
//     s[1] = 'e';
//     s[2] = '\0';
//     char ss[] = "llo";
//     mx_strcat(s, ss);
//     printf("%s\n", s);
//     return 0;
// }

// int main () { //for me, need to be deleted
// 	char a[] = "true_";
// 	char b[] = "false";
// 	char *p = mx_strjoin(a, b);
// 	printf("%s", p);
// 	return 0;
// }

// int main(void) {
//     printf("task 03\n");

//     char dst[20];
//     char src[] = "Hello";
//     mx_strncpy(dst, src, 2);

//     if (dst[2] == '\0')
//             printf("2 element is \\0 \n" );
//     else
//        printf("2 element is not \\0 \n" );
    
//     printf("%s\n", dst);

//     mx_strncpy(dst, src, 10);
//     printf("%s\n", dst);

//     mx_strncpy(dst, src, 5);
//     printf("%s\n", dst);

//     return 0;
// }

// int main() {
//     char *s = "hello kajdbhkjfdg;kfajb;ksg";
//     //char *s = "";
//     char *d = mx_strndup(s, 0);
//     printf("%s\n", d);
//     printf("%zu\n", malloc_size(d));
//     return 0;
// }

// int main(void) {
//     //char str[] = "xxM2lSLHTVkMKHRhDQt\ncjADTb4\nKthcCp16JpaU8lu3262FUxw3Ll6CSWce59DrPc\tXsArqnba9h wY8R\n\n\nyY\n\n\nqGhCOCYUuUNG QasV5TV\x96\x7f\n\n\n0XHsf\n";
//     char str[] = "       ";
//     char **p = mx_strsplit(str, ' ');
//     printf(":%s: \n", p[0]);

//     for (int i = 0; p[i]; i++) {
//         printf(":%s: \n", p[i]);
//     }
//     //printf("%s \n", p[0]);
//     // printf("%s \n", p[1]);
//     // char **s = strsplit(str, '\n');
//     // for (int i = 0; s[i]; i++) {
//     //     printf("%s", s[i]);
//     // }
// }

// int main() {
//     char *s = "hello world";
//     char *c = "";
//     printf("%s\n", mx_strstr(s, c));
// }

// int main(void) {
//     char *name = "  hello\n\t\r  ";
//     printf("%s\n", mx_strtrim(name));
//     printf("%zu\n", malloc_size(mx_strtrim(name)));
//     return 0;
// }

// int main () {
// 	char str[] = "ONE";
// 	mx_swap_char(&str[0], &str[1]);
// 	mx_swap_char(&str[1], &str[2]);
// 	printf("%s\n", str);
// 	return 0;

// }
