#include <stdio.h>
#include <string.h>

#define AANTAL_STRINGS 3
#define MAXIMALE_LENGTE_STRING 20

int main()
{
	int i = 0;
	int j = 0;
	int wastedBytes = 0;

	char str0[] = "C-programmeren 2";
	char str1[] = "Koen";
	char str2[] = "Gilissen";
	char arrayVanStrings[AANTAL_STRINGS][MAXIMALE_LENGTE_STRING];
	
	strcpy(arrayVanStrings[0], str0);
	strcpy(arrayVanStrings[1], str1);
	strcpy(arrayVanStrings[2], str2);
	
	for (i = 0; i < AANTAL_STRINGS; i++)
	{
		for (j =0; j < MAXIMALE_LENGTE_STRING; j++)
		{
			printf(" |%c| ", arrayVanStrings[i][j]);
			if(j >= strlen(arrayVanStrings[i]))
			{
				wastedBytes += sizeof(char);
			}
		}
		printf("  --> Wasted Bytes: %d", wastedBytes);
		printf("\n");
		wastedBytes = 0;
	}	
}

