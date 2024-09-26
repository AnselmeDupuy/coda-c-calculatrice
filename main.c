#include <stdlib.h>
#include <stdio.h>

int main()
 {
 	int nombre1, nombre2;
 	char operateur;

 	printf("Choisir un symbole:\n +\n -\n /\n *\n %%\n");
 	scanf("%c", &operateur);

 	if (operateur == '+')
 	{
 		printf("addition\n");
 	}
 	else if(operateur == '-')
 	{
 		printf("soustraction\n");
 	}
 	else if(operateur == '/')
 	{
 		printf("division\n");
 	}
 	else if(operateur == '*')
 	{
 		printf("multiplication\n");
 	}
 	

 	exit(0);
 } 