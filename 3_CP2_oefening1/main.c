#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "planeet.h"



int main()
{
     planeet jupiter;
     planeet saturnus;
     planeet jethrotopia;
     planeet aarde;

     strcpy(jupiter.naam, "jupiter");
     jupiter.massa = 317.8;
     jupiter.diameter = 10.517;
     jupiter.afstandTotZon = 778;
     jupiter.atmos.h = 75.0;
     jupiter.atmos.he = 24.0;
     jupiter.atmos.temp = -108;
     printPlaneetInfo(&jupiter);

     strcpy(saturnus.naam, "saturnus");
     saturnus.massa = 116;
     saturnus.diameter = 58.232;
     saturnus.afstandTotZon = 143;
     saturnus.atmos.h = 93.2;
     saturnus.atmos.he = 6.7;
     saturnus.atmos.temp = -180;
     printPlaneetInfo(&saturnus);

     strcpy(jethrotopia.naam, "jetrhotopia");
     jethrotopia.massa = 5;
     jethrotopia.diameter = 22;
     jethrotopia.afstandTotZon = 488;
     jethrotopia.atmos.h = 70;
     jethrotopia.atmos.he = 10;
     jethrotopia.atmos.temp = 180;
     printPlaneetInfo(&jethrotopia);

     strcpy(aarde.naam, "aarde");
     aarde.massa = 1;
     aarde.diameter = 6.371;
     aarde.afstandTotZon = 149.6;
     aarde.atmos.h = 54;
     aarde.atmos.he = 12;
     aarde.atmos.temp = 23.85;
     printPlaneetInfo(&aarde);


     planeet lijstVanPlaneten[4];
     lijstVanPlaneten[2] = jupiter;
     lijstVanPlaneten[0] = aarde;
     lijstVanPlaneten[3] = saturnus;
     lijstVanPlaneten[1] = jethrotopia;

     printf("Voor Sorteren van planeten:\n----------------------------\n\n");
     int i = 0;
     for(i = 0; i < 4; i++){
         printPlaneetInfo(&lijstVanPlaneten[i]);
     }

     // qsort is een stdlib functie in C
     // meer info in https://linux.die.net/man/3/qsort
     qsort(lijstVanPlaneten, 4, sizeof(planeet), massaCompare);

     printf("Na Sorteren van planeten:\n----------------------------\n\n");

     i = 0;
     for(i = 0; i < 4; i++){
         printPlaneetInfo(&lijstVanPlaneten[i]);
     }

    return 0;
}
















