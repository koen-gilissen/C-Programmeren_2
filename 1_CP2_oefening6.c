#include <stdio.h>

#define TRUE 1
#define FALSE 0

int order( int *smaller, int *bigger );

int main()
{
	//int lijst[] = {17, 12, 13, 9, 5, 1, 0, 7, 8, 16, 19};
	int lijst[] = {35, 34, 66, 68, 48, 82, 19, 54, 79, 35,\
					50, 99, 78, 76, 75, 7, 86, 57, 99, 28,\
					14, 74, 55, 5, 64, 88, 83, 89, 33, 37,\
					25, 78, 37, 31, 48, 33, 38, 20, 61, 80,\
					20, 44, 80, 87, 17, 7, 83, 63, 90, 87,\
					37, 38, 9, 30, 6, 11, 40, 83, 29, 74,\
					79, 25, 11, 23, 25, 39, 77, 57, 0, 72,\
					34, 46, 81, 43, 100, 46, 34, 43, 92, 15,\
					0, 44, 17, 95, 8, 33, 32, 59, 8, 27, 48,\
					21, 69, 9, 99, 85, 56, 19, 90, 71};
	//int lengte = 11;
	int lengte = 100;
	int i = 0, j = 0;
	
	for(i = 0; i < lengte-1; i++)
	{
		for(j = 0; j < lengte-1; j++)
		{
			order(&lijst[j], &lijst[j+1]);
		}
	}
	
	i = 0;
	for(i = 0; i < lengte; i++)
		printf("%d; ", lijst[i]);
	
	printf("\n");
	return 0;
}

int order( int *smaller, int *bigger )
{
	if(*smaller == *bigger)
	{
		return FALSE;
	}
	else
	{
		if(*bigger < *smaller)
		{
			int temp = *smaller;
			*smaller = *bigger;
			*bigger =  temp;
		}
		return TRUE;
	}
}
