#include <stdio.h>
#include <stdlib.h>
#include <time.h>



/* Declaration des variable */
int c, n, Caractere;
int Lignes, Colones ;
int NLignes , NColones;

/* Declaration des fonctions */
int Random ();



/* Fonctions */

int Random ()
{
	n = rand() % 100 + 21;
    return n;
	}
	
	
int Trier ()
{
		if ((n>48) && (n<58)) 
		{ 
			Caractere = n;
			return n;}
		else 
		{
			if ((n>65) && (n<91))
					{ 
						Caractere = n;
						return n;
					}
			else
			{
				if ((n>97) && (n<123))
						{ 
						Caractere = n;
						return n;}
				else
				{  return n;}
			}
		}
}


	
/* Fonction main () */



int main() {
  

  printf("\n\n\n Effet Mattrix en console, affiche des caracteres Ascii.\n");
  printf(" Compile avec gcc.\n\n");
  printf("\nEntrez le nombre de colones: ");
  scanf ("%i",&NColones);
  printf("\nEntrez le nombre de lignes: ");
  scanf ("%i",&NLignes);
  srand(time(NULL));
  printf("\n\n C est parti ...\n\n");
  for (Lignes =1 ; Lignes < NLignes ; Lignes++)
  {
  for (Colones = 1; Colones <= NColones; Colones++) 
  { 
	  Random ();
	  Trier ();
  printf (" %c ", Caractere );
  }
  printf ("\n");
  }
  printf(" \n\n *****\n");
  
exit(EXIT_SUCCESS); 
}
