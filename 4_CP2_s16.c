#include <stdio.h>
#include <stdlib.h>

int main () {
   int i = 0;
   int n = 0;
   char *tekst; 

   printf("Geef tekst in:\n");
   scanf("%s",&n);

   a = (int*)calloc(n, sizeof(int));
   printf("geef %d getallen in: \n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("Alle getallen: \n");
   for( i=0 ; i < n ; i++ ) {
      printf("%d\n",a[i]);
   }
   free( a );
   
   return(0);
}

