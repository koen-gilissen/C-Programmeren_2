#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double he;
    double h;
    signed int temp;
}atmosphere;

int main()
{
    int *dynamInt = (int *) malloc(sizeof(int));
    char *dynamChar = (char *) malloc(sizeof(char));
    atmosphere *dynamAtmosphere = (atmosphere *) malloc(sizeof(atmosphere));

    *dynamInt = 12;
    *dynamChar = 'c';
    dynamAtmosphere->he = 12.99;
    dynamAtmosphere->h = 7.88;
    dynamAtmosphere->temp = -188;

    printf("dynamically allocated int: %d\n", *dynamInt);
    printf("dynamically allocated char: %c\n", *dynamChar);
    printf("dynamically allocated atmosphere He: %lf\n", dynamAtmosphere->he);
    printf("dynamically allocated atmosphere H: %lf\n", dynamAtmosphere->h);
    printf("dynamically allocated atmosphere temp: %d\n", dynamAtmosphere->temp);

    return 0;
}
