#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>

typedef struct {
    char name[30];
    int stdNr;
    float percent;
}student;

int main() {
    uint16_t numS = 0;
    printf("Hoeveel studenten?\n");
    scanf("%"SCNu16,&numS);
    student* ptrStd = malloc(sizeof(student)*numS);

    for(uint8_t i = 0;i<numS;i++) {
        printf("Geef de details in van student %"PRIu8"\n",i);
        puts("Naam: ");
        scanf("%s",ptrStd[i].name);
        puts("Studentnummer: ");
        scanf("%d",&ptrStd[i].stdNr);
        puts("Percentage: ");
        scanf("%f",&ptrStd[i].percent);
    }

    for(uint8_t i = 0;i<numS;i++) {
        printf("%s, %d, %f",ptrStd[i].name, ptrStd[i].stdNr, ptrStd[i].percent);
    }

    free(ptrStd);

    return EXIT_SUCCESS;
}
