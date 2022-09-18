//Faça um programa que leia um caractere e apresente o caractere lido na forma caractere, decimal, octal
//e hexadecimal, sendo um em cada linha.

//Bibliotecas
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

//Função principal
int main()
{

char cara;

    setlocale(LC_ALL, "Portuguese");
	system("color A");
	
	printf("Informe o caractere a seguir: ");
    fflush(stdin);
    scanf("%s", &cara);

    printf("O caractere informado equivale as seguintes formas: %c\nDecimal: %i\nOctal: %o\nHexadecimal: %x", cara, cara, cara, cara);

    printf("\n\n");
	system("pause");
	return 0;  
}
