#include <stdio.h>
#include <string.h>

#define MAX 20

typedef struct{
	char name[MAX];
	short int lives;
	short int powerUp;
	double score;
	int numberOfCoins;
} mario;

void func(mario x);

int main(int argc, char **argv)
{
	mario speler1;
    mario *marioPointer = &speler1;

	speler1.lives = 3;
	speler1.powerUp = 0;
	speler1.score = 0.0;
	speler1.numberOfCoins = 0;
	strcpy(speler1.name, "F4tal!ty");

	func(speler1);

	printf("Het adres van struct speler 1 %p\n", marioPointer);
	printf("Het adres van datamember 'lives' %p en waarde: %d\n", 
		&(*marioPointer).lives, (*marioPointer).lives);

	return 0;
}

void func(mario x) //CALL BY VALUE!
{
	printf("%s:\n#lives: %d\n#power ups: %d\nscore: %f\n# coins: %d\n",
	 x.name, x.lives, x.powerUp, x.score, x.numberOfCoins);
}