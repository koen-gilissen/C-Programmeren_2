#include <stdio.h>

int main(int argc, char *argv[])
{	 
	int i = 7;
	int *ip = &i;
	printf("adres %p bevat %d\n", ip, *ip);
	*ip = 8;
	printf("Nu bevat adres %p: %d\n", ip, *ip);
	return 0;
}
