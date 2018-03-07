#include <stdio.h>
#include <string.h>

int telAantalKlinkers(char *data);
int telAantalLetters(char *data);
int telAantalCijfers(char *data);

int main()
{
    char testData[] = "$GPGGA,123519,4807.038,N,01131.000,E,1,08,0.9,545.4,M,46.9,M,,*47";
    int aantalKlinkers = telAantalKlinkers(testData);
    int aantalCijfers = telAantalCijfers(testData);
    int aantalMedeklinkers = telAantalLetters(testData) - aantalKlinkers;

    printf("Aantal Klinkers: %d\n", aantalKlinkers);
    printf("Aantal Medeklinkers: %d\n", aantalMedeklinkers);
    printf("Aantal Cijfers: %d\n", aantalCijfers);
    printf("Aantal Interpuncties: %d\n", strlen(testData)-aantalCijfers-aantalKlinkers-aantalMedeklinkers);
    return 0;
}

//CAPS only
int telAantalLetters(char *data)
{
    unsigned int i = 0;
    unsigned int aantalLetters = 0;
    for(i = 0; i < strlen(data); i++)
    {   //CAPS ONLY
        if(*(data+i) >= 65 && *(data+i) <= 90)
        {
            aantalLetters += 1;
        }
    }
    return aantalLetters;
}

int telAantalCijfers(char *data)
{
    unsigned int i = 0;
    unsigned int aantalLetters = 0;
    for(i = 0; i < strlen(data); i++)
    {
        if(*(data+i) >= 48 && *(data+i) <= 57)
        {
            aantalLetters += 1;
        }
    }
    return aantalLetters;
}

//CAPS only
int telAantalKlinkers(char *data)
{
    unsigned int i = 0;
    unsigned int aantalKlinkers = 0;
    for(i = 0; i < strlen(data); i++)
    {   //CAPS ONLY
        if(*(data+i) == 65 || *(data+i) == 69 \
                || *(data+i) == 73 || *(data+i) == 79\
                || *(data+i) == 85 )
        {
            aantalKlinkers += 1;
        }
    }
    return aantalKlinkers;
}
