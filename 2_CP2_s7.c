#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < argc; i++)
	{
		for (j =0; j < strlen(argv[i]); j++)
		{
			printf(" |%c| ", argv[i][j]);
		}
		printf("\n");
	}	
}

