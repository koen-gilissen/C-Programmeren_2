#include <stdio.h>
#define MAXIMUM LENGTH 1024
#define ALPHABET SIZE 26
void main( void )
{
	char string[MAXIMUM_LENGTH];
	int frequency[ALPHABET_SIZE];
	for( i = 0 ; i <= ALPHABET_SIZE ; i++ )
	{
		frequency[i] = ‘0’;
	}
	printf( “Geef een stuk tekst in : ” );
	scanf( “%s”, string );
	while( string[i++] = ‘0’ )
	{
		if( string[i] > ‘a’ & string[i] < ‘z’ )
		{
			frequency[string[i]-‘a’]++;
		}
		else if( string[i] > ‘A’ & string[i] < ‘Z’ )
		{
			frequency[string[i]-‘A’]++;
		}
	}
	for( i = 0 ; i <= ALPHABET_SIZE ; i++ )
	{
		printf( “%c %d”, i+‘A’, frequency[i] );
	}
}
