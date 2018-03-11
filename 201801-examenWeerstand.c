/**
* Author: Koen Gilissen
* Version: 1.0
* Date: 13/02/2018
*
* Description: Oplossing examenvraag 3: "weerstand"
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define AANTAL_KLEUREN 10
#define HELPSWITCH "--help"

double berekenWeerstand(int digit1, int digit2, int digit3);
int controleerKleuren(char kleur[]);
void printHelp(void);

char COLOR_CODES[AANTAL_KLEUREN][7] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "gray", "white"};

int main (int argc, char* argv[])
{
    char band1[7];
    char band2[7];
    char band3[7];
    int kleurIndexB1 = 0;
    int kleurIndexB2 = 0;
    int kleurIndexB3 = 0;
    char gaDoor[] = "y";
    double weerstand = 0;

    if(argc == 2 && (strcmp(argv[1], HELPSWITCH)==0))
    {
        printHelp();
        exit(EXIT_SUCCESS);
    }
    else if(argc != 1) //onbekende opties
    {
        printf("unknown command: use --help for more information\n");
        exit(EXIT_FAILURE);
    }

     while(strcmp("y", gaDoor)==0){
        printf("Geef de kleuren in van de 3 banden beginnend met de band korst bij de zijkant van de weerstand. Voer de kleuren in het Engels en in lower case in.\n");
        printf("Band 1 =>");
        scanf("%s", band1);
        printf("Band 2 =>");
        scanf("%s", band2);
        printf("Band 3 =>");
        scanf("%s", band3);
        kleurIndexB1 = controleerKleuren(band1);
        kleurIndexB2 = controleerKleuren(band2);
        kleurIndexB3 = controleerKleuren(band3);
        if(kleurIndexB1 != -1 && kleurIndexB2 != -1 && kleurIndexB3 != -1)
        {
           weerstand = berekenWeerstand(kleurIndexB1, kleurIndexB2, kleurIndexB3);
           printf("De weerstand %f kohm\n", weerstand);
           weerstand = 0;
        }

        printf("Wilt u nog een weerstand decoderen [y/n]?\n");
        printf("=>");
        scanf("%s", gaDoor);
    }

    printf("Bye Bye!");

    return 0;
}

double berekenWeerstand(int digit1, int digit2, int digit3)
{
    return (((digit1*10)+digit2)*pow(10, digit3))/1000;
}

int controleerKleuren(char kleur[])
{
    int i = 0;

    for( i = 0; i < AANTAL_KLEUREN; i++)
    {
        if(strcmp(kleur, COLOR_CODES[i])==0)
        {
            return i; //Geef een geldige kleur index terug [0..AANTAL_KLEUREN[
        }
    }
    return -1; //Geef een ONGELDIGE kleur index terug
}

void printHelp(void)
{
            printf("Dit is een programma dat de kleuren code van een weerstand decodeert.\n \
            Optie: --help toont deze help.\n \
            De geldige kleuren zijn:\n \
            Black\n \
            Red\n \
            Brown\n \
            Orange\n \
            Yellow\n \
            Green\n \
            Blue\n \
            Violet\n \
            Gray\n \
            White\n");
}



