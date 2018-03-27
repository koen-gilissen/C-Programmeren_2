#ifndef PLANEET_H
#define PLANEET_H

#include <stdio.h>
#include <string.h>

#define MAX 20

typedef struct{
    double he;
    double h;
    signed int temp;
}atmos;

typedef struct{
char naam[MAX];
double massa;
double diameter;
double afstandTotZon;
atmos atmos;
}planeet;

/*
 * print de info van een planeet
 * @return void
 * @param1: *planeet: info of this planet is printed
*/
void printPlaneetInfo(planeet *p);

int massaCompare(const void *a, const void *b);

#endif // PLANEET_H
