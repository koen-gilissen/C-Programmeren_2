#include <stdio.h>

void printArray(char **data, int aantalElementen);

int main()
{
    char *raggedArray[] = {"They say", "don\'t try this at home...\n",\
                           "So I\'m coming over", " to your house to try it"};

    printArray(raggedArray, 4);

    return 0;
}

void printArray(char **data, int aantalElementen)
{
    int i = 0;
    for(i = 0; i < aantalElementen; i++)
    {
        printf("%s ", data[i]);
        //printf("%s ", *(data+i)); // Kan ook
    }
    printf("\n");
}
