#include <stdio.h>

void print_getal(int x){
	printf("%p %d\n", &x, x);
}

int main (int argc, char* argv[])
{
	int getal = 10;
	printf("%p %d\n", &getal, getal);
	print_getal(getal);
    
   return 0;
}
