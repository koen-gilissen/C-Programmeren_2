#include "planeet.h"

void printPlaneetInfo(planeet *p){
    printf("naam: %s\n", (*p).naam);
    printf("--------------------------------\n");
    printf("massa: %.2lf\n", (*p).massa);
    printf("afstand: %lf\n", p->afstandTotZon);
    printf("diameter: %lf\n", (*p).diameter);
    printf("He: %lf %%\n", (*p).atmos.he);
    printf("H: %lf %%\n", (*p).atmos.h);
    printf("Temperatuur: %d deg Celsius\n", (*p).atmos.temp);
    printf("\n\n");
}

int massaCompare(const void *a, const void *b)
{
    planeet *p1 = (planeet *) a;
    planeet *p2 = (planeet *) b;
    if(p1->massa > p2->massa)
        return 1;
    else if(p1->massa < p2->massa)
        return -1;
    else
        return 0;
}
