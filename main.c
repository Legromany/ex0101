#include <stdio.h>
#include <stdlib.h>


int main()
{
	int choix;
	char prenom[100];
	int  nombreEntre, nombreRandom, r;

		printf("Bonjour ! :)\n");
		printf("Quel est ton prenom ?\n");
		scanf_s("%s", prenom, 10);
		printf("Ravi de jouer avec toi, %s ;) !.\n", prenom);
		printf("Je vais penser a un nombre entre 1 et 100 et tu devra le deviner.\n\
Je te dirai si le nombre que tu as choisis est plus grand ou \nplus petit que le nombre auquel je pense.\n");
		printf("\n");
		printf("on commence ?\n");
		printf("\n");

		do
		{
			do
			{
				srand((unsigned)time(NULL));
				r = rand();
				nombreRandom = (r % 100) + 1;

				printf("Choisis un nombre :\n");
				scanf_s("%d", &nombreEntre);

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
			} while (nombreEntre != nombreRandom);

			printf("\t\t\t BRAVO TU AS TROUVE LE NOMBRE AUQUEL JE PENSAIS !! \t\t\t");
			printf("\n");

			printf("On recommence ? [O] OUI [N] NON\n");
			scanf_s("%s", &choix, 1u);
		}
	 
		while (choix !='n');

		system("pause");

	return 0;
}