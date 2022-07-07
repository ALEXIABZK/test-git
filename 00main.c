#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{
	const int MAX_TENTATIVE = 3;
	const int NB_COULEUR = 5;
	const char COULEUR [] = {'R', 'V', 'B', 'J', 'O'};
	const int TAILLE_CODE = 4;

	char code_secret [] = {'R', 'V', 'B', 'J'};
	char saisie_utilisateur[TAILLE_CODE];
	
	for (int nb_tentative = 1; nb_tentative <= MAX_TENTATIVE; nb_tentative++)
	{
		printf("Donnez un code de 4 couleurs parmis R V B J O\n");
		fflush(stdin);
		scanf("%c%c%c%c", saisie_utilisateur, (saisie_utilisateur+1), (saisie_utilisateur+2), (saisie_utilisateur+3));
		int nb_couleur_place = 0;

		for (int i = 0; i<TAILLE_CODE; i++)
		{
			if(code_secret[i] == saisie_utilisateur[i])
			{
				nb_couleur_place++;
			}
		}
		
		
		if(nb_couleur_place == TAILLE_CODE)
		{
			printf("Bravo tu as gagne\n");
			break;
		}
		else if (nb_tentative >= MAX_TENTATIVE)
		{
			printf("Dommage! perdu!\n");
			printf(" le bon code est %c %c %c %c\n", code_secret[0], code_secret[1], code_secret[2], code_secret[3]);
		}
		else
		{
			printf("tentative = %d /%d\n", nb_tentative, MAX_TENTATIVE);
			printf("nb de couleurs bien placee = %d\n", nb_couleur_place);
		}

	}


			return 0;
}
