#include <stdio.h>

void add( int x)
{
	int total = 10;
	x += total;
}

int main()
{
	int count = 0;
	add( count );
	printf("count = %d \n", count);
	return 0;
}