#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char *str1;
   char *str2;

   str1 = (char *) malloc(13);
   str2 = (char *) malloc(6);
   strcpy(str1, "not a zombie");
   strcpy(str2, "zombie");
   printf("String = %s,  Address = %p\n", str1, str1);
   printf("String = %s,  Address = %p\n", str2, str2);

   str2 = str1; //"zombie" is een ZOMBIE
   free(str1);
   free(str2);
   return(0);
}
