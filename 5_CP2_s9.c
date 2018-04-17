#include <stdio.h>
#include <stdlib.h>

#define BESTAND "C:\\Users\\Koen\\OneDrive - PXL\\PXL\\2017-2018\\SEM02_CP2\\tekst.txt"

int main(void)
{
	FILE * fp = NULL;
	
	fp = fopen( BESTAND, "r");
	if(fp == NULL)
	{
		printf("Can't open file\n");
		exit(EXIT_FAILURE);
	}
	
	fclose(fp);
	return 0;
}

