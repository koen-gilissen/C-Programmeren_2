#include <stdio.h>

int main(int argc, char *argv[])
{	 
	int i = 7;
	int *ip = NULL;
	int *pointer = &i;
	
	//printf("adres %p bevat %d\n", ip, *ip);

	if(pointer != NULL && ip == NULL)
	{
		printf("adres %p bevat %d\n", pointer, *pointer);
		printf("de integer pointer 'pointer': %p verwijst naar NIETS\n", ip);
	}
		
	return 0;
}
