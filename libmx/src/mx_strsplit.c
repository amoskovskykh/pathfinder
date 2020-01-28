#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c) {
   if (s == NULL) 
      return NULL;
   int n = mx_count_words(s, c);
   char **arr = (char ** ) malloc((n + 1) * sizeof(char *));
   int m = 0;
   int j;
   
   for (int i = 0; s[i]; i++)
      if (s[i] != c) {
         for (j = 1; (s[i + j] != c) && s[i + j]; j++);
         arr[m] = mx_strnew(j);
         mx_strncpy(arr[m], &s[i], j); 
         m++;
         i += j - 1 ;
      }
   arr[n] = NULL;
   return arr;
}

// int main()
// {
//    char *s = " Knock, knock, Neo. ";;
//    char c = ' ';
//    char **arr = mx_strsplit(s, c);
//    for(int i = 0; arr[i]; i++)
//       printf("%s\n", arr[i]);
// }
