//Fa�a um programa que pergunte ao usu�rio qual a letra inicial do seu sexo (masculino/feminino) e
//escreva por extenso o sexo informado, usando o operador condicional tern�rio.

//Bibliotecas
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

//Fun��o principal
int main()
{

char sexo;

setlocale(LC_ALL, "Portuguese");
system("color A");

printf("Informe M para sexo masculino.");
printf("\nInforme F para sexo feminino.");

printf("\n\nInforme seu sexo para a verifica��o: ");
fflush(stdin);
scanf("%d", &sexo);

sexo == 'M' ? printf("\nO sexo informado foi do tipo masculino!") : printf("\nO sexo informado foi do tipo feminino!");

    printf("\n\n\n");
	system("pause");
	return 0;

}

