#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//Aantel bytes -> 1 char = 1byte
	//17chars + '\0'
    char *str = (char *) malloc(18); 
    
    strcpy (str ,"C Programmeren 2!");
    for(int i = 0; i < 18; i++){
    	printf("%c - %p\n", *(str+i), str+i);
    }
    // release memory!
    free(str);
    return 0;
}
