#include <stdio.h>
#include <stdlib.h>

#define __DEBUG

#define BMPINPUTFILE "C:\\Users\\Koen\\OneDrive - PXL\\PXL\\2017-2018\\SEM02_CP2\\code\\BMP_File_Reader\\input.bmp"
#define BMPOUTPUTFILE "C:\\Users\\Koen\\OneDrive - PXL\\PXL\\2017-2018\\SEM02_CP2\\code\\BMP_File_Reader\\bewerkteFile.bmp"

int main()
{
    #ifdef __DEBUG
        printf("DEBUG info: BMP transformer\n");
    #endif

    int i;
    FILE* inputFilePointer = fopen(BMPINPUTFILE, "rb"); //maak een file pointer naar de afbeelding
    if(inputFilePointer == NULL) //Test of het open van de file gelukt is!
    {
        printf("Something went wrong while trying to open %s\n", BMPINPUTFILE);
        exit(EXIT_FAILURE);
    }

    #ifdef __DEBUG
        printf("DEBUG info: Opening File OK: %s\n", BMPINPUTFILE);
    #endif

    FILE* outputFilePointer = fopen(BMPOUTPUTFILE, "wb");// maak een file pointer naar een nieuwe output file
    if(outputFilePointer == NULL)  //Test of het maken van de file gelukt is!
    {
        printf("Something went wrong while trying to open %s\n", BMPOUTPUTFILE);
        exit(EXIT_FAILURE);
    }        

    #ifdef __DEBUG
        printf("DEBUG info: Opening File OK: %s\n", BMPOUTPUTFILE);
    #endif

    unsigned char bmpHeader[54]; // voorzie een array van 54-bytes voor de BMP Header
    fread(bmpHeader, sizeof(unsigned char), 54, inputFilePointer); // lees de 54-byte header

    //Informatie uit de header (wikipedia)
    // haal de hoogte en breedte uit de header
    int breedte = *(int*)&bmpHeader[18];
    int hoogte = *(int*)&bmpHeader[22];

    #ifdef __DEBUG
        printf("DEBUG info: breedte = %d\n", breedte);
        printf("DEBUG info: hoogte = %d\n", hoogte);
    #endif

    int imageSize = 3 * breedte * hoogte; //ieder pixel heeft 3 byte data: rood, groen en blauw (RGB)
    unsigned char* inputPixels = (unsigned char *) calloc(imageSize, sizeof(unsigned char)); // allocate een array voor alle pixels
    fread(inputPixels, sizeof(unsigned char), imageSize, inputFilePointer); // Lees alle pixels (de rest van de file
    fclose(inputFilePointer);

    //BGR --> RGB
    for(i = 0; i < imageSize-3; i += 3)
    {
        unsigned char tmp = inputPixels[i];
        inputPixels[i] = inputPixels[i+2];
        inputPixels[i+2] = tmp;
    }
    //Maak de output file:
    i = 0;
    for(i = 0; i < 52; i++) //schrijf de header
    {
        putc(bmpHeader[i], outputFilePointer);
    }
    unsigned char* outputPixels = (unsigned char *) calloc(imageSize, sizeof(unsigned char)); // allocate een array voor alle pixels
    i = 0 ;
    for(i = 0; i < imageSize; i++)
    {
        outputPixels[i] = 255 - inputPixels[i];
        putc(outputPixels[i], outputFilePointer);
    }
    fwrite(outputFilePointer, sizeof(unsigned char), imageSize, outputFilePointer); //schrijf de pixels naar de file
    #ifdef __DEBUG
        printf("DEBUG info: output file generated\n");
    #endif
    fclose(outputFilePointer);
    fclose(inputFilePointer);
    free(inputPixels);
    
    return 0;
}
