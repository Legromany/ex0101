#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void joueur();
void partie();

int main()
{
	char choix = 'a';
	srand((unsigned)time(NULL));
	joueur();

	do
	{
		partie();
		printf("On recommence ? [o] OUI [n] NON\n");
		scanf_s(" %c", &choix, 1u);
	}

	while (choix = 'o'&&choix!='n');

	return 0;
}

void joueur()
{
	char prenom[100];
	printf("Bonjour ! :)\n");
	printf("Quel est ton prenom ?\n");
	scanf_s("%s", prenom, 10);
	printf("Ravi de jouer avec toi, %s ;) !.\n", prenom);
	printf("Je vais penser a un nombre entre 1 et 100 et tu devra le deviner.\n\
Je te dirai si le nombre que tu as choisis est plus grand ou \n\
plus petit que le nombre auquel je pense.\n");
	printf("\n");
	printf("on commence ?\n");
	printf("\n");
}

void partie()
{
	int  nombreEntre = 0, nombreRandom;
	nombreRandom = (rand() % 100) + 1;

	printf("Choisis un nombre :\n");
	scanf_s(" %d", &nombreEntre);

	while (nombreEntre != nombreRandom)
		if (nombreEntre < nombreRandom)
		{
			printf("C'est plus !\n");
			scanf_s("%d", &nombreEntre);
		}
		else if (nombreEntre > nombreRandom)
		{
			printf("C'est moins !\n");
			scanf_s("%d", &nombreEntre);
		}
	printf("\t\t\t BRAVO TU AS TROUVE !! \t\t\t");
	printf("\n");

}