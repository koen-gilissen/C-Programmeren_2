#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 

#define TRUE 1
#define FALSE 0

int som( short int *getalA, short int *getalB, short int *uitkomst );

int main()
{
	short int nummer = 5000;
	//short int getal = 32700;
	short int getal = 3270;
	short int deSom = -1;
	if(som(&nummer, &getal, &deSom))
	{
		printf("%d\n", deSom);
		exit(EXIT_SUCCESS);
	}
	else
	{
		printf("limits of short int reached\n");
		exit(EXIT_FAILURE);
	}
	return 0;
}

int som( short int *getalA, short int *getalB, short int *uitkomst )
{
	int som = *getalA + *getalB; 
	if(som > SHRT_MAX)
		return FALSE;
	else
	{
		*uitkomst = (short int) som;
		return TRUE;
	} 
}
