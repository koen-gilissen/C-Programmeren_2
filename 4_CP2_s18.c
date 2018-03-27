#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(8);
   strcpy(str, "www.pxl");
   printf("String = %s,  Address = %p\n", str, str);

   /* Reallocating memory */
   str = (char *) realloc(str, 11);
   strcat(str, ".be");
   printf("String = %s,  Address = %p\n", str, str);

   free(str);
   
   return(0);
}
