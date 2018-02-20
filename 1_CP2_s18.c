#include <stdio.h>

#define TRUE 1
#define FALSE 0

int order( int *smaller, int *bigger );

int main()
{
	int i = 12, j = 44, k = 1, l = 22;
	order(&i, &j);
	order(&i, &k);
	order(&i, &l);
	order(&j, &k);
	order(&j, &l);
	order(&k, &l);
	printf( "nummers gesorteerd: %d %d %d %d\n", i, j, k, l);
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
