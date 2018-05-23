#include <stdio.h>
#define BESTAND "C://...//boot.log"

    FILE *fp;
    int count = 0;

int main()
{
    FILE* fp = fopen(BESTAND,"r");
    char buf[60];
        while (fgets(buf,60, fp) != NULL)
        {
            printf("\"%s\"\n", buf);
            if(buf[3]=='O')
            {
                count = count + 1;
            }
        }
        if (feof(fp))
        {
            puts("End of file reached");
        }
        printf("There's a total of %d ok's in boot.log.\n",count);

    return 0;
}

/*1: boot.log in linux toont welke processen er na de kernel te laden succesvol of onsuccesvol is gestart.
Maak een programma dat het aantal succesvolle  processen starten.

Maak enkel gebruik van de functie fgets()
Wat de functie fgets() met een \n?
Hoeveel maal moet de functie fgets() worden uitgevoerd om de volgende regel te lezen?*/
