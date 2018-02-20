#include <stdio.h>

int * new_integer(void){
	//static int x = 4645;
	static int x = 4645;
	return &x;
}

int main (int argc, char* argv[])
{
	int * danger = new_integer();
	printf("Address of danger: %p\n", danger);
    
   return 0;
}
