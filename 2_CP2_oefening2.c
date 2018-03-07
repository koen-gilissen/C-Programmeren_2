#include <stdio.h>
#include <string.h>

#define USER_QUESTIONS 10
#define MAX_LENGTH 50

void printNamenLijst(char namen[USER_QUESTIONS][MAX_LENGTH]);

void printNamenLijst_alt(char *lijst, int aantalNamen, int maximaleLengte);

void sorteerAlfabetisch(char namen[USER_QUESTIONS][MAX_LENGTH]);

int main()
{
    int i = 0;
    char lijstVanNamen[USER_QUESTIONS][MAX_LENGTH];

    for(i =0; i < USER_QUESTIONS; i++)
    {
        printf("Geef een naam in...(%d/%d)\n", i+1, USER_QUESTIONS);
        scanf("%s", &(lijstVanNamen[i][0])); //iedere rij uit het 2D array bevat een string
    }

    printf("voor het sorteren: \n");
    printNamenLijst(lijstVanNamen); //Optie 1
    //printNamenLijst_alt((char*)lijstVanNamen, USER_QUESTIONS, MAX_LENGTH); //Optie 2
    printf("na het sorteren: \n");
    sorteerAlfabetisch(lijstVanNamen);
    printNamenLijst(lijstVanNamen);

    return 0;
}

// 2D Array's en call by reference
// Iedere rij 'namen[i][0]' is een array van chars met een \0 op het einde (string)
void printNamenLijst(char namen[USER_QUESTIONS][MAX_LENGTH])
{
    int i = 0;
    for(i = 0; i < USER_QUESTIONS; i++)
    {
        printf("%d: %s\n", i, *(namen+i));      // printf("%s\n", x) verwacht dat x een char pointer is,
        //printf("%d: %s\n", i, &namen[i][0]);    // Iedere inhoud van element 'namen[i][0]' is een string
    }                                           // De compiler converteerd de string naar char pointer

}

// 2de manier (advanced)
void printNamenLijst_alt(char *lijst, int aantalNamen, int maximaleLengte)
{
    int i = 0;
    for(i=0; i<aantalNamen; i++)
    {
           printf("%d: %s\n", i, (lijst+i*maximaleLengte)); // We zeggen in de argumenten lijst dat we een char pointer nodig hebben
    }                                                       // 'lijst' is het adres naar het eerste element uit het array
}                                                           // Wat is het eerste element ? lijst[0] is een array van chars met lengte 50;
                                                            // Dus we moeten zorgen dat we altijd terug uitkomen op de eerste kolom van het array
                                                            // om een char * tegen te komen

void sorteerAlfabetisch(char namen[USER_QUESTIONS][MAX_LENGTH])
{
    // Sorteer op eerste karakter geen rekening houden met CAPS/lower case of volgende letters
    char temp[MAX_LENGTH];
    int i=0, j=0;
    for(j = 0; j < USER_QUESTIONS-1; j++)
    {
        for(i = 0; i < USER_QUESTIONS-1; i++)
        {
           if(namen[i][0] > namen[i+1][0])
           {//Swap
               strcpy(temp, namen[i+1]); //save namen[i+1] in temp
               strcpy(namen[i+1], namen[i]); //overschrijf namen[i+1] met namen[i]
               strcpy(namen[i], temp); // overschrijf namen[i] met temp
           }
        }
    }
}
