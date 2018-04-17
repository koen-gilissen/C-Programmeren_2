#include <stdio.h>
#include <stdlib.h>

#define BESTAND "C:\\Users\\Koen\\OneDrive - PXL\\PXL\\2017-2018\\SEM02_CP2\\data.txt"
#define MAX 15


int main(void)
{
	FILE * fp = NULL;
	char kolom1[MAX] = "";
	char kolom2[MAX] = "";
	double voltage1 = 0.0;
	double current1 = 0.0;
	
	fp = fopen( BESTAND, "r");
	if(fp == NULL)
	{
		printf("Can't open file\n");
		exit(EXIT_FAILURE);
	}
	fscanf(fp, "%s", kolom1);
	fscanf(fp, "%s", kolom2);
	
	fscanf(fp, "%lf", &voltage1);
	fscanf(fp, "%lf", &current1);


	
	printf("%s\n", kolom1);
	printf("%s\n", kolom2);
	printf("%lf\n", voltage1);
	printf("%lf\n", current1);
	
	printf("power = %lf Watt\n", voltage1*current1);

	
	fclose(fp);
	return 0;
}

