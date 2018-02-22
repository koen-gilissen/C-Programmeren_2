#include <stdio.h>

int stringLengte( char* string ); 

int main()
{
	char testData[] = "C-programmeren 2";
	printf("lengte van %s: %d\n", testData, stringLengte(testData));
	return 0;
}

int stringLengte( char* string )
{
	int i = 0; 
	while(string[i] != '\0')
	{
		i++;
	}
	return i;
}
