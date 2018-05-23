#include <stdio.h>
#include <stdlib.h>

// Uw path hier:
#define BESTAND "C:\...\bootlog.txt"

int main()
{
    FILE * boot = NULL;
    boot = fopen(BESTAND,"r");

    if(boot == NULL)
    {
       printf("Can't open file\n");
       fclose(boot);
       exit(EXIT_FAILURE);
    }

    short int succes = 0;
    short int fail = 0;
    char tekst[100];

    while(1) //inf loop --> danger danger 
    {
        if( fgets (tekst, 100, boot)!=NULL )
        {
            short int t = 0;
            if(tekst[0] == '[' && tekst[3] == 'O' && t == 0)
            {
                succes++;
                t++;
                printf("%s\n", tekst);
            }
            else if(t == 0)
            {
                fail++;
                t++;
                printf("%s\n", tekst);
            }
            else if(t == 1)
            {
                t = 0;
            }
        }
        else if (feof(boot))
        {
            printf("End Of File Reached...\n");
            break;
        }
        else
        {
            perror("Error reading file");
            break;
        }
    }

    printf("Het aantal processen die gelukt zijn is: %d\n", succes);
    printf("Het aantal processen die niet gelukt zijn is: %d\n", fail);

    return 0;
}
