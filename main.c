#include <stdlib.h>
#include <stdio.h>

int main()
 {
 	int nombre1, nombre2;
 	char operateur;

 	printf("Choisir un symbole:\n +\n -\n /\n *\n %%\n");
 	scanf("%c", &operateur);

 	printf("Choisir le premier nombre: ");
 	scanf("%d", &nombre1);

 	printf("Choisir le second nombre: ");
 	scanf("%d", &nombre2);

 	if (operateur == '+')
 	{
 		int resultat = nombre1 + nombre2;
 		printf("addition, %d + %d = %d\n", nombre1, nombre2, resultat);

 	}
 	else if(operateur == '-')
 	{
 		int resultat = nombre1 - nombre2;
 		printf("soustraction, %d - %d = %d\n", nombre1,nombre2,resultat);
 	}
 	else if(operateur == '/')
 	{
 		if ((nombre1 == 0)||(nombre2 == 0))
 		{
 			printf("division par 0 impossible");
 		}
 		else
 		{
 			int resultat = nombre1 / nombre2;
 			printf("division, %d / %d = %d\n",nombre1, nombre2, resultat);
 		}
 	}
 	else if(operateur == '*')
 	{
 		int resultat = nombre1 * nombre2;
 		printf("multiplication, %d * %d = %d\n",nombre1, nombre2,resultat);
 	}
 	else if(operateur == '%')
 	{
 		if ((nombre1 == 0)||(nombre2 ==0))
 		{
 			printf("division par 0 impossible\n");
 		}
 		else
 		{
 			int resultat = nombre1 % nombre2;
 			printf("modulo, %d %% %d = %d\n",nombre1, nombre2, resultat);
 		}
 	}
 	

 	exit(0);
 } 