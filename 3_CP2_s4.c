#include <stdio.h>
#include <string.h>

#define MAX 20

struct mario {
	char name[MAX];
	short int lives;
	short int powerUp;
	double score;
	int numberOfCoins;
};

int main(int argc, int **argv)
{
	struct mario speler1;
	struct mario speler2;

	speler1.lives = 3;
	speler1.powerUp = 0;
	speler1.score = 0;
	speler1.numberOfCoins = 0;
	strcpy(speler1.naam, "F4tal!ty");

	return 0;
}